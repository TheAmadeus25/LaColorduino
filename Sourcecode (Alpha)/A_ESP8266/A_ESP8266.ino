/*
  ┌────────────────────────────────────────────────────┐
  │ LaColorduino by TheAmadeus25                                                     ┃
  ├────────────────────────────────────────────────────┤
  │ https://theamadeus25.github.io/LaColorduino/                                     ┃
  ├────────────────────────────────────────────────────┤
  │ IMPORTANT! Read the Wiki on GitHub. Otherwise you will not understand how to     ┃
  │ install all THREE Sourcecodes. For problems, the Wiki is a good place to find    ┃
  │ out, how to solve it.                                                            ┃
  ├────────────────────────────────────────────────────┤
  │ I build my own clone of "LaMetric"-Smartwatch but with some Colorduino. It this  ┃
  │ kind of project how it should be and for free. It's build for everydays use like ┃
  │ showing your Subscribers on YouTube, the current track on Spotify, how strong is ┃
  │ the Euro, or the weather at the moment. There is (in the future) everything for  ┃
  │ everybody and everything is selfmade! Go check my Github page, sometimes. Maybe  ┃
  │ there is something new.                                                          ┃
  ├──────────────────────────┬─────────────────────────┤
  │ Version: 0.0.1 - ALPHA                    Date: 27.Jan.2019                      ┃
  ├──────────────────────────┴─────────────────────────┤
  └────────────────────────────────────────────────────┘
*/

/*
    NOTE!!!! IT'S IN ALPHA. I'LL UNCOMMENT USELESS THINGS AND MAKE THIS CODE MORE
    READABLY. PLEASE DON'T SEND ANY BUG REPORTS UNTIL IT REACH BETA.
    IT'S JUST A DEMO AT THE MOMENT AND I'LL UPDATE THE WIKI. 
    IF YOU ARE INTRESTED TO TEST IT, DON'T FORGET TO CHANGE:
    API_KEY               // Google apps API Token
    CHANNEL_ID            // Url of channel
    *ow_key               // Openweather API Token
    owCC.updateConditions(ow_cond, ow_key, "gb", "London", Setting.Global_Unit);
    Setting.Global_Unit   // Celsius = 5, Fahrenheit = 6, Kelvin = 7
    ssid[]                // your network SSID (name)
    password[]            // your network key
    YOU SEE, IT SHOULD BE UNIFIEDE AT THE TOP OF ONE SOURCECODE.
    NOT ALL WATCHFACES WORKS LIKE INTENDED LIKE THE YOUTUBE WATCHFACES.
    IT CAN'T HANDLE VERY BIG NUMBERS AND IM STILL WORKING TO SOLVE THIS.

    COMPILING:
    A_ESP8266            ->  Arduino IDE 1.8.6
    A_LaColorduino       ->  Arduino IDE 1.6.0
    A_LaColorduino_Icon  ->  Arduino IDE 1.6.0
    B_Calibration        ->  Arduino IDE 1.6.0

    YEAH NOT THE BEST SOLUTION, BUT I'M WORKING ON IT!
*/

//--- ESP8266 Node MCU ---//
#include <ESP8266WiFi.h>
#include <WiFiClientSecure.h>
#include <ESP8266HTTPClient.h>
#include <ESP8266mDNS.h>
#include <WiFiUdp.h>
#include <ArduinoOTA.h>
#include <FS.h>
#include <ESP8266WebServer.h>
#define ESP_Button 0
#define ESP_Led 2
//bool Can_ESP_Button_Press = true;
const bool Debug_Serial = false;

// https://tttapa.github.io/ESP8266/Chap11%20-%20SPIFFS.html
// ESP8266WebServer server(80);
// String getContentType(String filename); // convert the file extension to the MIME type
// bool handleFileRead(String path);       // send the right file to the client (if it exists)

//--- I²C ---//
#include <Wire.h>

//--- ADS1015 ---//
#include <Adafruit_ADS1015.h>
Adafruit_ADS1115 ads;
#define Trigger 20

//--- BME280 ---//
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>
#define SEALEVELPRESSURE_HPA (1013.25)
Adafruit_BME280 bme; // I2C

//--- YouTube ---//
#include <YoutubeApi.h>
#include <ArduinoJson.h>
//─────────────────────────────────────────────────────┐
#define API_KEY "*****"  // Google apps API Token
#define CHANNEL_ID "*****"              // Url of channel
//─────────────────────────────────────────────────────┘
WiFiClientSecure client;
YoutubeApi api(API_KEY, client);

//--- OpenWeatherMap ---//
#include <Time.h>
#include <TimeLib.h>
#include <OpenWeatherMap.h>
//─────────────────────────────────────────────────────┐
const char *ow_key = "*****";  // Openweather API Token
//─────────────────────────────────────────────────────┘

typedef enum wifi_s {
  W_AP = 0, W_READY, W_TRY
} WifiStat;

OWMconditions      owCC;
OWMfiveForecast    owF5;
OWMsixteenForecast owF16;
WifiStat           WF_status;

#define Weather_Unit 0

//--- Bitcoin ---//
#include <CoinMarketCapApi.h>
CoinMarketCapApi api2(client);

//--- NTP ---//
#include <NTPClient.h>
#include <WiFiUdp.h>

WiFiUDP ntpUDP;

//─────────────────────────────────────────────────────┐
// You can specify the time server pool and the offset (in seconds, can be
// changed later with setTimeOffset() ). Additionaly you can specify the
// update interval (in milliseconds, can be changed using setUpdateInterval() ).
NTPClient timeClient(ntpUDP, "europe.pool.ntp.org", 3600, 60000);
//─────────────────────────────────────────────────────┘

enum Units {Celsius = 5, Fahrenheit = 6, Kelvin = 7};

//----------------------------------------------------------------------------
// ESP8266
// http://www.c-howto.de/tutorial/praeprozessor/vordefinierte-konstanten/
// https://forum.arduino.cc/index.php?topic=376816.0
//############################################################################
//############################################################################
//############################################################################
//----------------------------------------------------------------------------
struct {
  unsigned int f1: 1;
  // https://www.tutorialspoint.com/cprogramming/c_structures.htm

  const long    refresh_delay = 10000;
  unsigned long last_refresh  = 0;
  
  const long    change_delay = 5000;
  unsigned long change_refresh  = 0;

  short  Global_Choice = Celsius;
  String Global_Unit;
  
} Setting;
//----------------------------------------------------------------------------
struct {  // Time, Temp
  long   Epoch;
  String Epoch_Date;
  short  Hour;
  short  Minute;
  short  Second;
  short  UTC;
  short  Summertime;

  const long    refresh_delay = 300000;
  unsigned long last_refresh  = 0;
} Time, Temp; // http://www.c-howto.de/tutorial/strukturierte-datentypen/bitfelder/
// http://www.c-howto.de/tutorial/zeitfunktionen/
//----------------------------------------------------------------------------
struct {  // Date
  short Day;
  short DayofWeek;
  short DayofMonth;
  short DayofYear;
  short Month;
  short Year;
  //enum {Sun, Mon, Tue, Wed, Thu, Fri, Sat};
  //enum Week {So, Mo, Di, Mi, Do, Fr, Sa};
  byte Setting;
} Date;
//----------------------------------------------------------------------------
struct {  // YouTube
  unsigned long View;
  unsigned long Comment;
  unsigned long Subscriber;
  bool HiddenSubscriber;
  unsigned long Video;
  byte Setting;
  bool Enable;
  const long    refresh_delay = 300000;
  unsigned long last_refresh  = 0;
} YouTube;
//----------------------------------------------------------------------------
struct {  // Facebook
  unsigned long Fan;
  unsigned long Friends;
  byte Setting;
  bool Enable;
} Facebook;
//----------------------------------------------------------------------------
struct {  // Twitter
  unsigned long Follower;
  byte Setting;
  bool Enable;
} Twitter;
//----------------------------------------------------------------------------
struct {  // Currency
  float EUR_to_USD;
  float EUR_to_GBP;
  float EUR_to_JPY;
  float EUR_to_Bitcoin;

  float USD_to_EUR;
  float USD_to_GBP;
  float USD_to_JPY;
  float USD_to_Bitcoin;

  float JPY_to_USD;
  float JPY_to_GBP;
  float JPY_to_EUR;
  float JPY_to_Bitcoin;

  float Bitcoin_to_USD;
  float Bitcoin_to_GBP;
  float Bitcoin_to_JPY;
  float Bitcoin_to_EUR;
  byte  Setting;  // Note: 8-bit
  bool Enable;

  const long    refresh_delay = 600000;
  unsigned long last_refresh  = 0;
} Currency;
//----------------------------------------------------------------------------
struct {  // Bitcoin, Ethereum, Dogecoin;
  String ID;
  String Name;
  String Symbol;
  int    Rank;
  double Value_to_USD;
  double Value;
  long   Supply_Available;
  long   Supply_Max;
  double Change_1h;
  double Change_24h;
  double Change_7d;
  long   Last_Update;
  
  const long    refresh_delay = 600000;
  unsigned long last_refresh  = 0;
} Bitcoin, Ethereum, Dogecoin;
//----------------------------------------------------------------------------
struct {  // Google
  short Mail;
  byte Setting;
  bool Enable;
} Google;
//----------------------------------------------------------------------------
struct {  // SteamServer
  short State;
  byte Setting;
  bool Enable;
} SteamServer;
//----------------------------------------------------------------------------
struct {  // Spotify
  String Interpreter;
  String Track;
  short  Position;
  byte   Setting;
  bool   Enable;
} Spotify;
//----------------------------------------------------------------------------
struct {  // Weather
  float  Longtitude;
  float  Latitude;
  String ID;
  String Icon;
  String Main;
  String Description;
  float  Temperatur;
  short  Temp_Unit;
  int    Wind;
  int    Humidity;
  int    Pressure;
  int    Day_Min;
  int    Day_Max;
  float  Visibility;
  char   Vis_Unit;
  float  Wind_Speed;      // m/s
  short  Wind_Direction;  // Kommt aus Himmelsrichtung
  char   Cardinal;
  String Condition;
  String Condition_Value;
  String Sunrise;         // Ohne Zeitzone und ohne Sommerzeit
  String Sunset;          // Ohne Zeitzone und ohne Sommerzeit
  byte   Setting;
  bool   Enable;
  const long    refresh_delay = 600000;
  unsigned long last_refresh  = 0;
} Weather;
//----------------------------------------------------------------------------
struct {  // Power
  float Volts;
  float Amps;
  float Watts;
  byte  Setting;
  bool  Enable;
} Power;
//----------------------------------------------------------------------------
struct {  // Environment
  long  RAW_Ambientlight;
  int   SET_Ambientlight = 1;
  long  Ambientlight;
  short OldData;
  float Temperatur;
  short Temp_Unit;
  float Pressure;
  float Altitude;
  float ApproxAltitude;
  short Humidity;
  float Barometric;
  short AirQuality;
  byte  Setting;
  bool  Enable;
  const long    refresh_delay = 10000;
  unsigned long last_refresh  = 0;
} Environment;
//----------------------------------------------------------------------------
struct {  // Github
  unsigned long Subscription;
  byte Setting;
  bool Enable;
} Github;
//----------------------------------------------------------------------------
struct {  // Pressed
  bool Button_One;
  bool Button_Two;
  bool Button_Three;
  byte Setting;
  bool Enable;
} Pressed;
//----------------------------------------------------------------------------
struct {  // Err
  short Device;
  short Colorduino;
  short Communication;
  byte Setting;
  bool Enable;
} Err;
//----------------------------------------------------------------------------
struct {  // Updating
  float Device;
  byte  Setting;
  bool  Enable;
  short State = 0;
} Updating;
//----------------------------------------------------------------------------
struct {  // Device
  short rssi;
  byte Setting;
  bool Enable;
  int  Mode  = 30;
  int  State = 0;
  int  Set   = 30;
  short WiFi_Skin = 0;
} Device;
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//############################################################################
//############################################################################
//############################################################################
void setup() {
  InitSerial();
  InitESP();
  SetESP();

  InitWiFi();
  InitOTA();
  InitADS1115();
  InitBME280();
  InitWeather();
  InitNTP();

  digitalWrite(ESP_Led, LOW);
  GetWeather();
  GetYouTube();
  GetBME280();
  GetADS1115();
  GetBitcoin();
  GetNTP();
  digitalWrite(ESP_Led, HIGH);
  SerialOutput();
}

void loop() {
  ArduinoOTA.handle();
  // server.handleClient();
  GetADS1115();

  if ( millis() - Setting.last_refresh > Setting.refresh_delay || digitalRead(ESP_Button) == LOW ) {
    digitalWrite(ESP_Led, LOW);
    SerialOutput();
    
    digitalWrite(ESP_Led, HIGH);
  }
  
  if ( millis() - Weather.last_refresh > Weather.refresh_delay ) {
    digitalWrite(ESP_Led, LOW);
    GetWeather();
    Weather.last_refresh = millis();
    digitalWrite(ESP_Led, HIGH);
  }
  
  if ( millis() - YouTube.last_refresh > YouTube.refresh_delay ) {
    digitalWrite(ESP_Led, LOW);
    GetYouTube();
    YouTube.last_refresh = millis();
    digitalWrite(ESP_Led, HIGH);
  }

  if ( millis() - Time.last_refresh > Time.refresh_delay ) {
    digitalWrite(ESP_Led, LOW);
    //GetNTP();
    Time.last_refresh = millis();
    digitalWrite(ESP_Led, HIGH);
  }

  if ( millis() - Environment.last_refresh > Environment.refresh_delay ) {
    digitalWrite(ESP_Led, LOW);
    GetBME280();
    Environment.last_refresh = millis();
    digitalWrite(ESP_Led, HIGH);
  }

  
  if ( millis() - Setting.change_refresh > Setting.change_delay ) {
    switch(Device.Mode) {
      case 20:  Device.Mode = 30; Device.Set = 30;  break;
      case 30:  Device.Mode = 40; Device.Set = 40;  break;
      case 40:  Device.Mode = 41; Device.Set = 41;  break;
      case 41:  Device.Mode = 42; Device.Set = 42;  break;
      case 42:  Device.Mode = 43; Device.Set = 43;  break;
      case 43:  Device.Mode = 20; Device.Set = 20;  break;
    }
    SerialOutput();
    Setting.change_refresh = millis();
  }
  
  
  /*
  if ( digitalRead(ESP_Button) == LOW ) {
    digitalWrite(ESP_Led, LOW);
    GetWeather();
    GetYouTube();
    GetBME280();
    GetADS1115();
    SerialOutput();
    digitalWrite(ESP_Led, HIGH);
  }*/


  //Serial.println(Environment.RAW_Ambientlight);
  //Serial.print("\t");
  //Serial.println(Environment.Ambientlight);
}

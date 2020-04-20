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
  │ Version: 0.0.5 - ALPHA                    Date: 11.Apr.2020                      ┃
  ├──────────────────────────┴─────────────────────────┤
  │ - Removing unused var                                                            ┃
  └────────────────────────────────────────────────────┘
*/

#ifndef A_Variable_h
#define A_Variable_h

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

  const long    refresh_delay = 5000;
  unsigned long last_refresh  = 0;
} Setting;
//----------------------------------------------------------------------------
struct {
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
struct {
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
struct {
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
struct {
  unsigned long Fan;
  unsigned long Friends;
  byte Setting;
  bool Enable;
} Facebook;
//----------------------------------------------------------------------------
struct {
  unsigned long Follower;                                   // Current Follower count
  unsigned long Friends;                                    // Current Friends count
  unsigned long Favorites;                                  // Current Favorites count
  unsigned long Tweets;                                     // Current Tweets count
  unsigned long Last_Retweet;                               // Last Tweet, Retweet count
  unsigned long Last_Favorite;
  byte Setting;
  bool Enable;
} Twitter;
//----------------------------------------------------------------------------
struct {  // Twitch
  unsigned long Follower;                                   // Current Follower
  unsigned long View;                                       // All-Time View
} Twitch;
//----------------------------------------------------------------------------
/*struct {
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
} Currency;*/
//----------------------------------------------------------------------------
struct {
  short Mail;
  byte Setting;
  bool Enable;
} Google;
//----------------------------------------------------------------------------
struct {
  short State;
  byte Setting;
  bool Enable;
} SteamServer;
//----------------------------------------------------------------------------
struct {
  String Interpreter;
  String Track;
  short  Position;
  byte   Setting;
  bool   Enable;
} Spotify;
//----------------------------------------------------------------------------
struct {
  String ID;
  String Icon;
  String Main;
  String Description;
  float  Temperatur;
  String Temp_Unit;
  short  Temp_Unit_2;
  int    Wind;
  int    Humidity;
  int    Pressure;
  int    Day_Min;
  int    Day_Max;
  float  Visibility;
  char   Vis_Unit;
  float  Wind_Speed;      // m/s
  short  Wind_Speed_Unit;
  short  Wind_Direction;  // Kommt aus Himmelsrichtung
  char   Cardinal;
  String Condition;
  String Condition_Value;
  short  SunriseHour;         // Ohne Zeitzone und ohne Sommerzeit
  short  SunriseMinute;
  short  SunsetHour;          // Ohne Zeitzone und ohne Sommerzeit
  short  SunsetMinute;
  String Forecast[6];
  byte   Setting;
  bool   Enable;
  const long    refresh_delay = 600000;
  unsigned long last_refresh  = 0;
} Weather;
//----------------------------------------------------------------------------
struct {  // Power
  float Transmitting;                                       // Value receveid                                       
  short Unit;                                               // 0 = Volt, 1 = Ampere, 2 = Watt                                               
  byte  Setting;                                            // Setting for Watchface
  bool  Enable;                                             // Watchface enable?
} Power;
//----------------------------------------------------------------------------
struct {
  long  RAW_Ambientlight;
  int   SET_Ambientlight = 1;
  long  Ambientlight;
  short OldData;
  float Temperatur;
  char  Unit;
  short Temp_Unit_2;
  float Pressure;
  float Altitude;
  float ApproxAltitude;
  short Humidity;
  float Barometric;
  short AirQuality;
  byte  Setting;
  bool  Enable;
} Environment;
//----------------------------------------------------------------------------
struct {  // Counterstrike GlobalOffensive
  short Delimiter = 0;                                      // 0=" ", 1="/", 2=".", 3="|", 4=":", 5="-", 6="*" | It's just an optical delimiter
  byte Setting;                                             // Setting for Watchface
  bool Enable;                                              // Watchface enable?
  const long    refresh_delay = 5000;                       // How often checking for new Information | No need for lower value
  unsigned long last_refresh  = 0;                          // Last time checking for new Information
} CSGO;
//----------------------------------------------------------------------------
struct {  // Counterstrike GlobalOffensive Player
  short        kills         = 0;                           // Value between 100 -> 0
  short        assists       = 0;                           // 
  short        deaths        = 0;                           // 
  short        health        = 0;                           // Optimized for 100 -> 0
  short        armor         = 0;                           // Value between 100 -> 0
  unsigned int flashed       = 0;                           // Value between 255 -> 0
  unsigned int burning       = 0;                           // Value between 255 -> 0
  unsigned int round_killshs = 0;                           // Optimized for 0 -> 5
  String       helmet        = "";                          // Value is true or false
  unsigned int smoked        = 0;                           // Value between 255 -> 0
  bool         defusekit     = false;                       // Value is true or undefined (wtf?)
  String       activity      = "";                          // Menu, Playing
} Player;
//----------------------------------------------------------------------------
struct {  // Counterstrike GlobalOffensive Team
  String win_team;                                          // CT or T
  String bomb;                                              // Planted, Defused, Exploded
} Round;
//----------------------------------------------------------------------------
struct {
  float Device;
  byte  Setting;
  bool  Enable;
  short State = 0;
} Updating;
//----------------------------------------------------------------------------
struct {  // Device
  short rssi;                                               // Received Signal Strength Indicator for WiFi
  byte  Setting;                                             // Setting for Watchface
  bool  Enable;                                              // Watchface enable?
  int   Mode  = 12;                                          // 
  int   State = 0;                                           // 
  int   Set   = 12;                                          // Start Watchface
  short WiFi_Skin = 0;                                      //
  short WiFi_Code = 0;                                      // Current WiFi status
  bool  WiFi_Connection = false;                             // Connected with WiFi
  bool  WiFi_Internet = false;                               // Connected to the Internet
} Device;
//----------------------------------------------------------------------------

#endif

#include <Colorduino.h>
#include <ColorTools.h>
//#include <ctype.h>

// ### Choose your Position for each Colorduino ###
// Count from left to right
// 0        : 1st Colorduino for Symbol only. It has it own sourcecode.
// 1 to 255 : 2nd to 254th Colorduino for Text/Number/Information
#define Unit_Pos 4

short True_Pos = -((Unit_Pos - 1) * 8);
short Cursor_Pos = True_Pos;

#define StringSpace 255
char IncomingString[StringSpace];
bool IncomingComplete = false;
char Temp_Array[64];
char Separator = ';';

long SubscriberCount = 0;

int Weather_Icon[] = {200, 300, 500, 511, 600, 701, 800, 801, 802, 803};


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
  unsigned long Follower;
  byte Setting;
  bool Enable;
} Twitter;
//----------------------------------------------------------------------------
struct {
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

struct {
  String  ID;
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
  float  Longtitude;
  float  Latitude;
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
struct {
  float Volts;
  float Amps;
  float Watts;
  byte  Setting;
  bool  Enable;
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
struct {
  unsigned long Subscription;
  byte Setting;
  bool Enable;
} Github;
//----------------------------------------------------------------------------
struct {
  bool Button_One;
  bool Button_Two;
  bool Button_Three;
  byte Setting;
  bool Enable;
} Pressed;
//----------------------------------------------------------------------------
struct {
  short Device;
  short Colorduino;
  short Communication;
  byte Setting;
  bool Enable;
} Err;
//----------------------------------------------------------------------------
struct {
  float Device;
  byte  Setting;
  bool  Enable;
  short State = 0;
} Updating;
//----------------------------------------------------------------------------
struct {
  short rssi;
  byte Setting;
  bool Enable;
  int  Mode  = 12;
  int  State = 0;
  int  Set   = 12;
  short WiFi_Skin = 0;
} Device;
//----------------------------------------------------------------------------
//############################################################################
//############################################################################
//############################################################################
void setup() {
  Colorduino.Init();
  unsigned char whiteBalVal[3];

  switch (Unit_Pos) {
    case 0:
      whiteBalVal[0] = 24;  // Red
      whiteBalVal[1] = 58;  // Green
      whiteBalVal[2] = 63;  // Blue
      break;                // Ref. Weiss

    case 1:
      whiteBalVal[0] = 25;  // Red
      whiteBalVal[1] = 48;  // Green
      whiteBalVal[2] = 63;  // Blue
      break;                // Stark Grün, leicht Blau  // FERTIG

    case 2:
      whiteBalVal[0] = 15;  // Red
      whiteBalVal[1] = 38;  // Green
      whiteBalVal[2] = 63;  // Blue
      break;                // Stark Blau leicht Rot   // FERTIG

    case 3:
      whiteBalVal[0] = 17;  // Red
      whiteBalVal[1] = 42;  // Green
      whiteBalVal[2] = 63;  // Blue
      break;                // Leicht Grün, Leicht Rot  //Fertig

    case 4:
      whiteBalVal[0] = 17;  // Red
      whiteBalVal[1] = 40;  // Green
      whiteBalVal[2] = 63;  // Blue
      break;                // Leicht Blau, Leicht Rot
  }

  //unsigned char whiteBalVal[3] = {18, 39, 63}; // RGB
  // #0 26, 58, 63      Ref. Weiss
  // #1 18, 39, 63      Stark Grün, leicht Blau
  // #2 15, 39, 63      Stark Blau leicht Rot
  // #3 15, 39, 63      Leicht Grün, Leicht Rot
  // #4 12, 38, 63 ???  Leicht Blau, Leicht Rot

  Colorduino.SetWhiteBal(whiteBalVal);
  InitSerial();
  //Serial.println(Cursor_Pos);

  String TestString = "aB234";

  String_toArray(TestString);

  TestString.toUpperCase();
  TestString.toCharArray(Temp_Array, 64);


  //Symbolic_Twitch();
  //Symbolic_Twitch_Count();
  //Symbolic_Clock();
  //Symbolic_Like();
  //Symbolic_Facebook();
  //Symbolic_Twitter();
  //Symbolic_Temperature(9);
  //Symbolic_YouTube_Sub();
  //Symbolic_YouTube_Comment();
  //Symbolic_YouTube_WatchTime();
  //Symbolic_YouTube_View();
  //Symbolic_YouTube_View_2();
  //Symbolic_Dollar();
  //Symbolic_Euro(true);
  //Symbolic_GMail();
  //Symbolic_WiFi(0);
  //Symbolic_Stock();
  //Symbolic_RSS();
  //Symbolic_Date(101);
  //Symbolic_Analytics();
  //Symbolic_Steam();
  //Symbolic_Steam_2();
  //Symbolic_Asteroid();
  //Symbolic_Energie();
  //Symbolic_Bitcoin();
  //Symbolic_Spotify();
  //Symbolic_Spotify_2();
  //Symbolic_Spotify_3();
  //Symbolic_PayPal();
  //Symbolic_Fortnite();
  //Symbolic_Github();
  //Symbolic_Weather_Cloud(0);
  //Symbolic_Weather(300, false);
  //Symbolic_Wind();
  //Symbolic_Humidity();
  //Symbolic_Air();
  //short TEMP = Letter(0, 0, true, '#');  // '°', 'slash', 'µ', 'ß'
  //Letter(1, 1, true, 'E');
  //Letter(5, 1, true, 'B');

  //Cursor_Pos += 1;


  //Print_Array(0, 0, true, Temp_Array[3]);
  //Print_Float(0, 0, true, 20.5);


  //Symbolic_Error();
  //GFX_Fill(255, 255, 255);
  Colorduino.FlipPage();
  //delay(100);
}
//############################################################################
//############################################################################
void loop() {

  SerialInput();

  if (IncomingComplete == true) {
    GFX_Fill(0, 0, 0);
    Cursor_Pos = True_Pos;

    switch (Device.Mode) {
      case  5:
        //Symbolic_WiFi(Device.WiFi_Skin);
        break;
        
      case  9:
        //OTA_Update();
        Print_OTA(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Updating.Device, '%');
        break;
      
      case 20:
        Print_Temperatur(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Environment.Temperatur, Environment.Temp_Unit_2);
        break;
      
      case 30:
        Print_Temperatur(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Weather.Temperatur, Weather.Temp_Unit_2);
        break;
        
      case 40:
        Print_Integer(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, YouTube.Subscriber);
        break;

      case 41:
        Print_Integer(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, YouTube.View);
        break;

      case 42:
        Print_Integer(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, YouTube.Comment);
        break;

      case 43:
        Print_Integer(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, YouTube.Video);
        break;  
      
      default:
        break;
    }
    
    //Symbolic_Weather();
    //Colorduino.FlipPage();
    IncomingComplete = false;
  }




  /*

          for (short TEST = 0; TEST < 127; TEST++) {
            Symbolic_Date(TEST);
            Colorduino.FlipPage();
            delay(100);
          }


          for (short Day = 0; Day < 127; Day++) {
            short DigitOne, DigitTwo;
            GFX_Fill(0, 0, 0);
            if (Day < 10) {
              Number(3, 2, true, Day);
              Colorduino.FlipPage();
              delay(100);
            } else {
              DigitOne = ( Day / 10 ) % 10;
              DigitTwo = Day % 10;
              Number(1, 2, true, DigitOne);
              Number(5, 2, true, DigitTwo);
              Colorduino.FlipPage();
              delay(100);
            }
          }

          for (short Day = 0; Day < 127; Day++) {
            short DigitOne, DigitTwo;
            GFX_Fill(0, 0, 0);
            if (Day < 10) {
              Number(3, 2, false, Day);
              Colorduino.FlipPage();
              delay(100);
            } else {
              DigitOne = ( Day / 10 ) % 10;
              DigitTwo = Day % 10;
              Number(1, 2, false, DigitOne);
              Number(5, 2, false, DigitTwo);
              Colorduino.FlipPage();
              delay(100);
            }
          }



      for (short ICON = 0; ICON < 10; ICON++) {
        Symbolic_Weather(Weather_Icon[ICON], true);
        Colorduino.FlipPage();
        delay(1000);
      }
  */
}
//############################################################################

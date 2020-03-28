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
  │ Version: 0.0.1 - ALPHA                    Date: 14.Apr.2019                      ┃
  ├──────────────────────────┴─────────────────────────┤
  │ + Variable File                                                                  ┃
  │ + Comment                                                                        ┃
  └────────────────────────────────────────────────────┘
*/

#ifndef A_Variable_h
#define A_Variable_h


// ESP8266
// http://www.c-howto.de/tutorial/praeprozessor/vordefinierte-konstanten/
// https://forum.arduino.cc/index.php?topic=376816.0
struct {
  const long    refresh_delay = 10000;                      // 
  unsigned long last_refresh  = 0;                          // 
  
  const long    change_delay = 5000;                        // Change Watchface after 5 seconds. | In the future, it will be depending for each Watchface
  unsigned long change_refresh  = 0;                        // Last time Watchface was changed

  short  Global_Choice = Celsius;                           // 
  String Global_Unit;                                       // 
} Setting;
//----------------------------------------------------------------------------
struct {  // Time, Temp
  long   Epoch;                                             // 
  String Epoch_Date;                                        // 
  short  Hour;                                              // 
  short  Minute;                                            // 
  short  Second;                                            // 
  short  UTC;                                               // 
  short  Summertime;                                        // 

  const long    refresh_delay = 6000;                       // How often checking for new Information | In the future, it will be rised at same accuracy.
  unsigned long last_refresh  = 0;                          // Last time checking for new Information
} Time, Temp;
//----------------------------------------------------------------------------
struct {  // Date
  short Day;                                                // 0 = Sunday, 1 = Monday, ..., 6 = Saturday
  short DayofWeek;                                          // 
  short DayofMonth;                                         // 
  short DayofYear;                                          // 
  short Month;                                              // 
  short Year;                                               // 
  //enum {Sun, Mon, Tue, Wed, Thu, Fri, Sat};               // 
  //enum Week {So, Mo, Di, Mi, Do, Fr, Sa};                 // 
  byte Setting;                                             // 
} Date;
//----------------------------------------------------------------------------
struct {  // YouTube
  unsigned long View;                                       // All-Time View
  unsigned long Comment;                                    // All-Time Comment
  unsigned long Subscriber;                                 // Current Subscriber
  bool HiddenSubscriber;                                    // Current hidden Subscriber
  unsigned long Video;                                      // Video Public
  byte Setting;                                             // Setting for Watchface
  bool Enable;                                              // Watchface enable?
  const long    refresh_delay = 300000;                     // How often checking for new Information | Don't lower this value!
  unsigned long last_refresh  = 0;                          // Last time checking for new Information
} YouTube;
//----------------------------------------------------------------------------
struct {  // Facebook
  unsigned long Fan;                                        // 
  unsigned long Friends;                                    // 
  byte Setting;                                             // Setting for Watchface
  bool Enable;                                              // Watchface enable?
} Facebook; 
//----------------------------------------------------------------------------
struct {  // Twitter
  unsigned long Follower;                                   // Current Follower count
  unsigned long Friends;                                    // Current Friends count
  unsigned long Favorites;                                  // Current Favorites count
  unsigned long Tweets;                                     // Current Tweets count
  unsigned long Last_Retweet;                               // Last Tweet, Retweet count
  unsigned long Last_Favorite;                              // Last Tweet, Favorites count
  byte Setting;                                             // Setting for Watchface
  bool Enable;                                              // Watchface enable?
  const long    refresh_delay = 60000;                      // How often checking for new Information | Don't lower this value!
  unsigned long last_refresh  = 0;                          // Last time checking for new Information
} Twitter;
//----------------------------------------------------------------------------
struct {  // Twitch
  unsigned long Follower;                                   // Current Follower
  unsigned long View;                                       // All-Time View
  byte Setting;                                             // Setting for Watchface
  bool Enable;                                              // Watchface enable?
  const long    refresh_delay = 60000;                      // How often checking for new Information | Don't lower this value!
  unsigned long last_refresh  = 0;                          // Last time checking for new Information
} Twitch;
//----------------------------------------------------------------------------
struct {  // Currency
  float EUR_to_USD;                                         // 
  float EUR_to_GBP;                                         // 
  float EUR_to_JPY;                                         // 
  float EUR_to_Bitcoin;                                     // 

  float USD_to_EUR;                                         // 
  float USD_to_GBP;                                         // 
  float USD_to_JPY;                                         // 
  float USD_to_Bitcoin;                                     // 

  float JPY_to_USD;                                         // 
  float JPY_to_GBP;                                         // 
  float JPY_to_EUR;                                         // 
  float JPY_to_Bitcoin;                                     // 

  float Bitcoin_to_USD;                                     // 
  float Bitcoin_to_GBP;                                     // 
  float Bitcoin_to_JPY;                                     // 
  float Bitcoin_to_EUR;                                     // 
  byte  Setting;                                            // Setting for Watchface
  bool Enable;                                              // Watchface enable?

  const long    refresh_delay = 600000;                     // How often checking for new Information
  unsigned long last_refresh  = 0;                          // Last time checking for new Information
} Currency;
//----------------------------------------------------------------------------
struct {  // Bitcoin, Ethereum, Dogecoin;
  String ID;                                                // 
  String Name;                                              // 
  String Symbol;                                            // 
  int    Rank;                                              // 
  double Value_to_USD;                                      // 
  double Value;                                             // 
  long   Supply_Available;                                  // 
  long   Supply_Max;                                        // 
  double Change_1h;                                         // 
  double Change_24h;                                        // 
  double Change_7d;                                         // 
  long   Last_Update;                                       // 
  
  const long    refresh_delay = 600000;                     // How often checking for new Information | Don't lower this value. Live Feed not planed atm.
  unsigned long last_refresh  = 0;                          // Last time checking for new Information
} Bitcoin, Ethereum, Dogecoin;
//----------------------------------------------------------------------------
struct {  // Google
  short Mail;                                               // Counting new Mail
  byte Setting;                                             // Setting for Watchface
  bool Enable;                                              // Watchface enable?
} Google;
//----------------------------------------------------------------------------
struct {  // SteamServer
  short State;                                              // Server Stats (Online, Offline, Slow)
  byte Setting;                                             // Setting for Watchface
  bool Enable;                                              // Watchface enable?
} SteamServer;
//----------------------------------------------------------------------------
struct {  // Spotify
  String Interpreter;                                       // Current Interpreter
  String Track;                                             // Current Tracktitle
  short  Position;                                          // Track position
  byte   Setting;                                           // Setting for Watchface
  bool   Enable;                                            // Watchface enable?
} Spotify;
//----------------------------------------------------------------------------
struct {  // Weather
  float  Longtitude;                                        // Longtitude for Town
  float  Latitude;                                          // Latitude for Town
  String ID;                                                // Location specified ID
  String Icon;                                              // Weather Icon | https://openweathermap.org/weather-conditions
  String Main;                                              // Current weather as string (Clouds, etc.)
  String Description;                                       // Current weather as string (broken clouds, etc.)
  float  Temperatur;                                        // Current Temperature
  short  Temp_Unit;                                         // Unit of Temperature
  int    Wind;                                              // 
  int    Humidity;                                          // Current Humidity
  int    Pressure;                                          // Current Pressure
  int    Day_Min;                                           // Max Temperautre
  int    Day_Max;                                           // Min Temperature
  float  Visibility;                                        // 
  char   Vis_Unit;                                          // 
  float  Wind_Speed;                                        // Wind speed in m/s
  short  Wind_Direction;                                    // Wind coming from
  char   Cardinal;                                          // 
  String Condition;                                         // Same as Icon | Don't know the real difference between them
  String Condition_Value;                                   // 
  String Sunrise;                                           // Ohne Zeitzone und ohne Sommerzeit
  String Sunset;                                            // Ohne Zeitzone und ohne Sommerzeit
  byte   Setting;                                           // Setting for Watchface
  bool   Enable;                                            // Watchface enable?
  const long    refresh_delay = 600000;                     // How often checking for new Information | Don't lower this value!
  unsigned long last_refresh  = 0;                          // Last time checking for new Information
} Weather;
//----------------------------------------------------------------------------
struct {  // Power
  float Volts;                                              // Show current Voltage | Planning a wireless Multi-Meter with ESP + INA226
  float Amps;                                               // Show current Current | Planning a wireless Multi-Meter with ESP + INA226
  float Watts;                                              // Show current Power   | Planning a wireless Multi-Meter with ESP + INA226
  byte  Setting;                                            // Setting for Watchface
  bool  Enable;                                             // Watchface enable?
} Power;
//----------------------------------------------------------------------------
struct {  // Environment
  long  RAW_Ambientlight;                                   // RAW Value of LDR | ADS1115: 2^16 signed equal ~2^15 unsigned value for LDR 
  int   SET_Ambientlight = 1;                               // 
  long  Ambientlight;                                       // 
  short OldData;                                            // 
  float Temperatur;                                         // 
  short Temp_Unit;                                          // 
  float Pressure;                                           // 
  float Altitude;                                           // 
  float ApproxAltitude;                                     // 
  short Humidity;                                           // Show current Humidity
  float Barometric;                                         // Show current Pressure
  short AirQuality;                                         // [Missing HW atm]
  byte  Setting;                                            // Setting for Watchface
  bool  Enable;                                             // Watchface enable?
  const long    refresh_delay = 2500;                       // How often checking for new Information | No need for lower value
  unsigned long last_refresh  = 0;                          // Last time checking for new Information
} Environment;
//----------------------------------------------------------------------------
struct {  // Github
  unsigned long Subscription;                               // [Missing API]
  byte Setting;                                             // Setting for Watchface
  bool Enable;                                              // Watchface enable?
} Github;
//----------------------------------------------------------------------------
struct {  // Counterstrike GlobalOffensive
  String IP = "192.168.178.23";                             // IP of Node.js Scriptfile
  String PORT = "65001";                                    // Port of Node.js Scriptfile
  unsigned int localUdpPort = 65002;                        // Local port to listen on
  char incomingPacket[255];                                 // Buffer for incoming packets
  int  packetSize;                                          // Buffer Size
  int  len;                                                 // Array Size for Buffer
  bool UDP_Input = false;                                   // New Information
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
} Player, Player_Last;
//----------------------------------------------------------------------------
struct {  // Counterstrike GlobalOffensive Team
  String win_team;                                          // CT or T
  String bomb;                                              // Planted, Defused, Exploded
} Round, Round_Last;
//----------------------------------------------------------------------------
struct {  // Pressed
  long Button_One;                                          // Hold|Release | Hold current Watchface | Change Feature/Watchface
  long Button_Two;                                          // Prev | Go to last Watchface
  long Button_Three;                                        // Next | Go to next Watchface
  byte Setting;                                             // Setting for Watchface
  bool Enable;                                              // Watchface enable?
} Pressed;
//----------------------------------------------------------------------------
struct {  // Err
  short Device;                                             // Error Code of ESP
  short Colorduino;                                         // [Not in use]
  short Communication;                                      // [Not in use]
  byte Setting;                                             // Setting for Watchface
  bool Enable;                                              // Watchface enable?
} Err;
//----------------------------------------------------------------------------
struct {  // Updating
  float Device;                                             // 
  byte  Setting;                                            // Setting for Watchface
  bool  Enable;                                             // Watchface enable?
  short State = 0;                                          // 
} Updating;
//----------------------------------------------------------------------------
struct {  // Device
  short rssi;                                               // Received Signal Strength Indicator for WiFi
  byte Setting;                                             // Setting for Watchface
  bool Enable;                                              // Watchface enable?
  int  Mode  = 30;                                          // 
  int  State = 0;                                           // 
  int  Set   = 30;                                          // Start Watchface
  short WiFi_Skin = 0;                                      // 
} Device;
//----------------------------------------------------------------------------

#endif

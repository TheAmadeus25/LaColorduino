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
  │ Version: 0.0.4 - ALPHA                    Date: 22.Apr.2019                      ┃
  ├──────────────────────────┴─────────────────────────┤
  │ + Move Variable                                                                  ┃
  │ + Add Header Comment                                                             ┃ 
  └────────────────────────────────────────────────────┘
*/

#include <Colorduino.h>
#include <ColorTools.h>

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

#include "A_Variable.h"

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
        
      case 10:
        //Clock
        Print_Clock(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Time.Hour, Time.Minute);
        break;
      
      case 20:
        Print_Temperatur(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Environment.Temperatur, Environment.Temp_Unit_2);
        break;
        
      case 21:
        
        break;
        
      case 22:
        Print_Percent(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Weather.Humidity);
        break;
      
      case 30:
        Print_Temperatur(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Weather.Temperatur, Weather.Temp_Unit_2);
        break;
        
      case 31:
        Print_Pressure(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Weather.Pressure, Weather.Temp_Unit_2);
        break;
        
      case 32: 
        Print_Percent(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Weather.Humidity);
        break;
        
      case 33:  // Darstellungsfehler
        Print_Float(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Weather.Wind_Speed);
        break;
        
      case 40:
        Print_Integer(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, YouTube.Video);  //---getauscht
        break;

      case 41:
        Print_Integer(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, YouTube.View);
        break;

      case 42:
        Print_Integer(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, YouTube.Comment);
        break;

      case 43:
        Print_Integer(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, YouTube.Subscriber); //---getauscht
        break;
      
      case 50:
        Print_Integer(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Twitch.Follower);
        break;
      
      case 51:
        Print_Integer(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Twitch.View);
        break;
      
      case 80:
        Print_Integer(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Twitter.Follower);
        break;
      
      case 81:
        Print_Integer(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Twitter.Tweets);
        break;
      
      case 82:
        Print_Integer(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Twitter.Last_Retweet);
        break;
      
      case 83:
        Print_Integer(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Twitter.Last_Favorite);
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

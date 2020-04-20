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
  │ Version: 0.0.6 - ALPHA                    Date: 11.Apr.2020                      ┃
  ├──────────────────────────┴─────────────────────────┤
  │ + Shorting/Optimize Space                                                        ┃
  │ - Moving CSGO into its own function                                              ┃
  │                                                                                  ┃
  │                                                                                  ┃
  └────────────────────────────────────────────────────┘
*/

#include <Colorduino.h>
//#include <ColorTools.h>

// ### Choose your Position for each Colorduino ###
// Count from left to right
// 0        : 1st Colorduino for Symbol only. It has it own sourcecode.
// 1 to 255 : 2nd to 254th Colorduino for Text/Number/Information
#define Unit_Pos 4

short True_Pos = -((Unit_Pos - 1) * 8);
short Cursor_Pos = True_Pos;

bool IncomingComplete = false;
char Temp_Array[64];
char Separator = ';';

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
  
  //Symbolic_Temperature(9);
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
      case  0:
        Symbolic_Blank();
        break;

      case  5:
        switch (Unit_Pos) {
          case 1:
            if ( (Device.WiFi_Code == 0 || Device.WiFi_Code == 5) && (Device.WiFi_Skin == 0 || Device.WiFi_Skin == 4 || Device.WiFi_Skin == 8) ) {  //
              Symbolic_Dot(1);
            } else {
              Symbolic_Dot(0);
            }//END DOT

            if ( Device.WiFi_Code == 1 || Device.WiFi_Code == 3 || Device.WiFi_Code == 4 || Device.WiFi_Code == 6 || Device.WiFi_Code == 7) {
              Symbolic_Line();
            } else if (Device.WiFi_Code == 2) {
              Symbolic_Line_Error();
            }//END LINE
            break;//END CASE 1

          case 2:
            if ( (Device.WiFi_Code == 0 || Device.WiFi_Code == 5) && (Device.WiFi_Skin == 1 || Device.WiFi_Skin == 3 || Device.WiFi_Skin == 5 || Device.WiFi_Skin == 7 || Device.WiFi_Skin == 9 || Device.WiFi_Skin == 11) ) {
              Symbolic_Dot(1);
            } else {
              Symbolic_Dot(0);
            }//END DOT

            if ( (Device.WiFi_Code >= 1 && Device.WiFi_Code <= 4) || Device.WiFi_Code == 6 || Device.WiFi_Code == 7) {
              Symbolic_Line();
            }
            break;//END CASE 2

          case 3:
            if ( (Device.WiFi_Code == 0 || Device.WiFi_Code == 5) && (Device.WiFi_Skin == 2 || Device.WiFi_Skin == 6 || Device.WiFi_Skin == 10) ) {
              Symbolic_Dot(1);
            } else {
              Symbolic_Dot(0);
            }//END DOT

            if ( Device.WiFi_Code == 2 /*|| Device.WiFi_Code == 3*/ || Device.WiFi_Code == 4 || Device.WiFi_Code == 7) {
              Symbolic_Line();
            } else if (Device.WiFi_Code == 1 || Device.WiFi_Code == 6) {
              Symbolic_Line_Error();
            }//END LINE
            break;//END CASE 3

          case 4:
            if (Device.WiFi_Code >= 0 && Device.WiFi_Code < 5) {
              Symbolic_Router();
            } else {
              Symbolic_Earth();
            }
        }//END SWITCH POS

        Colorduino.FlipPage();
        break;

      case  9:
        switch (Updating.State) {
          case 0:  Print_OTA(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Updating.Device, '%', "White");  break;  // Update begin and progress
          case 1:  Print_OTA(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Updating.Device, '%', "Green");  break;  // Update succseed
          default: Print_OTA(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Updating.Device, '%', "Red");    break;  // Update failed
        }
        break;

      case 10:
        //Clock
        Print_Clock(Cursor_Pos, 1, Environment.SET_Ambientlight, Time.Hour, Time.Minute, "White");
        break;

      case 20:
        Print_Temperatur(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Environment.Temperatur, Environment.Temp_Unit_2, "White");
        break;

      case 21:

        break;

      case 22:
        Print_Percent(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Weather.Humidity, "White");
        break;

      case 30:
        Print_Temperatur(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Weather.Temperatur, Weather.Temp_Unit_2, "White");
        break;

      case 31:
        Print_Pressure(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Weather.Pressure, Weather.Temp_Unit_2, "White");
        break;

      case 32:
        Print_Percent(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Weather.Humidity, "White");
        break;

      case 33:
        //Print_Float(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Weather.Wind_Speed, "White");
        Print_Speed(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Weather.Wind_Speed, "White", Weather.Wind_Speed_Unit);
        break;
        
      case 34:
        Print_Forecast();
        break;
        
      case 35:
        Print_Clock(Cursor_Pos, 1, Environment.SET_Ambientlight, Weather.SunriseHour, Weather.SunriseMinute, "White");
        break;
        
      case 36:
        Print_Clock(Cursor_Pos, 1, Environment.SET_Ambientlight, Weather.SunsetHour, Weather.SunsetMinute, "White");
        break;

      case 40:
        Print_Integer(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, YouTube.Video, "White");  //---getauscht
        break;

      case 41:
        Print_Integer(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, YouTube.View, "White");
        break;

      case 42:
        Print_Integer(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, YouTube.Comment, "White");
        break;

      case 43:
        Print_Integer(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, YouTube.Subscriber, "White"); //---getauscht
        break;

      case 50:
        Print_Integer(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Twitch.Follower, "White");
        break;

      case 51:
        Print_Integer(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Twitch.View, "White");
        break;

      case 80:
        Print_Integer(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Twitter.Follower, "White");
        break;

      case 81:
        Print_Integer(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Twitter.Tweets, "White");
        break;

      case 82:
        Print_Integer(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Twitter.Last_Retweet, "White");
        break;

      case 83:
        Print_Integer(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Twitter.Last_Favorite, "White");
        break;

      case 90:
        Print_Integer(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Facebook.Friends, "White");
        break;

      case 100:
        Print_CSGO();
        break;

      case 110:
        Print_Power(Cursor_Pos + 1, 1, Environment.SET_Ambientlight, Power.Transmitting, Power.Unit, "White");
        break;

      default:
        break;
    }

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

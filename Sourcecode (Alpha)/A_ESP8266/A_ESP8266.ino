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
  │ Version: 0.0.6 - ALPHA                    Date: 28.Mar.2020                      ┃
  ├──────────────────────────┴─────────────────────────┤
  │ + Add Twitter                                                                    ┃
  │ + Add Twitch                                                                     ┃
  │ + Add CSGO Livestats                                                             ┃
  └────────────────────────────────────────────────────┘
*/


#include "A_Configuration.h"

//--- ESP8266 Node MCU ---//
#include <ESP8266WiFi.h>                                    // Library
#include <WiFiClientSecure.h>                               // Library
#include <ESP8266HTTPClient.h>                              // Library
#include <ESP8266mDNS.h>                                    // Library
#include <WiFiUdp.h>                                        // Library
#include <ArduinoOTA.h>                                     // Library
#include <FS.h>                                             // Library
#include <ESP8266WebServer.h>                               // Library
#include <WiFiUdp.h>                                        // Library | CSGO
#define ESP_Button 0                                        // ESP Flash Button
#define ESP_Led   2                                         // Built-In Blue LED on ESP8266 1 (D4) ~
#define ESP_Led2 16                                         // Built-In Blue LED on NodeMCU 2 (D0)

const bool Debug_Serial = false;                            // Debug via Serial

// https://tttapa.github.io/ESP8266/Chap11%20-%20SPIFFS.html
// ESP8266WebServer server(80);
// String getContentType(String filename);                  // Convert the file extension to the MIME type
// bool handleFileRead(String path);                        // Send the right file to the client (if it exists)

//--- I²C ---//
#include <Wire.h>                                           // Library

//--- ADS1015 ---//
#include <Adafruit_ADS1015.h>                               // Library
Adafruit_ADS1115 ads;                                       //

//--- BME280 ---//
#include <Adafruit_Sensor.h>                                // Library
#include <Adafruit_BME280.h>                                // Library
#define SEALEVELPRESSURE_HPA (1013.25)                      // Library
Adafruit_BME280 bme;                                        // I2C

//--- YouTube ---//
#include <YoutubeApi.h>                                     // Library
#include <ArduinoJson.h>                                    // Library

WiFiClientSecure client;                                    //
YoutubeApi api(API_KEY, client);                            //

//--- OpenWeatherMap ---//
#include <Time.h>                                           // Library
#include <TimeLib.h>                                        // Library
#include <OpenWeatherMap.h>                                 // Library

typedef enum wifi_s {
  W_AP = 0, W_READY, W_TRY
} WifiStat;

OWMconditions      owCC;                                    //
OWMfiveForecast    owF5;                                    //
OWMsixteenForecast owF16;                                   //
WifiStat           WF_status;                               //


//--- Bitcoin ---//
#include <CoinMarketCapApi.h>                               // Library
CoinMarketCapApi api2(client);                              //

//--- NTP ---//
#include <NTPClient.h>                                      // Library
#include <WiFiUdp.h>                                        // Library

WiFiUDP ntpUDP;                                             //
WiFiUDP Udp;                                                //

//─────────────────────────────────────────────────────┐
// You can specify the time server pool and the offset (in seconds, can be
// changed later with setTimeOffset() ). Additionaly you can specify the
// update interval (in milliseconds, can be changed using setUpdateInterval() ).
NTPClient timeClient(ntpUDP, "europe.pool.ntp.org", 3600, 60000);
//─────────────────────────────────────────────────────┘

//--- Twitch ---//
#include <TwitchApi.h>
TwitchApi twitch(client, TWITCH_CLIENT_ID);

//--- Titter ---//
#include <TwitterApi.h>
TwitterApi api3(client);


enum Units {Celsius = 5, Fahrenheit = 6, Kelvin = 7};       //

#include "A_Variable.h"                                     // Move Variable to it's own File

void setup() {
  InitSerial();                                             // @Tool_Serial    | Start Serial Communication
  InitESP();                                                // @ESP            | Configuration of the ESP8266 HW
  SetESP();                                                 // @ESP            | Set Global Unit like Temperature

  InitWiFi();                                               // @ESP            | Configuration of WiFi
  InitOTA();                                                // @OTA            | Initalization of Over-the-Air update
  InitADS1115();                                            // @ADS            | Configuration of the ADC
  InitBME280();                                             // @BME280         | Configuration of the Temperature/Pressure/Humidity Sensor
  InitWeather();                                            // @OpenWeatherMap | Configuration of WeatherAPI
  InitNTP();                                                // @NTP            | Configuration of the Time
  InitTwitter();                                            // @Twitter        | Configuration of Twitter
  InitUDP();                                                // @CSGO_Stats     | Configuration of CSGO

  // Just put some numbers into all variables for start
  digitalWrite(ESP_Led, LOW);                               // Lights-up built in LED
  //for (short LoginBoot = 0; LoginBoot <= 1; LoginBoot++) {  // Some operation need two request for working
    GetWeather();                                           // @OpenWeatherMap | Parsing Information
    GetYouTube();                                           // @YouTube        | Parsing Information
    GetBME280();                                            // @BME280         | Parsing Information
    GetADS1115();                                           // @ADS            | Parsing Information
    GetBitcoin();                                           // @Bitcoin        | Parsing Information
    GetNTP();                                               // @NTP            | Parsing Information
    GetTwitch();                                            // @Twitch         | Parsing Information
    GetTwitter();                                           // @Twitter        | Parsing Information
  //}
  digitalWrite(ESP_Led, HIGH);                              // Lights-down built in LED

  Setting.change_refresh = millis();                        // Reset Timer counter
  SerialOutput();                                           // @Tool_Serial    | Send Information to Colorduino
}

// ###################################################################################
void loop() {
  ArduinoOTA.handle();                                      // Check for OTA
  // server.handleClient();
  GetADS1115();                                             // @ADS            | Parsing Information

  if ( millis() - Setting.last_refresh > Setting.refresh_delay || digitalRead(ESP_Button) == LOW ) {            // If times up or built-in button pressed,...
    digitalWrite(ESP_Led, LOW);                             // Lights-up built in LED
    SerialOutput();                                         // @Tool_Serial    | Send Information to Colorduino
    digitalWrite(ESP_Led, HIGH);                            // Lights-down built in LED
  }//END IF

  if ( millis() - Weather.last_refresh > Weather.refresh_delay ) {                                              // If times up,...
    digitalWrite(ESP_Led, LOW);                             // Lights-up built in LED
    GetWeather();                                           // @OpenWeatherMap | Parsing Information
    Weather.last_refresh = millis();                        // Reset Timer counter
    SerialOutput();                                         // @Tool_Serial    | Send Information to Colorduino
    digitalWrite(ESP_Led, HIGH);                            // Lights-down built in LED
  }//END IF

  if ( millis() - YouTube.last_refresh > YouTube.refresh_delay ) {                                              // If times up,...
    digitalWrite(ESP_Led, LOW);                             // Lights-up built in LED
    GetYouTube();                                           // @YouTube        | Parsing Information
    YouTube.last_refresh = millis();                        // Reset Timer counter
    SerialOutput();                                         // @Tool_Serial    | Send Information to Colorduino
    digitalWrite(ESP_Led, HIGH);                            // Lights-down built in LED
  }//END IF

  if ( millis() - Time.last_refresh > Time.refresh_delay ) {                                                    // If times up,...
    digitalWrite(ESP_Led, LOW);                             // Lights-up built in LED
    GetNTP();                                               // @NTP            | Parsing Information
    Time.last_refresh = millis();                           // Reset Timer counter
    SerialOutput();                                         // @Tool_Serial    | Send Information to Colorduino
    digitalWrite(ESP_Led, HIGH);                            // Lights-down built in LED
  }//END IF

  if ( millis() - Environment.last_refresh > Environment.refresh_delay ) {                                      // If times up,...
    digitalWrite(ESP_Led, LOW);                             // Lights-up built in LED
    GetBME280();                                            // @BME280         | Parsing Information
    Environment.last_refresh = millis();                    // Reset Timer counter
    SerialOutput();                                         // @Tool_Serial    | Send Information to Colorduino
    digitalWrite(ESP_Led, HIGH);                            // Lights-down built in LED
  }//END IF

  if ( millis() - Twitch.last_refresh > Twitch.refresh_delay ) {                                               // If times up,...
    digitalWrite(ESP_Led, LOW);                             // Lights-up built in LED
    GetTwitch();                                            // @Twitch         | Parsing Information
    Twitch.last_refresh = millis();                         // Reset Timer counter
    SerialOutput();                                         // @Tool_Serial    | Send Information to Colorduino
    digitalWrite(ESP_Led, HIGH);                            // Lights-down built in LED
  }//END IF

  if ( millis() - Twitter.last_refresh > Twitter.refresh_delay ) {                                             // If times up,...
    digitalWrite(ESP_Led, LOW);                             // Lights-up built in LED
    GetTwitter();                                           // @Twitter        | Parsing Information
    Twitter.last_refresh = millis();                        // Reset Timer counter
    SerialOutput();                                         // @Tool_Serial    | Send Information to Colorduino
    digitalWrite(ESP_Led, HIGH);                            // Lights-down built in LED
  }//END IF

  if ( GetUDP() ) {
    digitalWrite(ESP_Led2, LOW);                            // Lights-up built in LED
    if (Device.Mode != 100) {
      Device.Mode = 100;
      Device.Set  = 100;
    } else {
      Setting.change_refresh = millis();
    }

    Weather.last_refresh = millis() /* + ( Weather.refresh_delay - 10000 )*/ ;
    YouTube.last_refresh = millis() /* + ( YouTube.refresh_delay - 10000 )*/ ;
    Time.last_refresh    = millis() /* + ( Time.refresh_delay    - 10000 )*/ ;
    Twitch.last_refresh  = millis() /* + ( Twitch.refresh_delay  - 10000 )*/ ;
    Twitter.last_refresh = millis() /* + ( Twitter.refresh_delay - 10000 )*/ ;

    SerialOutput();                                         // @Tool_Serial    | Send Information to Colorduino
    digitalWrite(ESP_Led2, HIGH);                           // Lights-down built in LED
  }

  // <- Add new Software for new Watchfaces

  NightMode();

  if ( millis() - Setting.change_refresh > Setting.change_delay || Pressed.Button_Three == true) {              // If times up or ADS button is pressed,...
    switch (Device.Mode) {                                  // Check Watchface-Mode
      case 10:  Device.Mode = 20; Device.Set = 20;  break;  // CLOCK
      case 20:  Device.Mode = 30; Device.Set = 30;  break;  // INDOOR TEMPERATURE
      //case 21:  Device.Mode = 30; Device.Set = 30;  break;  // INDOOR PRESSURE
      case 30:  Device.Mode = 32; Device.Set = 32;  break;  //---31|31
      case 31:  Device.Mode = 32; Device.Set = 32;  break;  // WEATHER PRESSURE*
      case 32:  Device.Mode = 40; Device.Set = 40;  break;  // WEATHER HUMIDITY*
      //case 33:  Device.Mode = 40; Device.Set = 40;  break;  // WEATHER WIND
      case 40:  Device.Mode = 41; Device.Set = 41;  break;  // YOUTUBE SUBSCRIBER
      case 41:  Device.Mode = 42; Device.Set = 42;  break;  // YOUTUBE VIEW
      case 42:  Device.Mode = 43; Device.Set = 43;  break;  // YOUTUBE COMMENT
      case 43:  Device.Mode = 50; Device.Set = 50;  break;  // YOUTUBE VIDEO
      case 50:  Device.Mode = 51; Device.Set = 51;  break;  // TWITCH FOLLOWER
      case 51:  Device.Mode = 80; Device.Set = 80;  break;  // TWITCH VIEW
      case 80:  Device.Mode = 81; Device.Set = 81;  break;  // TWITTER FOLLOWER
      case 81:  Device.Mode = 82; Device.Set = 82;  break;  // TWITTER TWEETS
      case 82:  Device.Mode = 83; Device.Set = 83;  break;  // TWITTER LAST_RETWEET
      case 83:  Device.Mode = 10; Device.Set = 10;  break;  // TWITTER LAST_FAVORITE
      case 90:  Device.Mode = 10; Device.Set = 10;  break;  // FACEBOOK ****
      case 100: Device.Mode = 10; Device.Set = 10;  break;  // CSGO LIVESTATS
    }//END SWITCH

    SerialOutput();                                         // @Tool_Serial    | Send Information to Colorduino
    Setting.change_refresh = millis();                      // Reset Timer counter
  }//END IF
}//END LOOP
// ###################################################################################

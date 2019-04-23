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
  │ + Setting File                                                                   ┃
  │ + Comments                                                                       ┃
  └────────────────────────────────────────────────────┘
*/

#ifndef A_Configuration_h
#define A_Configuration_h

char ssid[] = "******";                                        // Your network SSID (name)
char password[] = "******";                       // Your network Password

#define Trigger 15                                          // Ambilight Trigger in percent (1% - 100%)

#define API_KEY "******"   // Google apps API Token
#define CHANNEL_ID "******"               // Url of channel

const char *ow_key = "******";    // Openweather API Token
#define COUNTRY_ID "gb"                                     // Country (de = Germany, gb = Great Britain)
#define TOWN_ID "London"                                   // Town
                                                            // Make use of this Map to find the right setting.
                                                            // https://openweathermap.org/weathermap

#define TWITCH_CLIENT_ID "******"   // Create a new application on https://dev.twitch.tv/
#define TWITCH_LOGIN "******"                         // Username of who you are getting the data for (e.g. "ninja")



#endif

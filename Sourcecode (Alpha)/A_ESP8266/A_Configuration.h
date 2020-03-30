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
  │ Version: 0.0.3 - ALPHA                    Date: 24.Nov.2019                      ┃
  ├──────────────────────────┴─────────────────────────┤
  │ + TimeZone                                                                       ┃
  │ + SummerTime                                                                     ┃
  └────────────────────────────────────────────────────┘
*/

#ifndef A_Configuration_h
#define A_Configuration_h

char ssid[] = "******";                                        // Your network SSID (name)
char password[] = "******";                       // Your network Password


#define Trigger 15                                          // Ambilight Trigger in percent (1% - 100%)
                                                            // If ambilight is lower than trigger, it switch to Dark-Mode (Low-Light Clock only)

#define TimeZone 1                                          // Local Timezone (UTC = 0, Berlin = 1,...)
#define SummerTime 1                                        // Local Summertime (Normal/Winter = 0, Summer = 1)

#define API_KEY "******"   // Google apps API Token
#define CHANNEL_ID "******"               // Url of channel

const char *ow_key = "******";    // Openweather API Token
#define COUNTRY_ID "gb"                                     // Country (de = Germany, gb = Great Britain)
#define TOWN_ID "London"                                   // Town
                                                            // Make use of this Map to find the right setting.
                                                            // https://openweathermap.org/weathermap

#define TWITCH_CLIENT_ID "******"   // Create a new application on https://dev.twitch.tv/
#define TWITCH_LOGIN "******"                         // Username of who you are getting the data for (e.g. "ninja")


String screenName = "******";                         // Twitter "@xxx" (without '@'-sign) name
bool haveBearerToken = false;                               //
// Using curl to get bearer token
// curl -u "$CONSUMER_KEY:$CONSUMER_SECRET" \
//    --data 'grant_type=client_credentials' \
//    'https://api.twitter.com/oauth2/token'
// -------------------------------------------
// It start something like this : AAAAAAAAAAAAAAxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
// And YES, it IS so fcking long :D
// DON'T USE THOSE ->: Twitter Owner, Twitter Owner ID, Twitter (Consumer) API Key, Twitter (Consumer Secret) API secret Key, Twitter Access Token, Twitter Access Token Secret
// However, you need the "Twitter (Consumer) API Key" and  "Twitter (Consumer Secret) API secret Key" to generate a "Twitter Bearer Token", duh.
#define BEARER_TOKEN "******" // Twitter BEARER TOKEN

#endif

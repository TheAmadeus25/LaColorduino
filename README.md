# LaColorduino - Your own Smartwatch how it should be
![Thumbnail](https://raw.githubusercontent.com/TheAmadeus25/LaColorduino/master/IMG_2067.JPG)

**[Click me for a short video demo (OLD)](https://twitter.com/TheAmadeus25/status/1095430617074937860)**

**[Sneak-Peak with comment in GER and ENG](http://bit.ly/UWGSmartwatch1)**

I build my own clone of LaMetric smartwatch but with 5 Colorduino. It will make use of an ESP8266 NodeMCU for the connection to the Internet. It's build for everdays use like showing your subscribers on YouTube, follower on Twitter, clicks on Twitch or the weather at the moment. There is (in the future) everthing for everbody and everthing is selfmade! Maybe we can create something very big for the world?

❔ Interested? Well, read the **[Wiki](https://github.com/TheAmadeus25/LaColorduino/wiki)*** and you will get Happy, yay.

😥 However, the Wiki isn't completed, yet.

******
# Preview of Watchfaces

## Clock
It shows the current time downloaded from a NTP-Server. Currently, it shows the time in 24h. In the future I add AM/PM mode as well. Dark-Mode is supported which mean, it lower the light to the lowest value possible. It's very handy in the night, because the icon isn't appering in dark-mode. Icon isn't animated and doesn't show the current time. Maybe I update this.

![Preview Clock](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Clock/IMG_0705.JPG?raw=true)

## Indoor
Based on the BME280 sensor, it give you some information like temperature, humidity and air-pressure.

**Temperature**

It show the current temperature in Celsius (°C), Fahrenheit (°F) and Kelvin (K). The logo is animated. Depending on the current temperature it change it's color and the level indicator:
* Ice-Blue
* Blue
* Green
* Yellow
* Red

![Preview Indoor Temperature](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Indoor/IMG_0724.JPG?raw=true)

**Indoor Humidity**

There is a watchface just for the current humidity.

![Preview Indoor Humidity](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Indoor/IMG_0726.JPG?raw=true)

## YouTube

The ESP8266 get its information directly from YouTube it's self. Sometimes, it doesn't show any value after startup but I'm working on it.

**Subscriber**

This watchface shows how many people are subscribed to your YouTube channel.

![Preview YouTube Subscriber](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/YouTube/IMG_0730.JPG?raw=true)

**View**

It also shows you how many total views you have already. Currently, non of my counters support numbers higher than 99.999.999. I'll change this later to something more readable like 99.99M.

![Preview YouTube View](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/YouTube/IMG_0738.JPG?raw=true)

**Comment**

This one is confusing me. The official API says something about current/new comments, but that's not true. Maybe they mean new Inbox messages but I can't test this; I never get any messages 😥😋

![Preview YouTube Comment](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/YouTube/IMG_0739.jpg?raw=true)

**Video**

Did you know, how many videos are currently public (not uploaded)? Well now you know it.

![Preview YouTube Video](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/YouTube/IMG_0737.JPG?raw=true)

## Twitch

Now, you reach the more important part of this Smartwatch. It gets its information directly from Twitch, same like YouTube before.

**Follower**

This counter shows you, how many people are subscribed to your Twitch channel.

![Preview Twitch Follower](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Twitch/IMG_0731.JPG?raw=true)

**View**

This watchface tells you how many views you have in total.

![Preview Twitch View](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Twitch/IMG_0732.JPG?raw=true)

## Twitter

**Follower**

![Preview Twitter Follower](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Twitter/IMG_0733.JPG?raw=true)

**Tweets**

![Preview Twitter Tweets](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Twitter/IMG_0734.JPG?raw=true)

**Last Tweet Retweet**

![Preview Twitter Last Tweet Retweets](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Twitter/IMG_0735.JPG?raw=true)

## CounterStrike: Global Offensive

**CSGO Livestats**

![Preview CSGO Livestats](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/CounterStrike/IMG_0778.JPG?raw=true)

**CSGO Bomb Exploded**

![Preview CSGO Bomb Exploded](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/CounterStrike/IMG_0748.JPG?raw=true)

**CSGO Bomb Defused**

![Preview CSGO Bomb Defused](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/CounterStrike/IMG_0777.JPG?raw=true)


******

## I plan to add things like
* [ ] Twitch
  * [X] View
  * [X] Follower
  * [ ] Is live now
* [ ] Facebook Fan count
* [X] Twitter
  * [X] Followers
  * [X] Friends
  * [X] Favorites
  * [X] Tweet counter
  * [X] Last Tweet Retweet
  * [X] Last Tweet Favorites
* [X] YouTube
  * [X] Total Subscribers
  * [X] Total Comments
  * [X] Total Watchtime
  * [X] Total View
* [ ] Currency
  * [ ] Euro
  * [ ] US Dollar
  * [ ] British Pound
  * [ ] Yen
  * [ ] Bitcoin
* [ ] GoogleMail notification
* [ ] Steam Server state
* [ ] State for CS:GO (if I got it already running 😡😤)
  * [ ] Kills
  * [ ] Deaths
  * [ ] Time Played
  * [ ] Planted Bombs
  * [ ] Defused Bombs
  * [ ] Wins
  * [ ] Damage Done
  * [ ] Money Earned
  * [ ] Rescued Hostages
  * [ ] Headshot
  * [ ] MVP
  * [ ] Last Match
  * [ ] Weapon Kill
  * [ ] ...and many many many more
* [ ] Spotify
  * [ ] Current Track
* [X] [Weather](https://openweathermap.org/weather-conditions)
  * [X] Thunderstorm
  * [X] Drizzle
  * [X] Rain
  * [X] Snow
  * [X] Atmospere
  * [X] Clear
  * [ ] Moon Phase
  * [X] Clouds
  * [ ] Wind
* [ ] Indoor
  * [X] Temperature
  * [X] Humidity
  * [ ] Barometric
  * [ ] (Air Quality, if I/you buy a CCS811 or similar)
* [ ] Github
  * [ ] Subscription (or something)
* [ ] Webinterface (to read data or change settings via web)
* [X] Update over-the-air (ESP8266 only)
* [ ] Calendar
* [X] Clock (of course 😄)
## Software/Converter to program them
* Arduino [**1.6.0**](https://www.arduino.cc/en/Main/OldSoftwareReleases#previous) (Colorduino doesn't work properly on 1.8.6. It shows wrong color so you need to download an older version, aswell)
* Arduino 1.8.6 for ESP8266 (funny he?)
* [USB to TTL-Converter with CP2102](https://www.amazon.de/SODIAL-USB-TTL-Konverter-Modul-eingebautem-CP2102/dp/B008RF73CS/ref=sr_1_fkmr0_2?ie=UTF8&qid=1534713779&sr=8-2-fkmr0&keywords=cp2102+breakout) (or similar)
* (Library incoming)
* Help of the community
  * Testing
  * Bug fixing
  * Optimize
  * Adding feature

## Additional to the software, it requires some hardware
* 5x Colorduino Matrix Shield (it's possible up to 254 but never testing)
* 5x Colorduino Matrix 8x8 RGB LED Full Dot/Square (Feel free to mixed them up)
  * 1st shows the symbol/logo, everything else shows the information
* LDR (if it's dark, watchface change to clock with lowest light so you can sleep at night without any glare)
* 3x Button (not planed to use all of them at the moment)
* BME280 for indoor use
* ADS1115 or similar for those Buttons and LDR. (Yeah, 15-bit resolution is an overkill 😄)
* 5V-3.3V Level Shifter (if I use an ESP8266-01)
* DC-DC 12V to 5V and 3.3V Step-down Power Supply
  * We need at least 3.3V/5V for ESP8266 and 6.5V to 7.5V for RGB Matrix, at least 1A+.
* Messing Spacer (for mounting)

## Character Set
* [X] A-Z
* [ ] a-z ~(it will convert to uppercase)~
* [X] 0-9 (dec)
* [X] Semi-/colon
* [X] Simply Math operation
* [X] Punctuation
* [X] Number sign
* [X] Brackets
* [X] Underscore
* [X] Guillemets
* [X] Question mark
* [X] Space
* [X] At-Sign
* [X] Tilde
* [ ] And-Sign
* [ ] Dollar
* [ ] Ä, Ö, Ü, É, etc.
* [ ] [Japanese Katakana](http://www.electronic-engineering.ch/microchip/datasheets/lcd/charset.gif) (HELP!)
* [ ] ...

## Worksteps for Slave Colorduino's
* [X] Read and Parse Integer
* [X] Print Integer on Colorduino
* [X] Read and Parse Float
* [X] Print Float on Colorduino
* [ ] Read and Parse Char
* [ ] Print Char on Colorduino
* [X] Read and Parse String
* [ ] Print String on Colorduino
* [ ] Scroll String on Colorduino across
* [X] OTA for ESP8266 implementation (not optimized, yet)
* [ ] Print progressbar on Colorduino while Updating ESP8266
* [ ] Print progressbar on Colorduino for Widget (e.g. Spotify Track position)
* [ ] White-Balance Testscreen
* [ ] AutoCAD File (2D/3D)
* [ ] ...

## Worksteps for ESP8266
* [X] WiFi connection
* [ ] WiFi Manager
* [X] OTA for ESP8266 implementation
* [ ] EEPROM for Setting
* [ ] Webpage for Settings and Debug
* [X] Enable I²C
* [X] Parsing Sensors
* [X] Parsing Button
* [X] Parsing Ambientlight
  * [X] Hysteresis
* [X] Compute all Information's
* [ ] Optimize Watchdog for reset after some weeks (~44 Days)
* [ ] ...

## Worksteps for circuit board
* [X] Soldering all parts
* [ ] Simply circuit
* [ ] ...

## Worksteps for mounting
* [ ] Backplate (Wood, Metal or Plastic)
* [ ] Baking paper for diffusing light
* [ ] Black Glass/Plastic for lowering brightness after diffusing light
* [ ] Mounting on messing spacer and screw's
* [ ] Two holes for mounting on the Wall
* [ ] AutoCAD draw for Colorduino
* [ ] AutoCAD draw for Back-/Frontplate
* [ ] ...

## Worksteps for Github
* [ ] Learn english (orthography etc. 😄)
* [ ] Create a Wiki/Guide
  * [ ] ...in english and german
* [ ] Create a Flowchart
* [ ] eBook ready to Download with all Information and Tutorial
* [ ] Create two videos and share it on [Twitter](https://twitter.com/TheAmadeus25)/[YouTube](https://www.youtube.com/channel/UCwWUDIxHP5eyUSW02_msNTw)/Facebook
* [ ] Say "Thank You" for all who helped me
* [ ] Say "Thank You" for those who shared they library
* [ ] ...

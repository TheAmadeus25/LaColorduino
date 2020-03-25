# LaColorduino - Your own Smartwatch how it should be
![Thumbnail](https://raw.githubusercontent.com/TheAmadeus25/LaColorduino/master/IMG_2067.JPG)

**[Click me for a short video demo (OLD)](https://twitter.com/TheAmadeus25/status/1095430617074937860)**

**[Sneak-Peak with comment in GER and ENG](http://bit.ly/UWGSmartwatch1)**

I build my own clone of LaMetric smartwatch but with 5 Colorduino. It will make use of an ESP8266 NodeMCU for the connection to the Internet. It's build for everyday use like showing your subscribers on **[YouTube](https://github.com/TheAmadeus25/LaColorduino#youtube)**, follower on **[Twitter](https://github.com/TheAmadeus25/LaColorduino#twitter)**, clicks on **[Twitch](https://github.com/TheAmadeus25/LaColorduino#twitch)** or the **[Weather](https://github.com/TheAmadeus25/LaColorduino#weather)** at the moment. Even live-stats of **[CounterStrike: Global Offensive](https://github.com/TheAmadeus25/LaColorduino#counterstrike-global-offensive)** it's supported! What do you want more? Wait, don't say it loud, it also has a **[dark-mode](https://github.com/TheAmadeus25/LaColorduino#clock-dark-mode)**. In the future, there is  everything for everybody and everything is self-made! Maybe we can create something very big for the world?

❔ Interested? Well, read the **[Wiki](https://github.com/TheAmadeus25/LaColorduino/wiki)** and you will get Happy, yay.

😥 However, the Wiki isn't completed, yet. That's a hole bunch of work and I change almost everytime something about this project.

******
# Preview of Watchfaces

## Clock
It shows the current time downloaded from a NTP-Server every few seconds. I'll try to use the clock-cycle to lower the count of requests. Currently, it shows the time in 24h. In the future I add AM/PM mode as well. Icon isn't animated and doesn't show the current time. Maybe I update this.

### Clock (day)

![Preview Clock Day](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Clock/IMG_0705.JPG?raw=true)

### Clock (dark-mode)
**Dark-Mode** is supported which mean, it lower the light to the lowest value possible. It's very handy in the night, because the icon isn't appering in dark-mode.

![Preview Clock Night](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Clock/IMG_0841.jpg?raw=true)

******
## Indoor
Based on the **BME280** sensor, it give you some information like **temperature**, **humidity** and **air-pressure**.

### Temperature

It show the current temperature in **Celsius** _(°C)_, **Fahrenheit** _(°F)_ and **Kelvin** _(K)_. The logo is animated. Depending on the current temperature it change it's color and the level indicator:
* Ice-Blue _(Current not in use)_
* Blue _(T < 22°C)_
* Green _(22°C ≤ T < 25°C)_
* Yellow _(25°C ≤ T < 30°C)_
* Red _(30°C ≤ T)_

![Preview Indoor Temperature 1](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Indoor/IMG_0724.JPG?raw=true)

![Preview Indoor Temperature 2](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Indoor/IMG_0839.jpg?raw=true)

### Indoor Humidity

There is a watchface just for the current **humidity**.

![Preview Indoor Humidity](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Indoor/IMG_0726.JPG?raw=true)

******
## Weather

Based on **[openweathermap](https://openweathermap.org/)** it show the current **weather** at your location. It change the icon as well, depending on the weather.

### Clear Sky (day)

![Preview Weather Clear Sky](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Weather/IMG_0709.JPG?raw=true)


### Broken Clouds (day and night)

![Preview Weather Broken Clouds](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Weather/IMG_0830.jpg?raw=true)

**[...more photos incoming](https://openweathermap.org/weather-conditions)**

******
## YouTube

The ESP8266 get its information directly from **YouTube** it's self. Sometimes, it doesn't show any value after startup but I'm working on it. **[Library from witnessmenow aka Brian Lough found here](https://github.com/witnessmenow/arduino-youtube-api)**.

### Subscriber

This watchface shows how many people are **subscribed** to your YouTube channel.

![Preview YouTube Subscriber](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/YouTube/IMG_0730.JPG?raw=true)

### View

It also shows you how many **total views** you have already. Currently, non of my counters support numbers higher than 99.999.999. I'll change this later to something more readable like 99.99M.

![Preview YouTube View](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/YouTube/IMG_0738.JPG?raw=true)

### Comment

This one is confusing me. The **[official API](https://developers.google.com/youtube/v3/docs/?apix=true)** says something about current/new comments, but that's not true. Maybe they mean new Inbox messages but I can't test this; I never get any messages 😥😋

![Preview YouTube Comment](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/YouTube/IMG_0739.jpg?raw=true)

### Video

Did you know, how many videos are currently public (not uploaded)? Well, now you know it.

![Preview YouTube Video](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/YouTube/IMG_0737.JPG?raw=true)

******
## Twitch

Now, you reach the more important part of this Smartwatch. It gets its information directly from **Twitch**, same like YouTube before. In the future I try to add a Watchface which shows if you are currently online/streaming. I'm pretty sure, it looks great on camera while streaming! **[Library from witnessmenow aka Brian Lough found here](https://github.com/witnessmenow/arduino_twitch_api)**.

### Follower

This counter shows you, how many people are **subscribed** to your Twitch channel.

![Preview Twitch Follower](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Twitch/IMG_0731.JPG?raw=true)

### View

This watchface tells you how many **views** you have in total.

![Preview Twitch View](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Twitch/IMG_0732.JPG?raw=true)

******
## Twitter

Socialmedia gets more important these days. So how about a watchface as well? It works same like Twitch and YouTube before. **[Library from witnessmenow aka Brian Lough found here](https://github.com/witnessmenow/arduino-twitter-api)**

### Follower

How many people are **following** you.

![Preview Twitter Follower](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Twitter/IMG_0733.JPG?raw=true)

### Tweets

You are tweeting more like birds in the morning? What is this in numbers?? This one will help you.

![Preview Twitter Tweets](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Twitter/IMG_0734.JPG?raw=true)

### Last Tweet Retweet

How often got your **last tweet retweeted**.

![Preview Twitter Last Tweet Retweets](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Twitter/IMG_0735.JPG?raw=true)

### Last Tweet Favorite

How often got your **last tweet liked**.

![Preview Twitter Last Tweet Favorite](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Twitter/IMG_0736.JPG?raw=true)

******
## CounterStrike: Global Offensive 

Yes my friend, it's true! It can show you your **current stats** as well! I just modified the **[official API from Valve](https://developer.valvesoftware.com/wiki/Counter-Strike:_Global_Offensive_Game_State_Integration)** a little. It shows you:
* Kill
* Assist
* Death
* Health _(as progressbar)(working on it)_
* Who wins _(CT or T)_
* Bomb state _(defused or exploded)(it override who win)_

TBH, this watchface has a lot of problems and need additional **[script](https://github.com/TheAmadeus25/CounterStrike-GlobalOffensive-LiveStat-for-OBS-Studio/tree/master/Sourcecode)** and **[software](https://nodejs.org/de/download/)** which I also uploaded **[here](https://github.com/TheAmadeus25/CounterStrike-GlobalOffensive-LiveStat-for-OBS-Studio)**. Just follow the **[wiki](https://github.com/TheAmadeus25/CounterStrike-GlobalOffensive-LiveStat-for-OBS-Studio/wiki)**. Currently, it's not free of bugs and sometimes it just crashed the hole microcontroller. However, I'm working on it. At the moment, I'm just wondering about its input-lag. In my **[other project](https://github.com/TheAmadeus25/CounterStrike-GlobalOffensive-Ambilight-System)** it acts in less then 6ms over WiFi! Maybe I need to optimize my Smartwatch at the first place, before I start digging around.

### Livestats

You can change the delimiter of this watchface into one of the following char:
* space
* slash
* dot
* vertical line
* colon
* hyphen
* asterix

![Preview CSGO Livestats](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/CounterStrike/IMG_0780.JPG?raw=true)
![Preview CSGO Livestats](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/CounterStrike/IMG_0778.JPG?raw=true)

### Bomb Exploded

![Preview CSGO Bomb Exploded](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/CounterStrike/IMG_0748.JPG?raw=true)

### Bomb Defused

![Preview CSGO Bomb Defused](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/CounterStrike/IMG_0777.JPG?raw=true)


******

## I plan to add more things like
* [ ] Facebook Fan count
* [X] YouTube
  * [ ] Last 32 Days as chart
* [ ] Currency
  * [ ] Euro
  * [ ] US Dollar
  * [ ] British Pound
  * [ ] Yen
  * [ ] Bitcoin
* [ ] GoogleMail notification
* [ ] Steam Server state
* [ ] Spotify
  * [ ] Current Track
* [X] Weather
  * [ ] Moon Phase
  * [ ] Wind
* [ ] Indoor
  * [ ] Air Quality _(if I/you buy a CCS811 or similar)_
* [ ] Github
  * [ ] Subscription (or something)
* [ ] Webinterface (to read data or change settings via web under the condition OTA is still working)
* [X] Update over-the-air (ESP8266 only)
* [ ] Calendar

## Software/Converter to program them
* Arduino **[1.6.0](https://www.arduino.cc/en/Main/OldSoftwareReleases#previous)** _(Colorduino doesn't work properly on 1.8.6. It shows wrong color so you need to download an older version, aswell)_
* Arduino 1.8.6 for ESP8266
* **[USB to TTL-Converter with CP2102](https://www.amazon.de/SODIAL-USB-TTL-Konverter-Modul-eingebautem-CP2102/dp/B008RF73CS/ref=sr_1_fkmr0_2?ie=UTF8&qid=1534713779&sr=8-2-fkmr0&keywords=cp2102+breakout)** _(or similar)_
* ~Help of the community~
  * Testing
  * Bug fixing
  * Optimize
  * ~Adding feature~

## Additional to the software, it requires some hardware
* 5x Colorduino Matrix Shield _(it's possible up to 254 but never testing/using)_
* 5x Colorduino Matrix 8x8 RGB LED Full Dot/Square _(Feel free to mixed them up)_
  * 1st shows the symbol/logo, everything else shows the information
* LDR _(if it's dark, watchface change to clock with lowest light so you can sleep at night without any glare)_
* 3x Button _(not planed to use all of them at the moment)_
* BME280 _(for indoor use)_
* ADS1115 _(or similar for those Buttons and LDR. Yeah, 15-bit resolution is an overkill 😄)_
* ~5V-3.3V Level Shifter (if I use an ESP8266-01)~
* DC-DC 12V to 5V and 3.3V Step-down Power Supply
  * We need at least 3.3V/5V for ESP8266 and 6.5V to 7.5V for RGB Matrix, at least 1A+.
* Messing Spacer _(for mounting)_

## Character Set supported
* [X] A-Z
* [ ] a-z ~(it will convert to uppercase)~
* [X] 0-9 (decimal)
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
* [ ] Read and Parse Char
* [ ] Print Char on Colorduino
* [ ] Print String on Colorduino
* [ ] Scroll String on Colorduino across
* [ ] Print progressbar on Colorduino while Updating ESP8266
* [ ] Print progressbar on Colorduino for Widget _(e.g. Spotify Track position)_
* [ ] White-Balance Testscreen
* [ ] AutoCAD File (2D/3D)
* [ ] ...

## Worksteps for ESP8266
* [ ] WiFi Manager
* [ ] EEPROM for Setting
* [ ] Webpage for Settings and Debug
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

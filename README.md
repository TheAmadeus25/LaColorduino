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
**Dark-Mode** is supported which mean, it lower the light to the lowest value possible. It's very handy at night, because the icon doesn't appear and it stays at clock. _(It still refreshes information in background all the time, so it can act very fast if needed.)_

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

![Preview Indoor Temperature 2](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Indoor/IMG_0852.jpg?raw=true)

![Preview Indoor Temperature 3](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Indoor/IMG_0933.jpg?raw=true)

![Preview Indoor Temperature 4](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Indoor/Foto%2018.04.20,%2023%2010%2054.jpg?raw=true)

**...more photos incoming**

### Indoor Humidity

There is a watchface just for the current **humidity**.

![Preview Indoor Humidity](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Indoor/IMG_0726.JPG?raw=true)

******
## Weather

Based on **[openweathermap](https://openweathermap.org/)** it show the current **weather** at your location. It change the icon as well, depending on the weather. **[Here](https://openweathermap.org/weather-conditions)** is a list which is more accurate. I did an update of all weather symbols due lack of space (reducing around 8%). However, this should match better to this Social-Gamer-Smartwatch.

### Thunderstorm

![Preview Weather Thunderstorm](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Weather/Thunderstorm.jpg?raw=true)

### Drizzle

![Preview Weather Drizzle](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Weather/Drizzle.jpg?raw=true)

### Rain (day)

![Preview Weather Rain Day](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Weather/Rain%20Day.jpg?raw=true)

### Rain (night)

![Preview Weather Rain Night](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Weather/Rain%20Night.jpg?raw=true)

### Snow 1

![Preview Weather Snow 1](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Weather/Snow%201.jpg?raw=true)

### Snow 2

![Preview Weather Snow 2](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Weather/Snow%202.jpg?raw=true)

### Atmosphere, Fog etc.

![Preview Weather Atmosphere](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Weather/Fog.jpg?raw=true)

### Clear Sky (day)

![Preview Weather Clear Sky](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Weather/Clear%20Day.jpg?raw=true)

### Clear Sky (night)

![Preview Weather Clear Sky2](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Weather/Clear%20Night.jpg?raw=true)

### Few Clouds (day)

![Preview Weather Few Clouds1](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Weather/Few%20Clouds%20Day.jpg?raw=true)

### Few Clouds (night)

![Preview Weather Few Clouds2](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Weather/Few%20Clouds%20Night.jpg?raw=true)

### Scattered Clouds

![Preview Weather Scattered Clouds](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Weather/Scattered%20Clouds.jpg?raw=true)

### Broken Clouds (Will changed in the future)

![Preview Weather Broken Clouds](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Weather/Scattered%20Clouds.jpg?raw=true)

### 5 Day Forecast example (Currently not available due problems)

![Preview Weather Forecast](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Weather/Forecast%205%20Day.jpg?raw=true)

### Wind Speed (km/h)

![Preview Weather Wind](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Weather/IMG_1136.jpg?raw=true)

### Sunrise (Currently not available due problems)

![Preview Sunrise](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Weather/Sunrise.jpg?raw=true)

### Sunset (Currently not available due problems)

![Preview Sunset](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Weather/Sunset.jpg?raw=true)

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

## Facebook (Currently not available due problems)

### Fan Counter

![Preview Facebook Fan](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Facebook/Facebook.jpg?raw=true)

******
## Powermeter Watchface ([Video](https://imgur.com/gallery/6YIdLtq))

You need extra hardware to make this run _(ESP with Built-in button + INA226)_. I'll uploade the sourcecode for the second device later. However, this measuring works completly over WiFi! The **Slave ESP** is measuring the **Voltage**, **Current** and calculate the **Power**. It transmit this Information **over Wi-Fi** to the Social-Gamer-Smartwatch. **[UDP](https://en.wikipedia.org/wiki/User_Datagram_Protocol)** helps a lot for this use case! If you want to switch between all units, just press the button on the **Slave ESP** and it will change on the Smartwatch, as well. It's very easy and you can use your own measuring instead of **INA226**! 

### Voltage

![Preview Voltage](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Power/Voltage.jpg?raw=true)

### Current

![Preview Current](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Power/Current.jpg?raw=true)

### Power

![Preview Power](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Power/Power.jpg?raw=true)

### Slave Device Unit

![Preview Slave Device](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Multimeter%20Device/Slave.jpg?raw=true)

### Multimeter Adapter

![Preview Multimeter Adapter](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Multimeter%20Device/Multimeter.jpg?raw=true)

******
## CounterStrike: Global Offensive 

Yes my friend, it's true! It can show you your **current stats** as well! I just modified the **[official API from Valve](https://developer.valvesoftware.com/wiki/Counter-Strike:_Global_Offensive_Game_State_Integration)** a little. It shows you:
* Kill
* Assist
* Death
* Health _(as progressbar)_
* Who wins _(CT or T)_
* Bomb state _(defused or exploded)(it override who win)_

TBH, this watchface need additional **[script](https://github.com/TheAmadeus25/CounterStrike-GlobalOffensive-LiveStat-for-OBS-Studio/tree/master/Sourcecode)** and **[software](https://nodejs.org/de/download/)** which I also uploaded **[here](https://github.com/TheAmadeus25/CounterStrike-GlobalOffensive-LiveStat-for-OBS-Studio)**. Just follow the **[wiki](https://github.com/TheAmadeus25/CounterStrike-GlobalOffensive-LiveStat-for-OBS-Studio/wiki)**. Currently, it's input-lag is at ~6 milliseconds _(~166Hz)_ which is fast enough for such a device! It's not possible to decrease input-lag over Wi-Fi even more.

### Livestats

You can change the delimiter of this watchface into one of the following character:
* Space
* Slash
* Dot
* Vertical line
* Colon
* Hyphen
* Asterix

### Space Delimiter (Setting 0)

![Preview CSGO Livestats 0](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/CounterStrike/IMG_0780.JPG?raw=true)

### Slash Delimiter (Setting 1)

![Preview CSGO Livestats 1](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/CounterStrike/IMG_0976.jpg?raw=true)

### Dot Delimiter (Setting 2)

![Preview CSGO Livestats 2](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/CounterStrike/IMG_0977.jpg?raw=true)

### Vertical Line Delimiter (Setting 3)

![Preview CSGO Livestats 3](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/CounterStrike/IMG_0978.jpg?raw=true)

### Colon Delimiter (Setting 4)

![Preview CSGO Livestats 4](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/CounterStrike/IMG_0778.JPG?raw=true)

### Hyphen Delimiter (Setting 5)

![Preview CSGO Livestats 5](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/CounterStrike/IMG_0939.jpg?raw=true)

### Asterix Delimiter (Setting 6)

![Preview CSGO Livestats 6](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/CounterStrike/IMG_0970.jpg?raw=true)

### Bomb Exploded ([Video](https://twitter.com/TheAmadeus25/status/1244611876392230912))

![Preview CSGO Bomb Exploded](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/CounterStrike/IMG_0748.JPG?raw=true)

### Bomb Defused ([Video](https://twitter.com/TheAmadeus25/status/1244611705881198597))

![Preview CSGO Bomb Defused](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/CounterStrike/IMG_0777.JPG?raw=true)

### CT Wins ([Video](https://twitter.com/TheAmadeus25/status/1244611519905660928))

![Preview CSGO CT Wins](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/CounterStrike/IMG_1820.jpg?raw=true)

**...more videos incoming**

******
## Basics

### Connecting to WiFi/MiFi Device

![Preview WiFi](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/WiFi/Foto%2018.04.20,%2022%2046%2013.jpg?raw=true)

### Connecting to WiFi/MiFi Device Success

![Preview WiFi Success](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/WiFi/Foto%2018.04.20,%2022%2052%2048.jpg?raw=true)

### No WiFi/MiFi Device available / Wrong SSID

![Preview WiFi Wrong SSID](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/WiFi/Foto%2018.04.20,%2022%2046%2056.jpg?raw=true)

### Wrong WiFi/MiFi Password

![Preview WiFi Wrong Password](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/WiFi/Foto%2018.04.20,%2022%2047%2020.jpg?raw=true)

### Testing Internet Connection

![Preview Internet](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/WiFi/IMG_0912.png?raw=true)

### Testing Internet Connection Failed

![Preview Internet Failed](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/WiFi/Foto%2018.04.20,%2022%2052%2003.jpg?raw=true)

### Testing Internet Connection Succeed

![Preview Internet Failed](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/WiFi/Foto%2018.04.20,%2022%2052%2023.jpg?raw=true)

## Update-over-Air (OTA) 

This one is just for the ESP8266 itself. It's not possible to update the Colorduino in this build over the air. The Icon is animated and rotating while receiving data. Based on its colour it shows you the current state _(progress, succeeded, failed)_. Someday, if this project is finished, I make this process obsolete. Everything should be configured on a web browser. It doesn't mean I'll remove this feature, maybe it got a bugfix or an update. OTA would be very handy.

### Progress ([Video](https://twitter.com/TheAmadeus25/status/1244610207793254401))

![Preview OTA 1](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/OTA/IMG_0934.jpg?raw=true)

### Succeeded

![Preview OTA 2](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/OTA/IMG_0938.jpg?raw=true)

### Failed

![Preview OTA 3](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/OTA/IMG_0960.jpg?raw=true)

**...new photos incoming**

******
## Font
### Numbers

![Preview Number 0](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Numbers/0ss.png?raw=true)
![Preview Number 1](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Numbers/1ss.png?raw=true)
![Preview Number 2](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Numbers/2ss.png?raw=true)
![Preview Number 3](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Numbers/3ss.png?raw=true)
![Preview Number 4](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Numbers/4ss.png?raw=true)
![Preview Number 5](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Numbers/5ss.png?raw=true)
![Preview Number 6](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Numbers/6ss.png?raw=true)
![Preview Number 7](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Numbers/7ss.png?raw=true)
![Preview Number 8](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Numbers/8ss.png?raw=true)
![Preview Number 9](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Numbers/9ss.png?raw=true)

### Letters

### Special Character

![Preview Colon](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Colonss.png?raw=true)
![Preview Semi Colon](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Semi%20Colonss.png?raw=true)
![Preview Plus](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Plusss.png?raw=true)
![Preview Hyphen](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Hyphenss.png?raw=true)
![Preview Asterix](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Asterixss.png?raw=true)
![Preview Dot](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Dotss.png?raw=true)
![Preview Comma](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Commass.png?raw=true)
![Preview Underline](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Underliness.png?raw=true)
![Preview Hash](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Hashss.png?raw=true)
![Preview Vertical Line](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Vertical%20Liness.png?raw=true)
![Preview Degree](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Degreess.png?raw=true)
![Preview µ](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/µss.png?raw=true)
![Preview Slash](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Slashss.png?raw=true)
![Preview Exclamation Mark](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Exclamation%20Markss.png?raw=true)
![Preview Percent Sign](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Percent%20Signss.png?raw=true)
![Preview Round Bracket open](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Round%20Bracket%20openss.png?raw=true)
![Preview Round Bracket closed](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Round%20Bracket%20closedss.png?raw=true)
![Preview Lower Than](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Lower%20Thanss.png?raw=true)
![Preview Higher Than](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Higher%20Thanss.png?raw=true)
![Preview Equal](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Equalss.png?raw=true)
![Preview Question Mark](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Question%20Markss.png?raw=true)
![Preview At](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Atss.png?raw=true)
![Preview Square Bracket open](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Square%20Bracket%20openss.png?raw=true)
![Preview Square Bracket closed](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Square%20Bracket%20closedss.png?raw=true)
![Preview Curly Bracket open](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Curly%20Bracket%20openss.png?raw=true)
![Preview Curly Bracket closed](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Curly%20Bracket%20closedss.png?raw=true)
![Preview Circumflex](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Circumflexss.png?raw=true)
![Preview Grave Accent](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Grave%20Accentss.png?raw=true)
![Preview Tilde](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Tildess.png?raw=true)
![Preview Space](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Spacess.png?raw=true)
![Preview Missing](https://github.com/TheAmadeus25/LaColorduino/blob/master/Photos/Special%20Character/Errorss.png?raw=true)

******
## Icon

### Symbolics

### Weather

**...more photos incoming**

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

## Character Set missing
* [ ] a-z ~(it will convert to uppercase)~
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

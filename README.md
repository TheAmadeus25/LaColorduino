# LaColorduino - Your own Smartwatch how it should be (it's a clone)
I build my own clone of LaMetric smartwatch but with 5 Colorduino. It will make use of an ESP8266 (01 or NodeMCU) for the connection to the Internet. It's build for everdays use like showing your Subscribers on YouTube, the current track on Spotify, how strong is the Euro, or the weather at the moment. There is (in the future) everthing for everbody and everthing is selfmade!


**Note: This project isn't started, yet. I'm still waiting for my parts from China but hey, you get what you paid. If I got everything, I'll start programming and this will take time, too. I did some charset and logos but I need to write my own protocol for communication, parsing those information, control the matrix and many more. Meanwhile, I did a checklist to show you, what I (try) to programm them. Maybe somebody can help me, too. Maybe I need to change some parts like the ESP8266 (my sourcecode goes out of memory or similar) or the Step-down Power Supply is to weak. The Datasheet of the Colorduino isn't the best I ever read and there are at least 2 version of them. Don't worry, I try to help with and guide and something like a wiki here on github.  And last but not least, English isn't my native language but it's the language of programming. It help's more people on the world if you ask in english than in german!**
 
## I plan to add things like
* [ ] Twitch
  * [ ] View
  * [ ] Is live now
* [ ] Facebook Fan count
* [ ] Twitter followers
* [ ] YouTube
  * [ ] Total Subscribers
  * [ ] Total Comments
  * [ ] Total Watchtime
  * [ ] Total View
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
* [ ] [Weather](https://openweathermap.org/weather-conditions)
  * [ ] Thunderstorm
  * [ ] Drizzle
  * [ ] Rain
  * [ ] Snow
  * [ ] Atmospere
  * [ ] Clear
  * [ ] Moon Phase
  * [ ] Clouds
  * [ ] Wind
* [ ] Indoor
  * [ ] Temperature
  * [ ] Humidity
  * [ ] Barometric
  * [ ] (Air Quality, if I/you buy a CCS811 or similar)
* [ ] Github
  * [ ] Subscription (or something)
* [ ] Webinterface (to read data or change settings via web)
* [ ] Update over-the-air (ESP8266 only)
* [ ] Calendar
* [ ] Clock (of course 😄)
## Software/Converter to program them
* Arduino [**1.6.0**](https://www.arduino.cc/en/Main/OldSoftwareReleases#previous) (Colorduino doesn't work properly on 1.8.6. It shows wrong color so you need to download an older version)
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
* LDR (if it's dark, watchface change to clock with lowest light so you can sleep at night)
* 3x Button (not planed to use all of them at the moment)
* BME280 for indoor use
* ADS1115 or similar for those Buttons and LDR. (Yeah, 15-bit resolution is an overkill 😄)
* 5V-3.3V Level Shifter (if I use an ESP8266-01)
* DC-DC 12V to 5V and 3.3V Step-down Power Supply
  * We need at least 3.3V/5V for ESP8266 and 6.5V to 7.5V for RGB Matrix, at least 1A+.
* Messing Spacer (for mounting)


## Character Set
* [X] A-Z
* [x] a-z (it will convert to uppercase)
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
* [ ] [Japanese Katakana](http://www.electronic-engineering.ch/microchip/datasheets/lcd/charset.gif)




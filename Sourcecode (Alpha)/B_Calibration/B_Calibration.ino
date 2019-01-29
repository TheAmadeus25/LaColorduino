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
  │ Version: 0.0.1 - ALPHA                    Date: 27.Jan.2019                      ┃
  ├──────────────────────────┴─────────────────────────┤
  └────────────────────────────────────────────────────┘
*/

#include <Colorduino.h>
#include <ColorTools.h>

// ### Choose your Position for each Colorduino ###
// Count from left to right
// 0        : 1st Colorduino for Symbol only. It has it own sourcecode.
// 1 to 255 : 2nd to 254th Colorduino for Text/Number/Information
#define Unit_Pos 3

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

  //unsigned char whiteBalVal[3] = {18, 39, 63}; // RGB
  // #0 26, 58, 63      Ref. Weiss
  // #1 18, 39, 63      Stark Grün, leicht Blau
  // #2 15, 39, 63      Stark Blau leicht Rot
  // #3 15, 39, 63      Leicht Grün, Leicht Rot
  // #4 12, 38, 63 ???  Leicht Blau, Leicht Rot
  
  Colorduino.SetWhiteBal(whiteBalVal);
  GFX_Fill(255, 255, 255);
  Colorduino.FlipPage();
}

void loop() {
  //Colorduino.FlipPage();
}

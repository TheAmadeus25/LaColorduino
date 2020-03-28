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
  │ Symbolic_Twitch()           : Show Symbolic                                      ┃
  │ Symbolic_Twitch_Count()     : Show Symbolic                                      ┃
  │ Symbolic_Clock()            : Show Symbolic                                      ┃
  │ Symbolic_Like()             : Show Symbolic                                      ┃
  │ Symbolic_Facebook()         : Show Symbolic                                      ┃
  │ Symbolic_Twitter()          : Show Symbolic                                      ┃
  │ Symbolic_Temperature()      : Show Symbolic                                      ┃
  │ Symbolic_YouTube_Sub()      : Show Symbolic                                      ┃
  │ Symbolic_YouTube_Comment()  : Show Symbolic                                      ┃
  │ Symbolic_YouTube_WatchTime(): Show Symbolic                                      ┃
  │ Symbolic_YouTube_View()     : Show Symbolic                                      ┃
  │ Symbolic_YouTube_View_2()   : Show Symbolic                                      ┃
  │ Symbolic_Dollar()           : Show Symbolic                                      ┃
  │ Symbolic_Euro()             : Show Symbolic                                      ┃
  │ Symbolic_GMail()            : Show Symbolic                                      ┃
  │ Symbolic_WiFi()             : Show Symbolic                                      ┃
  │ Symbolic_Stock()            : Show Symbolic                                      ┃
  │ Symbolic_RSS()              : Show Symbolic                                      ┃
  │ Symbolic_Analytics()        : Show Symbolic                                      ┃
  │ Symbolic_Steam()            : Show Symbolic                                      ┃
  │ Symbolic_Steam_2()          : Show Symbolic                                      ┃
  │ Symbolic_Asteroid()         : Show Symbolic                                      ┃
  │ Symbolic_Energie()          : Show Symbolic                                      ┃
  │ Symbolic_Bitcoin()          : Show Symbolic                                      ┃
  │ Symbolic_Spotify()          : Show Symbolic                                      ┃
  │ Symbolic_Spotify_2()        : Show Symbolic                                      ┃
  │ Symbolic_Spotify_3()        : Show Symbolic                                      ┃
  │ Symbolic_PayPal()           : Show Symbolic                                      ┃
  │ Symbolic_Fortnite()         : Show Symbolic                                      ┃
  │ Symbolic_Github()           : Show Symbolic                                      ┃
  │ Symbolic_Weather_Cloud()    : Show Symbolic                                      ┃
  │ Symbolic_Wind()             : Show Symbolic                                      ┃
  │ Symbolic_Humidity()         : Show Symbolic                                      ┃
  │ Symbolic_Air()              : Show Symbolic                                      ┃
  │ Symbolic_Error()            : Show Symbolic                                      ┃
  │ Symbolic_Date()             : Show Symbolic                                      ┃
  │ Symbolic_Earth()            : Show Symbolic                                      ┃
  │ Symbolic_Dot()              : Show Symbolic                                      ┃
  ├──────────────────────────┬─────────────────────────┤
  │ Version: 0.0.5 - ALPHA                    Date: 27.Mar.2020                      ┃
  ├──────────────────────────┴─────────────────────────┤
  │ + Update Color                                                                   ┃
  │ + Add Symbolic Earth                                                             ┃
  │ + Add Symbolic Dot                                                               ┃
  └────────────────────────────────────────────────────┘
*/

void Symbolic_Twitch() {
  GFX_Fill(0, 0, 0);
  // 100, 65, 165

  GFX_HLine(0, 7, 7, 120, 68, 255);

  Colorduino.SetPixel(0, 6, 120, 68, 255);
  Colorduino.SetPixel(7, 6, 120, 68, 255);
  Colorduino.SetPixel(0, 5, 120, 68, 255);
  Colorduino.SetPixel(3, 5, 120, 68, 255);
  Colorduino.SetPixel(5, 5, 120, 68, 255);
  Colorduino.SetPixel(7, 5, 120, 68, 255);
  Colorduino.SetPixel(0, 4, 120, 68, 255);
  Colorduino.SetPixel(3, 4, 120, 68, 255);
  Colorduino.SetPixel(5, 4, 120, 68, 255);
  Colorduino.SetPixel(7, 4, 120, 68, 255);
  Colorduino.SetPixel(0, 3, 120, 68, 255);
  Colorduino.SetPixel(7, 3, 120, 68, 255);


  GFX_HLine(0, 2, 7, 120, 68, 255);
  Colorduino.SetPixel(3, 2, 0, 0, 0);

  Colorduino.SetPixel(2, 1, 120, 68, 255);
  Colorduino.SetPixel(3, 1, 120, 68, 255);

  Colorduino.SetPixel(2, 0, 120, 68, 255);
  return;
}

void Symbolic_Twitch_Count() {
  GFX_Fill(0, 0, 0);
  
  GFX_Square(2, 6, 5, 3, 255, 0, 0);
  GFX_HLine(3, 2, 4, 255, 0, 0);
  GFX_HLine(2, 1, 5, 255, 0, 0);
  GFX_HLine(1, 0, 6, 255, 0, 0);
  return;
}

void Symbolic_Clock() {
  GFX_Fill(0, 0, 0);
  
  GFX_HLine(1, 7, 5, 255, 255, 255);

  Colorduino.SetPixel(0, 6, 255, 255, 255);
  Colorduino.SetPixel(6, 6, 255, 255, 255);

  Colorduino.SetPixel(0, 5, 255, 255, 255);
  Colorduino.SetPixel(3, 5, 255, 255, 255);
  Colorduino.SetPixel(6, 5, 255, 255, 255);

  Colorduino.SetPixel(0, 4, 255, 255, 255);
  GFX_HLine(3, 4, 6, 255, 255, 255);

  Colorduino.SetPixel(0, 3, 255, 255, 255);
  Colorduino.SetPixel(6, 3, 255, 255, 255);

  Colorduino.SetPixel(0, 2, 255, 255, 255);
  //Colorduino.SetPixel(3, 2, 10, 10, 10);
  Colorduino.SetPixel(6, 2, 255, 255, 255);

  GFX_HLine(1, 1, 5, 255, 255, 255);

  return;
}

void Symbolic_Like() {
  GFX_Fill(0, 0, 0);
  
  GFX_Square(0, 4, 1, 0, 40, 70, 255);
  GFX_Square(3, 6, 4, 5, 255, 255, 255);
  GFX_Square(2, 4, 6, 1, 255, 255, 255);

  Colorduino.SetPixel(4, 7, 255, 255, 255);

  GFX_HLine(3, 0, 5, 255, 255, 255);

  return;
}

void Symbolic_Facebook() {
  //GFX_Fill(59, 89, 152);
  GFX_Fill(40, 70, 255);
  
  GFX_VLine(5, 6, 1, 255, 255, 255);

  Colorduino.SetPixel(6, 6, 255, 255, 255);
  Colorduino.SetPixel(4, 4, 255, 255, 255);
  Colorduino.SetPixel(6, 4, 255, 255, 255);

  return;
}

void Symbolic_Twitter() {
  GFX_Fill(0, 0, 0);
  
  Colorduino.SetPixel(0, 7, 0, 132, 180);
  Colorduino.SetPixel(5, 7, 0, 132, 180);

  GFX_HLine(0, 6, 1, 0, 132, 180);
  GFX_HLine(4, 6, 6, 0, 132, 180);
  GFX_Square(0, 5, 7, 4, 0, 132, 180);
  GFX_HLine(1, 3, 6, 0, 132, 180);
  GFX_HLine(2, 2, 5, 0, 132, 180);
  GFX_HLine(1, 1, 4, 0, 132, 180);
  GFX_HLine(0, 0, 2, 0, 132, 180);

  return;
}

void Symbolic_Temperature(float Celsius) {
  GFX_Fill(0, 0, 0);

  GFX_VLine(2, 7, 6, 255, 255, 255);
  GFX_VLine(1, 6, 3, 255, 255, 255);
  GFX_VLine(3, 6, 3, 255, 255, 255);
  GFX_HLine(6, 7, 7, 255, 255, 255);
  GFX_HLine(6, 5, 7, 255, 255, 255);
  GFX_HLine(6, 3, 7, 255, 255, 255);
  GFX_VLine(0, 2, 1, 255, 255, 255);
  GFX_VLine(4, 2, 1, 255, 255, 255);
  GFX_HLine(1, 0, 3, 255, 255, 255);

  if (Celsius >= 30) {
    Colorduino.SetPixel(5, 7, 255, 255, 255);
    GFX_VLine(2, 5, 3, 255, 0, 0);
    GFX_Square(1, 2, 3, 1, 255, 0, 0);

  } else if (Celsius >= 18 && Celsius < 30) {
    Colorduino.SetPixel(5, 5, 255, 255, 255);
    GFX_VLine(2, 4, 3, 255, 255, 0);
    GFX_Square(1, 2, 3, 1, 255, 255, 0);

  } else if (Celsius >= 10 && Celsius < 18) {
    Colorduino.SetPixel(5, 3, 255, 255, 255);
    Colorduino.SetPixel(2, 3, 0, 255, 0);
    GFX_Square(1, 2, 3, 1, 0, 255, 0);

  } else if (Celsius < 10) {
    GFX_Square(1, 2, 3, 1, 0, 0, 255);

  }
  return;
}

void Symbolic_YouTube_Sub() {
  GFX_Fill(0, 0, 0);
  
  GFX_HLine(1, 6, 6, 255, 0, 0);
  GFX_Square(0, 5, 7, 3, 255, 0, 0);

  Colorduino.SetPixel(3, 5, 255, 255, 255);
  GFX_HLine(3, 4, 4, 255, 255, 255);
  Colorduino.SetPixel(3, 3, 255, 255, 255);

  GFX_HLine(1, 2, 6, 255, 0, 0);
  return;
}

void Symbolic_YouTube_Comment() {
  GFX_Fill(0, 0, 0);

  GFX_HLine(1, 6, 5, 255, 0, 0);
  GFX_Square(0, 5, 6, 3, 255, 0, 0);

  Colorduino.SetPixel(1, 4, 255, 255, 255);
  Colorduino.SetPixel(3, 4, 255, 255, 255);
  Colorduino.SetPixel(5, 4, 255, 255, 255);

  GFX_HLine(1, 2, 6, 255, 0, 0);
  GFX_HLine(4, 1, 5, 255, 0, 0);

  Colorduino.SetPixel(4, 0, 255, 0, 0);

  return;
}

void Symbolic_YouTube_WatchTime() {
  GFX_Fill(0, 0, 0);
  
  GFX_HLine(3, 7, 5, 255, 0, 0);
  GFX_HLine(2, 6, 6, 255, 0, 0);
  GFX_Square(1, 5, 7, 3, 255, 0, 0);

  GFX_VLine(4, 6, 5, 255, 255, 255);
  GFX_HLine(4, 4, 6, 255, 255, 255);

  GFX_HLine(2, 2, 6, 255, 0, 0);
  GFX_HLine(3, 1, 5, 255, 0, 0);

  return;
}

void Symbolic_YouTube_View() {
  GFX_Fill(0, 0, 0);

  GFX_Square(2, 6, 5, 3, 255, 255, 255);
  Colorduino.SetPixel(2, 6, 30, 30, 30);
  Colorduino.SetPixel(5, 6, 30, 30, 30);
  Colorduino.SetPixel(2, 3, 30, 30, 30);
  Colorduino.SetPixel(5, 3, 30, 30, 30);

  GFX_HLine(3, 2, 4, 30, 30, 30);
  GFX_HLine(1, 1, 6, 255, 0, 0);
  GFX_HLine(0, 0, 7, 255, 0, 0);

  return;
}

void Symbolic_YouTube_View_2() {
  GFX_Fill(0, 0, 0);
  
  GFX_HLine(2, 6, 5, 255, 255, 255);

  GFX_HLine(1, 5, 6, 255, 255, 255);
  GFX_HLine(3, 5, 4, 255, 0, 0);

  GFX_Square(0, 4, 7, 3, 255, 255, 255);
  GFX_Square(2, 4, 5, 3, 255, 0, 0);
  GFX_Square(3, 4, 4, 3, 0, 0, 0);

  Colorduino.SetPixel(3, 4, 255, 255, 255);

  GFX_HLine(1, 2, 6, 255, 255, 255);
  GFX_HLine(3, 2, 4, 255, 0, 0);

  GFX_HLine(2, 1, 5, 255, 255, 255);

  return;
}

void Symbolic_Dollar() {
  GFX_Fill(0, 0, 0);
  
  Colorduino.SetPixel(3, 7, 0, 255, 0);

  Colorduino.SetPixel(2, 6, 0, 255, 0);
  Colorduino.SetPixel(3, 6, 0, 255, 0);
  Colorduino.SetPixel(4, 6, 0, 255, 0);

  Colorduino.SetPixel(1, 5, 0, 255, 0);
  Colorduino.SetPixel(3, 5, 0, 255, 0);
  Colorduino.SetPixel(5, 5, 0, 255, 0);

  Colorduino.SetPixel(2, 4, 0, 255, 0);
  Colorduino.SetPixel(3, 4, 0, 255, 0);

  Colorduino.SetPixel(3, 3, 0, 255, 0);
  Colorduino.SetPixel(4, 3, 0, 255, 0);

  Colorduino.SetPixel(1, 2, 0, 255, 0);
  Colorduino.SetPixel(3, 2, 0, 255, 0);
  Colorduino.SetPixel(5, 2, 0, 255, 0);

  Colorduino.SetPixel(2, 1, 0, 255, 0);
  Colorduino.SetPixel(3, 1, 0, 255, 0);
  Colorduino.SetPixel(4, 1, 0, 255, 0);

  Colorduino.SetPixel(3, 0, 0, 255, 0);

  return;
}

void Symbolic_Euro(bool Color) {
  int s_red   = 0;
  int s_green = 255;
  int s_blue  = 0;

  if (Color == true) {
    s_red   = 0;
    s_green = 0;
    s_blue  = 255;
  }

  GFX_Fill(0, 0, 0);

  GFX_HLine(3, 7, 5, s_red, s_green, s_blue);

  GFX_HLine(2, 6, 3, s_red, s_green, s_blue);
  GFX_HLine(5, 6, 6, s_red, s_green, s_blue);

  Colorduino.SetPixel(2, 5, s_red, s_green, s_blue);
  Colorduino.SetPixel(6, 5, s_red, s_green, s_blue);

  GFX_Square(1, 4, 4, 3, s_red, s_green, s_blue);

  Colorduino.SetPixel(2, 2, s_red, s_green, s_blue);
  Colorduino.SetPixel(6, 2, s_red, s_green, s_blue);

  GFX_HLine(2, 1, 3, s_red, s_green, s_blue);
  GFX_HLine(5, 1, 6, s_red, s_green, s_blue);

  GFX_HLine(3, 0, 5, s_red, s_green, s_blue);

  return;
}



void Symbolic_GMail() {
  GFX_Fill(0, 0, 0);
  
  GFX_Square(0, 6, 7, 1, 255, 20, 5);
  GFX_Square(1, 6, 6, 1, 255, 255, 255);

  GFX_VLine(1, 6, 5, 255, 20, 5);
  GFX_VLine(6, 6, 5, 255, 20, 5);

  GFX_VLine(2, 5, 4, 255, 20, 5);
  GFX_VLine(5, 5, 4, 255, 20, 5);

  GFX_Square(3, 4, 4, 3, 255, 20, 5);

  return;
}

void Symbolic_WiFi(short wifi_state) {
  GFX_Fill(0, 0, 0);

  if (wifi_state == 2) {
    GFX_HLine(2, 7, 5, 30, 30, 30);
    GFX_HLine(1, 6, 6, 30, 30, 30);
    GFX_HLine(2, 6, 5, 255, 255, 255);
    Colorduino.SetPixel(0, 5, 30, 30, 30);
    Colorduino.SetPixel(1, 5, 255, 255, 255);
    Colorduino.SetPixel(6, 5, 255, 255, 255);
    Colorduino.SetPixel(7, 5, 30, 30, 30);
  }

  if (wifi_state >= 1) {
    GFX_HLine(3, 4, 4, 30, 30, 30);
    GFX_HLine(2, 3, 5, 30, 30, 30);
    GFX_HLine(3, 3, 4, 255, 255, 255);
  }

  if (wifi_state >= -1) {
    GFX_HLine(3, 1, 4, 30, 30, 30);
    GFX_HLine(3, 0, 4, 255, 255, 255);
  }

  if (wifi_state == -1) {
    GFX_Square(1, 7, 2, 6, 255, 0, 0);
    GFX_Square(5, 7, 6, 6, 255, 0, 0);
    
    GFX_Square(3, 5, 4, 4, 255, 0, 0);
    
    GFX_Square(1, 3, 2, 2, 255, 0, 0);
    GFX_Square(5, 3, 6, 2, 255, 0, 0);
  }

  return;
}

void Symbolic_Stock() {
  GFX_Fill(0, 0, 0);
  
  GFX_Square(0, 1, 1, 0, 0, 0, 255);
  GFX_Square(2, 3, 3, 0, 255, 255, 0);
  GFX_Square(4, 5, 5, 0, 255, 0, 0);
  GFX_Square(6, 7, 7, 0, 0, 255, 0);

  return;
}

void Symbolic_RSS() {
  GFX_Fill(180, 50, 0);
  
  GFX_Square(1, 6, 6, 1, 211, 99, 17);
  GFX_Square(1, 6, 3, 5, 255, 255, 255);
  GFX_Square(4, 5, 5, 4, 255, 255, 255);
  GFX_Square(5, 3, 6, 1, 255, 255, 255);
  GFX_HLine(1, 3, 2, 255, 255, 255);
  GFX_VLine(3, 2, 1, 255, 255, 255);
  
  Colorduino.SetPixel(1, 1, 255, 255, 255);

  return;
}

void Symbolic_Analytics() {
  GFX_Fill(0, 0, 0);
  
  GFX_Square(1, 2, 4, 0, 255, 255, 0);
  GFX_Square(3, 4, 4, 3, 255, 255, 0);
  GFX_Square(5, 6, 6, 0, 180, 50, 0);

  return;
}

void Symbolic_Steam() {
  GFX_Fill(0, 0, 0);
  
  GFX_HLine(2, 7, 5, 5, 5, 5);
  GFX_HLine(1, 6, 6, 5, 5, 5);
  GFX_HLine(2, 6, 5, 30, 30, 30);
  
  GFX_Square(0, 5, 7, 2, 5, 5, 5);
  GFX_Square(3, 4, 4, 3, 0, 0, 0);

  GFX_VLine(1, 5, 2, 30, 30, 30);
  GFX_VLine(6, 5, 2, 30, 30, 30);
  
  Colorduino.SetPixel(5, 5, 30, 30, 30);
  Colorduino.SetPixel(2, 5, 30, 30, 30);
  Colorduino.SetPixel(2, 2, 30, 30, 30);
  Colorduino.SetPixel(5, 2, 30, 30, 30);
  
  GFX_HLine(1, 1, 6, 5, 5, 5);
  GFX_HLine(2, 1, 5, 30, 30, 30);
  GFX_HLine(2, 0, 5, 5, 5, 5);

  return;
}

void Symbolic_Steam_2() {
  GFX_Fill(0, 0, 0);
  
  GFX_HLine(5, 7, 6, 255, 255, 255);

  Colorduino.SetPixel(4, 6, 255, 255, 255);
  Colorduino.SetPixel(7, 6, 255, 255, 255);
  
  GFX_HLine(4, 5, 5, 255, 255, 255);
  Colorduino.SetPixel(7, 5, 255, 255, 255);
  
  Colorduino.SetPixel(0, 4, 255, 255, 255);
  GFX_HLine(3, 4, 6, 255, 255, 255);

  GFX_HLine(0, 3, 4, 255, 255, 255);

  Colorduino.SetPixel(1, 2, 255, 255, 255);
  Colorduino.SetPixel(3, 2, 255, 255, 255);

  Colorduino.SetPixel(2, 1, 255, 255, 255);

  GFX_HLine(0, 0, 7, 2, 2, 2);

  return;
}

void Symbolic_Asteroid() {
  GFX_Fill(0, 0, 0);
  Colorduino.SetPixel(5, 7, 255, 255, 255);
  Colorduino.SetPixel(7, 7, 255, 255, 255);

  Colorduino.SetPixel(4, 6, 255, 255, 255);
  Colorduino.SetPixel(6, 6, 255, 255, 255);
  
  GFX_HLine(2, 5, 3, 255, 255, 255);
  Colorduino.SetPixel(5, 5, 255, 255, 255);
  Colorduino.SetPixel(7, 5, 255, 255, 255);
  
  GFX_HLine(1, 4, 4, 255, 255, 255);
  GFX_HLine(2, 4, 3, 50, 50, 50);
  Colorduino.SetPixel(6, 4, 255, 255, 255);
  
  GFX_HLine(0, 3, 5, 255, 255, 255);
  GFX_HLine(0, 2, 5, 255, 255, 255);
  GFX_HLine(1, 3, 4, 50, 50, 50);
  GFX_HLine(1, 2, 4, 50, 50, 50);
  GFX_Square(2, 3, 3, 2, 100, 30, 0);
  Colorduino.SetPixel(1, 2, 10, 10, 10);


  GFX_HLine(0, 1, 4, 255, 255, 255);
  GFX_HLine(1, 1, 3, 10, 10, 10);
  GFX_HLine(1, 1, 3, 50, 50, 50);
  GFX_HLine(1, 1, 2, 10, 10, 10);

  GFX_HLine(1, 0, 3, 255, 255, 255);

  return;
}

void Symbolic_Energie() {
  GFX_Fill(0, 0, 0);
  
  GFX_VLine(3, 7, 6, 30, 30, 30);
  GFX_VLine(6, 7, 6, 30, 30, 30);
  
  GFX_HLine(2, 5, 7, 100, 255, 0);
  GFX_Square(3, 4, 6, 3, 100, 255, 0);

  GFX_HLine(4, 2, 5, 100, 255, 0);
  
  GFX_HLine(1, 1, 2, 10, 10, 10);
  Colorduino.SetPixel(5, 1, 10, 10, 10);

  Colorduino.SetPixel(0, 0, 10, 10, 10);
  GFX_HLine(3, 0, 4, 10, 10, 10);

  return;
}

void Symbolic_Bitcoin() {
  GFX_Fill(0, 0, 0);
  
  GFX_HLine(2, 7, 3, 50, 20, 0);

  GFX_HLine(1, 6, 4, 255, 255, 0);

  Colorduino.SetPixel(1, 5, 255, 255, 0);
  Colorduino.SetPixel(5, 5, 255, 255, 0);

  GFX_HLine(1, 4, 4, 255, 255, 0);

  Colorduino.SetPixel(1, 3, 255, 255, 0);
  Colorduino.SetPixel(5, 3, 255, 255, 0);

  Colorduino.SetPixel(1, 2, 255, 255, 0);
  Colorduino.SetPixel(5, 2, 255, 255, 0);

  GFX_HLine(1, 1, 4, 255, 255, 0);
  
  GFX_HLine(2, 0, 3, 50, 20, 0);

  return;
}

void Symbolic_Spotify() {
  GFX_Fill(0, 0, 0);
  
  GFX_HLine(0, 5, 7, 100, 255, 0);
  GFX_HLine(1, 3, 6, 100, 255, 0);
  GFX_HLine(2, 1, 5, 100, 255, 0);

  return;
}

void Symbolic_Spotify_2() {
  GFX_Fill(0, 0, 0);
  
  GFX_HLine(2, 7, 5, 100, 255, 0);

  GFX_HLine(1, 6, 6, 100, 255, 0);

  Colorduino.SetPixel(0, 5, 100, 255, 0);
  Colorduino.SetPixel(7, 5, 100, 255, 0);
  
  GFX_HLine(0, 4, 7, 100, 255, 0);
  GFX_HLine(0, 3, 1, 100, 255, 0);
  GFX_HLine(6, 3, 7, 100, 255, 0);
  GFX_HLine(0, 2, 7, 100, 255, 0);
  GFX_HLine(1, 1, 2, 100, 255, 0);
  GFX_HLine(5, 1, 6, 100, 255, 0);
  GFX_HLine(2, 0, 5, 100, 255, 0);

  return;
}

void Symbolic_Spotify_3() {
  GFX_Fill(0, 0, 0);
  
  GFX_HLine(2, 7, 5, 100, 255, 0);
  
  GFX_HLine(1, 6, 6, 100, 255, 0);
  
  GFX_HLine(0, 5, 1, 100, 255, 0);
  GFX_HLine(5, 5, 7, 100, 255, 0);
  
  GFX_HLine(0, 4, 4, 100, 255, 0);
  GFX_HLine(6, 4, 7, 100, 255, 0);
  
  GFX_HLine(0, 3, 1, 100, 255, 0);
  GFX_HLine(4, 3, 5, 100, 255, 0);
  Colorduino.SetPixel(7, 3, 100, 255, 0);
 
  GFX_HLine(0, 2, 3, 100, 255, 0);
  GFX_HLine(5, 2, 7, 100, 255, 0);
  
  GFX_HLine(1, 1, 6, 100, 255, 0);
  GFX_HLine(2, 0, 5, 100, 255, 0);

  return;
}

void Symbolic_PayPal() {
  GFX_Fill(0, 0, 0);
  
  GFX_HLine(2, 6, 5, 30, 144, 255);
  GFX_Square(1, 5, 2, 0, 30, 144, 255);
  GFX_Square(5, 5, 6, 3, 30, 144, 255);
  GFX_HLine(3, 2, 5, 30, 144, 255);
  
  GFX_HLine(1, 7, 4, 0, 0, 255);
  GFX_Square(0, 6, 1, 1, 0, 0, 255);
  GFX_Square(4, 6, 5, 4, 0, 0, 255);
  GFX_HLine(2, 3, 4, 0, 0, 255);
  
  return;
}

void Symbolic_Fortnite() {
  GFX_Fill(0, 0, 0);
  //100, 65, 165
  
  GFX_Square(0, 6, 7, 1, 75, 0, 130);
  GFX_Square(2, 7, 5, 6, 255, 255, 255);
  GFX_Square(2, 5, 3, 0, 255, 255, 255);
  GFX_VLine(4, 4, 3, 255, 255, 255);

  return;
}

void Symbolic_Github() {
  GFX_Fill(0, 0, 0);
  
  GFX_VLine(0, 7, 5, 10, 10, 10);
  GFX_HLine(2, 7, 5, 10, 10, 10);
  GFX_HLine(3, 6, 4, 10, 10, 10);
  GFX_VLine(7, 7, 5, 10, 10, 10);
  
  GFX_HLine(2, 4, 5, 255, 173, 96);
  GFX_Square(1, 3, 6, 2, 255, 173, 96);
  Colorduino.SetPixel(2, 3, 20, 5, 0);
  Colorduino.SetPixel(5, 3, 20, 5, 0);
  
  Colorduino.SetPixel(0, 1, 10, 10, 10);
  GFX_HLine(2, 1, 5, 255, 173, 96);
  Colorduino.SetPixel(7, 1, 10, 10, 10);
  
  GFX_HLine(0, 0, 1, 10, 10, 10);
  GFX_HLine(6, 0, 7, 10, 10, 10);

  return;
}

void Symbolic_Weather_Cloud(short Offset) {
  //------------MAIN CLOUD START------------//
  Colorduino.SetPixel(1, 6 - Offset, 255, 255, 255);
  Colorduino.SetPixel(2, 6 - Offset, 40, 40, 40);
  //Colorduino.SetPixel(4, 6-Offset, 40, 40, 40);
  Colorduino.SetPixel(5, 6 - Offset, 255, 255, 255);
  Colorduino.SetPixel(6, 6 - Offset, 255, 255, 255);
  //Colorduino.SetPixel(7, 6-Offset, 10, 10, 10);

  GFX_HLine(0, 5 - Offset, 2, 255, 255, 255);
  GFX_HLine(4, 5 - Offset, 7, 255, 255, 255);
  GFX_HLine(0, 4 - Offset, 7, 255, 255, 255);
  GFX_HLine(1, 3 - Offset, 6, 255, 255, 255);
  //------------MAIN CLOUD END-------------//

  return;
}

void Symbolic_Wind() {
  GFX_Fill(0, 0, 0);
  
  GFX_VLine(0, 7, 0, 50, 50, 50);
  GFX_VLine(1, 7, 3, 255, 0, 0);
  GFX_VLine(2, 7, 3, 50, 50, 50);
  GFX_VLine(3, 6, 4, 255, 0, 0);
  GFX_VLine(4, 6, 4, 50, 50, 50);
  GFX_VLine(5, 6, 4, 255, 0, 0);
  GFX_VLine(6, 6, 4, 50, 50, 50);

  Colorduino.SetPixel(7, 5, 255, 0, 0);

  return;
}

void Symbolic_Humidity() {
  GFX_Fill(0, 0, 0);
  
  GFX_VLine(4, 7, 6, 10, 50, 255);
  
  GFX_VLine(3, 5, 4, 10, 50, 255);
  GFX_VLine(5, 5, 4, 10, 50, 255);
  
  GFX_VLine(2, 3, 1, 10, 50, 255);
  GFX_VLine(6, 3, 1, 10, 50, 255);

  GFX_HLine(3, 0, 5, 10, 50, 255);

  return;
}

void Symbolic_Air() {
  GFX_Fill(0, 0, 0);
  
  GFX_HLine(4, 6, 6, 100, 255, 0);
  GFX_HLine(2, 5, 5, 100, 255, 0);
  
  Colorduino.SetPixel(6, 5, 50, 255, 0);
  
  GFX_HLine(1, 4, 4, 100, 255, 0);
  GFX_HLine(5, 4, 6, 50, 255, 0);
  
  GFX_HLine(1, 3, 3, 100, 255, 0);
  GFX_HLine(4, 3, 5, 50, 255, 0);
  
  GFX_HLine(1, 2, 2, 100, 255, 0);
  GFX_HLine(3, 2, 5, 50, 255, 0);

  Colorduino.SetPixel(1, 1, 100, 255, 0);
  GFX_HLine(2, 1, 4, 50, 255, 0);

  Colorduino.SetPixel(0, 0, 100, 255, 0);

  return;
}

void Symbolic_Error() {
  GFX_Fill(10, 10, 10);
  
  GFX_HLine(0, 7, 7, 255, 255, 255);
  GFX_Square(3, 7, 4, 3, 255, 0, 0);
  
  GFX_VLine(0, 6, 0, 255, 255, 255);
  GFX_VLine(7, 6, 0, 255, 255, 255);

  GFX_HLine(0, 0, 7, 255, 255, 255);
  GFX_Square(3, 1, 4, 0, 255, 0, 0);

  return;
}

void Symbolic_Date( short Day ) {
  short DigitOne, DigitTwo;
  //GFX_Fill(30, 144, 255);
  GFX_Fill(10, 50, 255);
  GFX_HLine(1, 7, 2, 0, 0, 0);
  GFX_HLine(5, 7, 6, 0, 0, 0);

  // Numbers
  if (Day < 10) {
    Number(3, 2, true, Day, "White");
  } else {
    DigitOne = ( Day / 10 ) % 10;
    DigitTwo = Day % 10;
    Number(1, 2, true, DigitOne, "White");
    Number(5, 2, true, DigitTwo, "White");
  }


  // Numbers
  //Number(1, 2, true, 8);

  return;
}

void Symbolic_Earth() {
  GFX_Fill(0, 0, 0);// R G B
  
  GFX_VLine(0, 5, 2, 0, 255, 0);
  
  GFX_VLine(1, 6, 3, 0, 0, 255);
  GFX_VLine(1, 2, 1, 0, 255, 0);

  GFX_VLine(2, 7, 0, 0, 0, 255);
  Colorduino.SetPixel(2, 1, 0, 255, 0);
  
  GFX_VLine(3, 7, 0, 0, 0, 255);
  Colorduino.SetPixel(3, 4, 0, 255, 0);
  
  GFX_VLine(4, 7, 0, 0, 0, 255);
  GFX_VLine(4, 6, 4, 0, 255, 0);
  
  GFX_VLine(5, 7, 3, 0, 255, 0);
  GFX_VLine(5, 2, 0, 0, 0, 255);
  
  GFX_VLine(6, 6, 3, 0, 255, 0);
  GFX_VLine(6, 2, 1, 0, 0, 255);
  
  GFX_VLine(7, 5, 2, 0, 255, 0);

  return;
}

void Symbolic_Dot() {
  GFX_Fill(0, 0, 0);// R G B
   
  GFX_VLine(3, 4, 3, 255, 255, 255);
  GFX_VLine(4, 4, 3, 255, 255, 255);

  return;
}

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
  │ Symbolic_WiFi()             : Show Symbolic                                      ┃
  │ Symbolic_Error()            : Show Symbolic                                      ┃
  │ Symbolic_Date()             : Show Symbolic                                      ┃
  │ Symbolic_Earth()            : Show Symbolic                                      ┃
  │ Symbolic_Dot()              : Show Symbolic                                      ┃
  │ Symbolic_Line()             : Show Symbolic                                      ┃
  │ Symbolic_Line_Error()       : Show Symbolic                                      ┃
  │ Symbolic_Router()           : Show Symbolic                                      ┃
  ├──────────────────────────┬─────────────────────────┤
  │ Version: 0.0.7 - ALPHA                    Date: 16.Apr.2020                      ┃
  ├──────────────────────────┴─────────────────────────┤
  │ + Add Symbolic_Line()                                                            ┃
  │ + Add Symbolic_Line_Error()                                                      ┃
  │ + Add Symbolic_Router()                                                          ┃
  │ - Removing all uneccesary Symbolics (Optimizing Space)                           ┃
  └────────────────────────────────────────────────────┘
*/

void Symbolic_Blank() {
  GFX_Fill(255, 255, 255);
  
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

void Symbolic_Dot(short Color) {
  GFX_Fill(0, 0, 0);// R G B

  int n_red;
  int n_green;
  int n_blue;

  switch(Color) {
    case 0: n_red =  16;  n_green =  16;  n_blue =  16; break;
    case 1: n_red = 255;  n_green = 255;  n_blue = 255; break;
  }
  
  GFX_VLine(3, 4, 3, n_red, n_green, n_blue);
  GFX_VLine(4, 4, 3, n_red, n_green, n_blue);

  return;
}

void Symbolic_Line() {
  GFX_Fill(0, 0, 0);// R G B
  
  GFX_HLine(0, 4, 7, 255, 255, 255);
  GFX_HLine(0, 3, 7, 255, 255, 255);
  /*
  GFX_VLine(0, 4, 3, 255, 255, 255);
  GFX_VLine(1, 4, 3, 255, 255, 255);
  GFX_VLine(2, 4, 3, 255, 255, 255);
  GFX_VLine(3, 4, 3, 255, 255, 255);
  GFX_VLine(4, 4, 3, 255, 255, 255);
  GFX_VLine(5, 4, 3, 255, 255, 255);
  GFX_VLine(6, 4, 3, 255, 255, 255);
  GFX_VLine(7, 4, 3, 255, 255, 255);
  */
  return;
}

void Symbolic_Line_Error() {
  GFX_Fill(0, 0, 0);// R G B

  GFX_VLine(0, 4, 3, 255, 255, 255);
  GFX_VLine(1, 4, 3, 255, 255, 255);

  Colorduino.SetPixel(2, 5, 255, 0, 0);
  Colorduino.SetPixel(2, 2, 255, 0, 0);

  GFX_VLine(3, 4, 3, 255, 0, 0);
  GFX_VLine(4, 4, 3, 255, 0, 0);

  Colorduino.SetPixel(5, 5, 255, 0, 0);
  Colorduino.SetPixel(5, 2, 255, 0, 0);

  GFX_VLine(6, 4, 3, 255, 255, 255);
  GFX_VLine(7, 4, 3, 255, 255, 255);

  return;
}

void Symbolic_Router() {
  GFX_Fill(0, 0, 0);// R G B
  
  Colorduino.SetPixel(1, 6, 255, 255, 255);
  Colorduino.SetPixel(1, 0, 255, 255, 255);

  Colorduino.SetPixel(2, 7, 255, 255, 255);
  Colorduino.SetPixel(2, 4, 255, 255, 255);
  Colorduino.SetPixel(2, 0, 255, 255, 255);

  Colorduino.SetPixel(3, 7, 255, 255, 255);
  Colorduino.SetPixel(3, 5, 255, 255, 255);
  GFX_VLine(3, 2, 0, 255, 255, 255);
  
  Colorduino.SetPixel(4, 7, 255, 255, 255);
  Colorduino.SetPixel(4, 5, 255, 255, 255);
  GFX_VLine(4, 2, 0, 255, 255, 255);
  
  Colorduino.SetPixel(5, 7, 255, 255, 255);
  Colorduino.SetPixel(5, 4, 255, 255, 255);
  Colorduino.SetPixel(5, 0, 255, 255, 255);
  
  Colorduino.SetPixel(6, 6, 255, 255, 255);
  Colorduino.SetPixel(6, 0, 255, 255, 255);
  
  return;
}

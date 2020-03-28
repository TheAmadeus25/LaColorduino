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
  │ GFX_Fill()  : Fill hole screen with color                                        ┃
  │ GFX_HLine() : Draw a horizontal line with color                                  ┃
  │ GFX_VLine() : Draw a vertical line with color                                    ┃
  │ GFX_Square(): Darw and fill a custom square with color                           ┃
  │                                                                                  ┃
  │                                                                                  ┃
  ├──────────────────────────┬─────────────────────────┤
  │ Version: 0.0.3 - ALPHA                    Date: 27.Mar.2019                      ┃
  ├──────────────────────────┴─────────────────────────┤
  └────────────────────────────────────────────────────┘
*/

//----------------------------------------------------------------------------
void GFX_Fill(int r, int g, int b) {
  for (short y = 0; y < 8; y++) {
    for (short x = 0; x < 8; x++) {
      Colorduino.SetPixel(x, y, r, g, b);
    }
  }
  return;
}
//----------------------------------------------------------------------------
void GFX_HLine(short x_a, short y, short x_b, int r, int g, int b) {
  for (; x_a <= x_b; x_a++) {
    Colorduino.SetPixel(x_a, y, r, g, b);
  }
  return;
}
//----------------------------------------------------------------------------
void GFX_VLine(short x, short y_a, short y_b, int r, int g, int b) {
  for (; y_a >= y_b; y_a--) {
    Colorduino.SetPixel(x, y_a, r, g, b);
  }
  return;
}
//----------------------------------------------------------------------------
void GFX_Square(short x_a, short y_a, short x_b, short y_b, int r, int g, int b) {
  for (; y_a >= y_b; y_a--) {
    GFX_HLine(x_a, y_a, x_b, r, g, b);
  }
  return;
}
//----------------------------------------------------------------------------

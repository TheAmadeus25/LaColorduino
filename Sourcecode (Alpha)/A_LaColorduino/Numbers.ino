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
  │ Number(): Draw number                                                            ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  ├──────────────────────────┬─────────────────────────┤
  │ Version: 0.0.4 - ALPHA                    Date: 21.Mar.2020                      ┃
  ├──────────────────────────┴─────────────────────────┤
  │ + Colors                                                                         ┃
  │ ~ Bugfixing                                                                      ┃
  └────────────────────────────────────────────────────┘
*/

void Number(short x, short y, bool light, int Number, String Colors) {
  int n_red;
  int n_green;
  int n_blue;
  short SetColor = StringToColorVal(Colors);
  
  if (light == false) {
    switch (SetColor) {
      case 0:   n_red = 1;  n_green = 1;  n_blue = 1; break;            // Dark White (Night-Mode)  | #010101
      case 1:   n_red = 1;  n_green = 0;  n_blue = 0; break;            // Dark Red                 | #010000
      case 2:   n_red = 1;  n_green = 1;  n_blue = 0; break;            // Dark Yellow              | #010100
      case 3:   n_red = 0;  n_green = 1;  n_blue = 0; break;            // Dark Green               | #000100
      case 4:   n_red = 0;  n_green = 1;  n_blue = 1; break;            // Dark Aqua                | #000101
      case 5:   n_red = 0;  n_green = 0;  n_blue = 1; break;            // Dark Blue                | #000001
      case 6:   n_red = 1;  n_green = 0;  n_blue = 1; break;            // Dark Purple              | #010001
      default:  n_red = 1;  n_green = 1;  n_blue = 1; break;            // Dark White as default    | #010101
    }
  } else {
    switch (SetColor) {
      case 0:  n_red = 255;  n_green = 255;  n_blue = 255; break;       // Light White (Day-Mode)   | #FFFFFF
      case 1:  n_red = 255;  n_green = 0;    n_blue = 0;   break;       // Light Red                | #FF0000
      case 2:  n_red = 255;  n_green = 255;  n_blue = 0;   break;       // Light Yellow             | #FFFF00
      case 3:  n_red = 0;    n_green = 255;  n_blue = 0;   break;       // Light Green              | #00FF00
      case 4:  n_red = 0;    n_green = 255;  n_blue = 255; break;       // Light Aqua               | #00FFFF
      case 5:  n_red = 0;    n_green = 0;    n_blue = 255; break;       // Light Blue               | #0000FF
      case 6:  n_red = 255;  n_green = 0;    n_blue = 255; break;       // Light Purple             | #FF00FF
      default: n_red = 255;  n_green = 255;  n_blue = 255; break;       // Light White as default   | #FFFFFF
    }
  }

  // x =+ Cursor_Pos;

  Number = abs(Number);

  switch (Number) {
    case 0:
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case 1:
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 6 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(0 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(1 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case 2:
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 7 - y, n_red, n_green, n_blue);
        GFX_VLine(0 + x, 5 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 7 - y, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(2 + x, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case 3:
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(0 + x, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(0 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case 4:
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case 5:
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(0 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 7 - y, n_red, n_green, n_blue);
        GFX_VLine(2 + x, 5 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case 6:
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 7 - y, n_red, n_green, n_blue);
        GFX_VLine(2 + x, 5 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case 7:
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 7 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case 8:
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case 9:
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(0 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    default:
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 6 - y, 15, 0, 0);
        Colorduino.SetPixel(0 + x, 4 - y, 15, 0, 0);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 5 - y, 15, 0, 0);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 6 - y, 15, 0, 0);
        Colorduino.SetPixel(2 + x, 4 - y, 15, 0, 0);
      }

      Spacer(x, y, 3);

      break;
  }
  return;
}

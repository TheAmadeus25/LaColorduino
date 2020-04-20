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
  │ Letter(): Draw letter                                                            ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  ├──────────────────────────┬─────────────────────────┤
  │ Version: 0.0.5 - ALPHA                    Date: 11.Apr.2020                      ┃
  ├──────────────────────────┴─────────────────────────┤
  │ + Add lower charset                                                              ┃
  │                                                                                  ┃
  │                                                                                  ┃
  └────────────────────────────────────────────────────┘
*/

short Letter(short x, short y, bool light, char Letter, String Colors) {
  int n_red;
  int n_green;
  int n_blue;
  short Oversize = 0;                                                         // For oversized letters like 'W', 'M', 'N', etc.
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

  //Letter = toupper(Letter);

  switch (Letter) {
    case 'A':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 6 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;
      
    case 'a':  //OVERSIZE 1
      if (Position_Check() ) {
        GFX_VLine(0 + x, 4 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(2 + x, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(2 + x, 3 - y, n_red, n_green, n_blue);
      }
      
      if (Position_Check() ) {
        GFX_VLine(3 + x, 6 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 4);

      break;  

    case 'B':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 6 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(2 + x, 4 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;
      
    case 'b':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 4 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case 'C':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 6 - y, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 6 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(2 + x, 4 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;
      
    case 'c':  //UNDERSIZED
      if (Position_Check() ) {
        GFX_VLine(0 + x, 5 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 2);

      break;

    case 'D':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 6 - y, 4 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;
      
    case 'd':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;
      

    case 'E':
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
        Colorduino.SetPixel(2 + x, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;
      
   case 'e':  // OVERSIZED 1
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(2 + x, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(2 + x, 3 - y, n_red, n_green, n_blue);
      }
      
      if (Position_Check() ) {
        Colorduino.SetPixel(3 + x, 6 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 4);

      break;

    case 'F':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 7 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;
      
    case 'f':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(1 + x, 6 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(2 + x, 5 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case 'G':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 6 - y, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 7 - y, n_red, n_green, n_blue);
        GFX_VLine(2 + x, 5 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;
      
    case 'g':  //OVERSIZED 1
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 6 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }
      
      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(2 + x, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(2 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(3 + x, 7 - y, 4 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 4);

      break;

    case 'H':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;
      
    case 'h':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 5 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case 'I':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(0 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(1 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(2 + x, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;
      
    case 'i':  //UNDERSIZED
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 7 - y, n_red, n_green, n_blue);
        GFX_VLine(0 + x, 5 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 1);

      break;

    case 'J':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(0 + x, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 7 - y, 4 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;
      
    case 'j':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 6 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(0 + x, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(1 + x, 7 - y, 6 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 6 - y, 4 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case 'K':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 7 - y, 6 - y, n_red, n_green, n_blue);
        GFX_VLine(2 + x, 4 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case 'k':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(2 + x, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case 'L':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;
      
    case 'l':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 7 - y, n_red, n_green, n_blue);
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

    case 'M':  // OVERSIZED 2
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 6 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(3 + x, 6 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(4 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 5);
      //#Oversize++;
      //#Oversize++;
      break;
    
    case 'm':  // OVERSIZED 2
      if (Position_Check() ) {
        GFX_VLine(0 + x, 5 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 5 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(3 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(4 + x, 4 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 5);
      //#Oversize++;
      //#Oversize++;
      break;
    
    case 'N':  // OVERSIZED 1
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 6 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(3 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 4);
      //#Oversize++;
      break;
      
    case 'n':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 5 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 4 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);
      //#Oversize++;
      break;

    case 'O':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 6 - y, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 6 - y, 4 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;
      
    case 'o':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 5 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 5 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case 'P':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 6 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;
    
    case 'p':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 6 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 6 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 5 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case 'Q':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 6 - y, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 6 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;
      
    case 'q':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 6 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 6 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case 'R':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 6 - y, n_red, n_green, n_blue);
        GFX_VLine(2 + x, 4 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;
      
    /*case 'r':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 4 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 5 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;*/

    case 'S':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 6 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(0 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(2 + x, 4 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;
      
    /*case 's':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(1 + x, 5 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 4 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;*/

    case 'T':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 7 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(1 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 7 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;
      
    /*case 't':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 6 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(1 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 6 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;*/

    case 'U':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;
      
    case 'u':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 5 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 5 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case 'V':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 7 - y, 5 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;
      
    /*case 'v':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 5 - y, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 5 - y, 4 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;*/

    case 'W':  // OVERSIZED 3
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(3 + x, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(4 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(5 + x, 7 - y, 3 - y, 0, 0, 0);
      }

      Spacer(x, y, 6);
      //#Oversize++;
      //#Oversize++;
      break;
      
    case 'w':  // OVERSIZED 2
      if (Position_Check() ) {
        GFX_VLine(0 + x, 5 - y, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 5 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(3 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(4 + x, 5 - y, 4 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 5);
      //#Oversize++;
      //#Oversize++;
      break;

    case 'X':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 6 - y, n_red, n_green, n_blue);
        GFX_VLine(0 + x, 4 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 7 - y, 6 - y, n_red, n_green, n_blue);
        GFX_VLine(2 + x, 4 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;
      
    /*case 'x':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(0 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(2 + x, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;*/

    case 'Y':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 6 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(1 + x, 5 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 7 - y, 6 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;
      
    /*case 'y':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(1 + x, 4 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 5 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;*/

    case 'Z':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 7 - y, n_red, n_green, n_blue);
        GFX_VLine(0 + x, 4 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }
      if (Position_Check() ) {
        GFX_VLine(2 + x, 7 - y, 6 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(2 + x, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;
      
    /*case 'z':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(1 + x, 5 - y, 3 - y, n_red, n_green, n_blue);
      }
      
      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;*/

    case ':':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 6 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(0 + x, 4 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 1);

      break;

    case ';':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 6 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 4 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 2);

      break;

    case '+':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(1 + x, 6 - y, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 5 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case '-':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 5 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case '*':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 5 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 1);

      break;

    case '.':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 3 - y, 0, 0, 0);
      }

      //Spacer(x, y);


      break;

    case ',':
      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 4 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case '_':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case '#':  // OVERSIZED 2
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 6 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(0 + x, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(1 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 6 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(2 + x, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(3 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(4 + x, 6 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(4 + x, 4 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 5);
      //#Oversize++;
      //#Oversize++;
      break;

    case '|':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 6 - y, n_red, n_green, n_blue);
        GFX_VLine(0 + x, 4 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 1);

      break;

    case char(176):  // '°'
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 6 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 6 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case char(181):  // 'µ'
      if (Position_Check() ) {
        GFX_VLine(0 + x, 6 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(2 + x, 6 - y, 4 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case '/':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 6 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case char(92):  // '\'
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 6 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 4 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case '!':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(0 + x, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 1);

      break;

    case '%':  // OVERSIZED 2
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 6 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(0 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(1 + x, 7 - y, 6 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(3 + x, 6 - y, n_red, n_green, n_blue);
        GFX_VLine(3 + x, 4 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(4 + x, 7 - y, n_red, n_green, n_blue);
        GFX_VLine(4 + x, 4 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 5);
      //#Oversize++;
      //##Oversize++;
      break;

    case '(':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 6 - y, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 2);

      break;

    case ')':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(0 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(1 + x, 6 - y, 4 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 2);

      break;

    case '<':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 6 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 4 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 2);

      break;

    case '>':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 6 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(0 + x, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 2);

      break;

    case '=':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 6 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(0 + x, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 6 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 6 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(2 + x, 4 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case '?':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 7 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 6 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case '@':  // OVERSIZED 2
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
        Colorduino.SetPixel(2 + x, 7 - y, n_red, n_green, n_blue);
        GFX_VLine(2 + x, 5 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(3 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(3 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(4 + x, 6 - y, 4 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 5);
      //#Oversize++;
      //#Oversize++;
      break;

    case '[':
      if (Position_Check() ) {
        GFX_VLine(0 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 2);

      break;

    case ']':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(0 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(1 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 2);

      break;

    case '{':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(1 + x, 7 - y, 6 - y, n_red, n_green, n_blue);
        GFX_VLine(1 + x, 4 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(2 + x, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case '}':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(0 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(1 + x, 7 - y, 6 - y, n_red, n_green, n_blue);
        GFX_VLine(1 + x, 4 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 5 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case '^':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 6 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 6 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 3);

      break;

    case '`':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 7 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 6 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 2);

      break;

    case '~':  // OVERSIZED 2
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 6 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(3 + x, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(4 + x, 5 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y, 5);
      //#Oversize++;
      //#Oversize++;
      break;

    case ' ':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 3 - y, 0, 0, 0);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 3 - y, 0, 0, 0);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 3 - y, 0, 0, 0);
      }

      //if (Position_Check() ) {
      //  Colorduino.SetPixel(3 + x, 3 - y, 0, 0, 0);
      //}

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
  return Oversize;
}

/*
  ß 223
  ´ 180
  `  96
  '  39
  &  38
  $  36
  § 167
  "  34
  ² 178
  ³ 179
  Ä 196
  Ö 214
  Ü 220
  É 201
*/

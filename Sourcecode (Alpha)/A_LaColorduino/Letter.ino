short Letter(short x, short y, bool light, char Letter) {
  int n_red      = 1;
  int n_green    = 1;
  int n_blue     = 1;
  short Oversize = 0;

  if (light == true) {
    n_red   = 255;
    n_green = 255;
    n_blue  = 255;
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

      Spacer(x, y);

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

      Spacer(x, y);

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

      Spacer(x, y);

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

      Spacer(x, y);

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

      Spacer(x, y);

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

      Spacer(x, y);

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

      Spacer(x, y);

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

      Spacer(x, y);

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

      Spacer(x, y);

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

      Spacer(x, y);

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

      Spacer(x, y);

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

      Spacer(x, y);

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

      Spacer(x, y);
      Oversize++;
      Oversize++;
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

      Spacer(x, y);
      Oversize++;
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

      Spacer(x, y);

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

      Spacer(x, y);

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

      Spacer(x, y);

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

      Spacer(x, y);

      break;

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

      Spacer(x, y);

      break;

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

      Spacer(x, y);

      break;

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

      Spacer(x, y);

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

      Spacer(x, y);

      break;

    case 'W':  // OVERSIZED 2
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

      Spacer(x, y);
      Oversize++;
      Oversize++;
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

      Spacer(x, y);

      break;

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

      Spacer(x, y);

      break;

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

      Spacer(x, y);

      break;

    case ':':
      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 6 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 4 - y, n_red, n_green, n_blue);
      }

      break;

    case ';':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 6 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 4 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y);

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

      Spacer(x, y);

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

      Spacer(x, y);

      break;

    case '*':
      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y);

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

      Spacer(x, y);

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

      Spacer(x, y);

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

      Spacer(x, y);
      Oversize++;
      Oversize++;
      break;

    case '|':
      if (Position_Check() ) {
        GFX_VLine(1 + x, 7 - y, 6 - y, n_red, n_green, n_blue);
        GFX_VLine(1 + x, 4 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y);

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

      Spacer(x, y);

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

      Spacer(x, y);

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

      Spacer(x, y);

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

      Spacer(x, y);

      break;

    case '!':
      if (Position_Check() ) {
        GFX_VLine(1 + x, 7 - y, 5 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(1 + x, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y);

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

      Spacer(x, y);
      Oversize++;
      Oversize++;
      break;

    case '(':
      if (Position_Check() ) {
        GFX_VLine(1 + x, 6 - y, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(2 + x, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y);

      break;

    case ')':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(0 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(1 + x, 6 - y, 4 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y);

      break;

    case '<':
      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 6 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(2 + x, 4 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y);

      break;

    case '>':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 6 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(0 + x, 4 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 5 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y);

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

      Spacer(x, y);

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

      Spacer(x, y);

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

      Spacer(x, y);
      Oversize++;
      Oversize++;
      break;

    case '[':
      if (Position_Check() ) {
        GFX_VLine(1 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(2 + x, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y);

      break;

    case ']':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 7 - y, n_red, n_green, n_blue);
        Colorduino.SetPixel(0 + x, 3 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        GFX_VLine(1 + x, 7 - y, 3 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y);

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

      Spacer(x, y);

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

      Spacer(x, y);

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

      Spacer(x, y);

      break;

    case '`':
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 7 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 6 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y);

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
        Colorduino.SetPixel(4 + x, 5 - y, n_red, n_green, n_blue);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(3 + x, 4 - y, n_red, n_green, n_blue);
      }

      Spacer(x, y);
      Oversize++;
      Oversize++;
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

      Spacer(x, y);

      break;

    default:
      if (Position_Check() ) {
        Colorduino.SetPixel(0 + x, 7 - y, 0, 0, 0);
        Colorduino.SetPixel(0 + x, 6 - y, 15, 0, 0);
        Colorduino.SetPixel(0 + x, 5 - y, 0, 0, 0);
        Colorduino.SetPixel(0 + x, 4 - y, 15, 0, 0);
        Colorduino.SetPixel(0 + x, 3 - y, 0, 0, 0);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(1 + x, 7 - y, 0, 0, 0);
        Colorduino.SetPixel(1 + x, 6 - y, 0, 0, 0);
        Colorduino.SetPixel(1 + x, 5 - y, 15, 0, 0);
        Colorduino.SetPixel(1 + x, 4 - y, 0, 0, 0);
      }

      if (Position_Check() ) {
        Colorduino.SetPixel(2 + x, 7 - y, 0, 0, 0);
        Colorduino.SetPixel(2 + x, 6 - y, 15, 0, 0);
        Colorduino.SetPixel(2 + x, 5 - y, 0, 0, 0);
        Colorduino.SetPixel(2 + x, 4 - y, 15, 0, 0);
      }

      Spacer(x, y);

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


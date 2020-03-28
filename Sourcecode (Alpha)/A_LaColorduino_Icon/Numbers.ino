void Number(short x, short y, bool light, int Number) {
  int n_red   = 1;
  int n_green = 1;
  int n_blue  = 1;

  if (light == true) {
    n_red   = 255;
    n_green = 255;
    n_blue  = 255;
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
      
      Spacer(x, y);
      
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
      
      Spacer(x, y);
      
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
      
      Spacer(x, y);
      
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
      
      Spacer(x, y);

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
      
      Spacer(x, y);
      
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
      
      Spacer(x, y);
      
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
      
      Spacer(x, y);
      
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
      
      Spacer(x, y);
      
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
      
      Spacer(x, y);
      
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
      
      Spacer(x, y);
      
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
      
      Spacer(x, y);
      
      break;

  }
  return;
}

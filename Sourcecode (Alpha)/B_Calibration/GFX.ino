void GFX_Fill(int r, int g, int b) {
  for (short y = 0; y < 8; y++) {
    for (short x = 0; x < 8; x++) {
      Colorduino.SetPixel(x, y, r, g, b);
    }
  }
  return;
}

void GFX_HLine(short x_a, short y, short x_b, int r, int g, int b) {
  for (; x_a <= x_b; x_a++) {
    Colorduino.SetPixel(x_a, y, r, g, b);
  }
  return;
}

void GFX_VLine(short x, short y_a, short y_b, int r, int g, int b) {
  for (; y_a >= y_b; y_a--) {
    Colorduino.SetPixel(x, y_a, r, g, b);
  }
  return;
}

void GFX_Square(short x_a, short y_a, short x_b, short y_b, int r, int g, int b) {
  for (; y_a >= y_b; y_a--) {
    GFX_HLine(x_a, y_a, x_b, r, g, b);
  }
  return;
}

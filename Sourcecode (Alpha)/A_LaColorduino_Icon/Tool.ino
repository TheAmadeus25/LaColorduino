//----------------------------------------------------------------------------
void Clear_Number (short x, short y, bool light) {
  GFX_VLine(0 + x, 7 - y, 3 - y, 0, 0, 0);
  GFX_VLine(1 + x, 7 - y, 3 - y, 0, 0, 0);
  GFX_VLine(2 + x, 7 - y, 3 - y, 0, 0, 0);
  return;
}
//----------------------------------------------------------------------------
void Spacer(short x, short y) {
  if (Position_Check() ) {
    GFX_VLine(3 + x, 7 - y, 3 - y, 0, 0, 0);
  }
}
//----------------------------------------------------------------------------
bool Position_Check() {
  bool Checked;

  if (Cursor_Pos >= 0 && Cursor_Pos <= 7) {
    Checked = true;
  } else {
    Checked = false;
  }
  Cursor_Pos++;
  //Cursor_Pos++;
  return Checked;
}
//----------------------------------------------------------------------------
void String_toArray(String Input) {
  Input.toUpperCase();
  Input.toCharArray(Temp_Array, 64);
}
//----------------------------------------------------------------------------
void Print_Line(short x, short y, bool light) {

  return;
}
//----------------------------------------------------------------------------
short Print_Array(short x, short y, bool light, char Symbol) {
  short Oversize = 0;

  if ( Symbol >= 48 && Symbol <= 57 ) {
    Number(x, y, light, (int)Symbol - 48);
  } else {
    Letter(x, y, light, Symbol);
  }

  return Oversize;
}
//----------------------------------------------------------------------------
short IsZero(int Value, int Position) {

}
//----------------------------------------------------------------------------
void Print_Integer(short x, short y, bool light, long Value) {
  short Print_Position = 0;
  short First_Zero = 0;
  int   Digit[9];
  long  Temp_Value = Value;

  Digit[0] = (Value / 10000000) % 10;
  Digit[1] = (Value / 1000000) % 10;
  Digit[2] = (Value / 100000) % 10;
  Digit[3] = (Value / 10000) % 10;
  Digit[4] = (Value / 1000) % 10;
  Digit[5] = (Value / 100) % 10;
  Digit[6] = (Value / 10) % 10;
  Digit[7] =  Value % 10;

  while (Print_Position < 7 && Digit[Print_Position] == 0) {
    Letter(Cursor_Pos + 1, y, light, ' ');
    Print_Position++;
  }

  if (Value < 0) {
    Cursor_Pos = Cursor_Pos - 4;
    Letter(Cursor_Pos + 1, y, light, '-');
  }

  while (Print_Position <= 7) {
    Number(Cursor_Pos + 1, y, light, Digit[Print_Position]);
    Print_Position++;
  }

  Colorduino.FlipPage();
}
//----------------------------------------------------------------------------
void Print_Float(short x, short y, bool light, float Value) {
  // https://linustechtips.com/main/topic/909558-how-to-split-a-floating-number-into-4-individual-digits-arduino/
  /*short Print_Position = 0;
  short First_Zero = 0;
  int   Digit[9];
  long  Temp_Value = Value;
  
  //Digit[0] = ((int)Value / 10000000) % 10;
  //Digit[1] = ((int)Value / 1000000) % 10;
  Digit[0] = ((int)Value / 100000) % 10;
  Digit[1] = ((int)Value / 10000) % 10;
  Digit[2] = ((int)Value / 1000) % 10;
  Digit[3] = ((int)Value / 100) % 10;
  Digit[4] = ((int)Value / 10) % 10;
  Digit[5] = ((int)Value) % 10;
  Digit[6] = ((int)Value * 10) % 10;
  
  while (Print_Position <= 5) {
    Number(Cursor_Pos + 1, y, light, Digit[Print_Position]);
    Print_Position++;
  }
  
  Letter(Cursor_Pos + 1 , y, light, '.');
  Number(Cursor_Pos + 1, y, light, Digit[6]);
  
  
  
  //Value -= Temp_Value;
  //Digit[7] = Value * 10;

  // 765432.1
  
  Colorduino.FlipPage();*/
  
  short Print_Position = 0;
  short First_Zero = 0;
  int   Digit[9];
  long  Temp_Value = Value * 10;

  //Digit[0] = ((int)Value / 10000000) % 10;
  //Digit[0] = ((int)Value / 1000000) % 10;
  Digit[0] = ((int)Value / 100000) % 10;
  Digit[1] = ((int)Value / 10000) % 10;
  Digit[2] = ((int)Value / 1000) % 10;
  Digit[3] = ((int)Value / 100) % 10;
  Digit[4] = ((int)Value / 10) % 10;
  Digit[5] =  (int)Value % 10;
  //Digit[7] = ((int)Value * 10) % 10;
  Digit[6] = Temp_Value % 10;
  //Serial.println(Digit[7]);

  while (Print_Position < 7 && Digit[Print_Position] == 0) {
    Letter(Cursor_Pos + 1, y, light, ' ');
    Print_Position++;
  }
  
  if (Value < 0) {
    Cursor_Pos = Cursor_Pos - 4;
    Letter(Cursor_Pos + 1, y, light, '-');
  }

  while (Print_Position <= 5) {
    Number(Cursor_Pos + 1, y, light, Digit[Print_Position]);
    Print_Position++;
  }
  
  Letter(Cursor_Pos, y, light, '.');
  Number(Cursor_Pos + 1, y, light, Digit[6]);
  
  Colorduino.FlipPage();  
  
  return;
}
//----------------------------------------------------------------------------

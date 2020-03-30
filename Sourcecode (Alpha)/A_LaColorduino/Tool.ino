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
  │ Clear_Number()                                                                   ┃
  │ Spacer()                                                                         ┃
  │ Position_Check()                                                                 ┃
  │ String_toArray()                                                                 ┃
  │ Print_Line()                                                                     ┃
  │ Print_Array()                                                                    ┃
  │ Print_Integer()                                                                  ┃
  │ Print_Float()                                                                    ┃
  │ Print_Temperatur()                                                               ┃
  │ Print_Pressure()                                                                 ┃
  │ Print_OTA()                                                                      ┃
  ├──────────────────────────┬─────────────────────────┤
  │ Version: 0.0.5 - ALPHA                    Date: 26.Dec.2019                      ┃
  ├──────────────────────────┴─────────────────────────┤
  │ + Print_Percent                                                                  ┃
  │ + Print_Clock                                                                    ┃
  │ + Bugfix Clock                                                                   ┃
  │ + Print_Stats_3_Bar  // 3 Value + (progress)bar // Optimized for CSGO            ┃
  │ + Print_Stats_3      // without (progress)bar   // Will be optimized             ┃
  │ + Print_Progressbar                                                              ┃
  │ - IsZero                                                                         ┃
  │ + Update for Color                                                               ┃
  │ + StringToColorVal() for Letter and Numbers Switch-Case Statement                ┃
  └────────────────────────────────────────────────────┘
*/

//----------------------------------------------------------------------------
void Clear_Number (short x, short y, bool light) {
  GFX_VLine(0 + x, 7 - y, 3 - y, 0, 0, 0);
  GFX_VLine(1 + x, 7 - y, 3 - y, 0, 0, 0);
  GFX_VLine(2 + x, 7 - y, 3 - y, 0, 0, 0);

  return;
}
//----------------------------------------------------------------------------
void Spacer(short x, short y, short OffsetSize) {
  if (Position_Check() ) {
    GFX_VLine(OffsetSize + x, 7 - y, OffsetSize - y, 0, 0, 0);
  }

  return;
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

  return Checked;
}
//----------------------------------------------------------------------------
void String_toArray(String Input) {
  Input.toUpperCase();
  Input.toCharArray(Temp_Array, 64);

  return;
}
//----------------------------------------------------------------------------
void Print_Line(short x, short y, bool light) {

  return;
}
//----------------------------------------------------------------------------
short Print_Array(short x, short y, bool light, char Symbol, String Colors) {
  short Oversize = 0;

  if ( Symbol >= 48 && Symbol <= 57 ) {
    Number(x, y, light, (int)Symbol - 48, Colors);
  } else {
    Letter(x, y, light, Symbol, Colors);
  }

  return Oversize;
}
//----------------------------------------------------------------------------
void Print_Delimiter(short x, short y, bool light, long Value, String Colors) {
  switch (Value) {
    case 0:   Letter(Cursor_Pos, y, light, ' ', Colors);  break;
    case 1:   Letter(Cursor_Pos, y, light, '/', Colors);  break;
    case 2:   Letter(Cursor_Pos, y, light, '.', Colors);  break;
    case 3:   Letter(Cursor_Pos, y, light, '|', Colors);  break;
    case 4:   Letter(Cursor_Pos, y, light, ':', Colors);  break;
    case 5:   Letter(Cursor_Pos, y, light, '-', Colors);  break;
    case 6:   Letter(Cursor_Pos, y, light, '*', Colors);  break;
    default:  break;
  }

  return;
}
//----------------------------------------------------------------------------
void Print_Progressbar(String Colors, long Low_Val, long High_Val, long Cur_Val, bool light) {
  int n_red;
  int n_green;
  int n_blue;

  unsigned long Value = map( Cur_Val, Low_Val, High_Val, 0, 31 );
  int Cur_Pos = True_Pos;                                               // True_Pos = -((Unit_Pos - 1) * 8); // 1=0 | 2=-8 | 3=-16 | 4=-24

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

  for (int i = 0; i <= 31; i++) {
    if (Cur_Pos >= 0 && Cur_Pos <= 7 && i <= Value && Value != 0) {
      Colorduino.SetPixel(Cur_Pos, 0, n_red, n_green, n_blue);
    }
    Cur_Pos++;
  }

  return;
}
//----------------------------------------------------------------------------
short StringToColorVal(String Value) {
  if (Value == "White")  return 0;
  if (Value == "Red")    return 1;
  if (Value == "Yellow") return 2;
  if (Value == "Green")  return 3;
  if (Value == "Aqua")   return 4;
  if (Value == "Blue")   return 5;
  if (Value == "Purple") return 6;

  return 0;
}
//----------------------------------------------------------------------------
void Print_Integer(short x, short y, bool light, long Value, String Colors) {
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
    Letter(Cursor_Pos + 1, y, light, ' ', Colors);
    Print_Position++;
  }

  if (Value < 0) {
    Cursor_Pos = Cursor_Pos - 4;
    Letter(Cursor_Pos + 1, y, light, '-', Colors);
  }

  while (Print_Position <= 7) {
    Number(Cursor_Pos + 1, y, light, Digit[Print_Position], Colors);
    Print_Position++;
  }

  Colorduino.FlipPage();

  return;
}
//----------------------------------------------------------------------------
void Print_Float(short x, short y, bool light, float Value, String Colors) {
  // https://linustechtips.com/main/topic/909558-how-to-split-a-floating-number-into-4-individual-digits-arduino/

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

  Spacer(x, y, 0);

  while (Print_Position < 7 && Digit[Print_Position] == 0) {
    Letter(Cursor_Pos + 1, y, light, ' ', Colors);
    Print_Position++;
  }

  if (Value < 0) {
    Cursor_Pos = Cursor_Pos - 4;
    Letter(Cursor_Pos + 1, y, light, '-', Colors);
  }

  while (Print_Position <= 5) {
    Number(Cursor_Pos + 1, y, light, Digit[Print_Position], Colors);
    Print_Position++;
  }

  Letter(Cursor_Pos, y, light, '.', Colors);
  Number(Cursor_Pos + 1, y, light, Digit[6], Colors);

  Colorduino.FlipPage();

  return;
}
//----------------------------------------------------------------------------
void Print_Speed(short x, short y, bool light, float Value, String Colors, short Unit) {
  // https://linustechtips.com/main/topic/909558-how-to-split-a-floating-number-into-4-individual-digits-arduino/

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

  Spacer(x, y, 0);

  while (Print_Position < 7 && Digit[Print_Position] == 0) {
    Letter(Cursor_Pos + 1, y, light, ' ', Colors);
    Print_Position++;
  }

  while (Print_Position <= 5) {
    Number(Cursor_Pos + 1, y, light, Digit[Print_Position], Colors);
    Print_Position++;
  }

  Letter(Cursor_Pos, y, light, '.', Colors);
  Number(Cursor_Pos + 1, y, light, Digit[6], Colors);

  switch (Unit) {
    case 0:  Letter(Cursor_Pos, y, light, 'k', Colors);
      Letter(Cursor_Pos, y, light, 'm', Colors);
      Letter(Cursor_Pos, y, light, '/', Colors);
      Letter(Cursor_Pos, y, light, 'h', Colors);
      break;
    case 1:  Letter(Cursor_Pos, y, light, 'm', Colors);
      Letter(Cursor_Pos, y, light, '/', Colors);
      Letter(Cursor_Pos, y, light, 's', Colors);
      break;
    case 2:  Letter(Cursor_Pos, y, light, 'm', Colors);
      Letter(Cursor_Pos, y, light, '/', Colors);
      Letter(Cursor_Pos, y, light, 'h', Colors);
      break;
    case 3:  Letter(Cursor_Pos, y, light, 'f', Colors);
      Letter(Cursor_Pos, y, light, 't', Colors);
      Letter(Cursor_Pos, y, light, '/', Colors);
      Letter(Cursor_Pos, y, light, 's', Colors);
      break;
  }

  Colorduino.FlipPage();

  return;
}
//----------------------------------------------------------------------------
void Print_Temperatur(short x, short y, bool light, float Value, short Unit, String Colors) {
  // https://linustechtips.com/main/topic/909558-how-to-split-a-floating-number-into-4-individual-digits-arduino/

  short Print_Position = 3;
  short First_Zero = 0;
  int   Digit[9];
  long  Temp_Value = Value * 10;
  //char  Unit_Temp[2];

  //Unit.toCharArray(Unit_Temp, 0);

  //Digit[0] = ((int)Value / 100000) % 10;
  //Digit[1] = ((int)Value / 10000) % 10;
  //Digit[2] = ((int)Value / 1000) % 10;
  Digit[3] = ((int)Value / 100) % 10;
  Digit[4] = ((int)Value / 10) % 10;
  Digit[5] =  (int)Value % 10;
  //Digit[7] = ((int)Value * 10) % 10;
  Digit[6] = Temp_Value % 10;
  //Serial.println(Digit[7]);

  Spacer(x, y, 0);
  Spacer(x, y, 1);
  Spacer(x, y, 2);
  Letter(Cursor_Pos, y, light, ' ', Colors);


  while (Print_Position < 5 /*7*/ && Digit[Print_Position] == 0) {
    Letter(Cursor_Pos, y, light, ' ', Colors);
    Print_Position++;
  }

  if (Value < 0) {
    Cursor_Pos = Cursor_Pos - 4;
    Letter(Cursor_Pos, y, light, '-', Colors);
  }

  while (Print_Position <= 5) {
    Number(Cursor_Pos, y, light, Digit[Print_Position], Colors);
    Print_Position++;
  }

  Letter(Cursor_Pos, y, light, '.', Colors);
  //Cursor_Pos++; //---
  Number(Cursor_Pos, y, light, Digit[6], Colors);

  switch (Unit) {
    case 5:
      Letter(Cursor_Pos, y, light, '°', Colors);
      Letter(Cursor_Pos, y, light, 'C', Colors);
      break;

    case 6:
      Letter(Cursor_Pos, y, light, '°', Colors);
      Letter(Cursor_Pos, y, light, 'F', Colors);
      break;

    case 7:
      Letter(Cursor_Pos, y, light, ' ', Colors);
      Letter(Cursor_Pos, y, light, 'K', Colors);
      break;
  }

  //Letter(Cursor_Pos, y, light, '°', Colors);
  //Letter(Cursor_Pos, y, light, Unit, Colors);

  Colorduino.FlipPage();

  return;
}
//----------------------------------------------------------------------------
void Print_Pressure(short x, short y, bool light, float Value, short Unit, String Colors) {
  // https://linustechtips.com/main/topic/909558-how-to-split-a-floating-number-into-4-individual-digits-arduino/

  short Print_Position = 3;
  short First_Zero = 0;
  int   Digit[9];
  long  Temp_Value = Value * 10;
  //char  Unit_Temp[2];

  //Unit.toCharArray(Unit_Temp, 0);

  //Digit[0] = ((int)Value / 100000) % 10;
  //Digit[1] = ((int)Value / 10000) % 10;
  //Digit[2] = ((int)Value / 1000) % 10;
  Digit[3] = ((int)Value / 100) % 10;
  Digit[4] = ((int)Value / 10) % 10;
  Digit[5] =  (int)Value % 10;
  //Digit[7] = ((int)Value * 10) % 10;
  Digit[6] = Temp_Value % 10;
  //Serial.println(Digit[7]);

  Letter(Cursor_Pos, y, light, ' ', Colors);
  //#Spacer(x, y);
  //#Spacer(x, y);

  while (Print_Position < 5 /*7*/ && Digit[Print_Position] == 0) {
    Letter(Cursor_Pos, y, light, ' ', Colors);
    Print_Position++;
  }

  if (Value < 0) {
    Cursor_Pos = Cursor_Pos - 4;
    Letter(Cursor_Pos, y, light, '-', Colors);
  }

  while (Print_Position <= 5) {
    Number(Cursor_Pos, y, light, Digit[Print_Position], Colors);
    Print_Position++;
  }

  Letter(Cursor_Pos, y, light, '.', Colors);
  //Cursor_Pos++; //---
  Number(Cursor_Pos, y, light, Digit[6], Colors);

  //Letter(Cursor_Pos, y, light, 'h');
  Letter(Cursor_Pos, y, light, 'H', Colors);
  Letter(Cursor_Pos, y, light, 'P', Colors);

  //Letter(Cursor_Pos, y, light, '°', Colors);
  //Letter(Cursor_Pos, y, light, Unit, Colors);

  Colorduino.FlipPage();

  return;
}
//----------------------------------------------------------------------------
void Print_OTA(short x, short y, bool light, float Value, char Unit, String Colors) {
  // https://linustechtips.com/main/topic/909558-how-to-split-a-floating-number-into-4-individual-digits-arduino/

  short Print_Position = 3;
  short First_Zero = 0;
  int   Digit[9];
  long  Temp_Value = Value * 10;

  //Digit[0] = ((int)Value / 100000) % 10;
  //Digit[1] = ((int)Value / 10000) % 10;
  //Digit[2] = ((int)Value / 1000) % 10;
  Digit[3] = ((int)Value / 100) % 10;
  Digit[4] = ((int)Value / 10) % 10;
  Digit[5] =  (int)Value % 10;
  //Digit[7] = ((int)Value * 10) % 10;
  Digit[6] = Temp_Value % 10;
  //Serial.println(Digit[7]);

  Spacer(x, y, 0);
  Letter(Cursor_Pos, y, light, ' ', Colors);
  Letter(Cursor_Pos, y, light, ' ', Colors);


  while (Print_Position < 5 /*7*/ && Digit[Print_Position] == 0) {
    Letter(Cursor_Pos, y, light, ' ', Colors);
    Print_Position++;
  }

  if (Value < 0) {
    Cursor_Pos = Cursor_Pos - 4;
    Letter(Cursor_Pos, y, light, '-', Colors);
  }

  while (Print_Position <= 5) {
    Number(Cursor_Pos, y, light, Digit[Print_Position], Colors);
    Print_Position++;
  }

  Letter(Cursor_Pos, y, light, '.', Colors);
  //Cursor_Pos++; //---
  Number(Cursor_Pos, y, light, Digit[6], Colors);
  //#Letter(Cursor_Pos, y, light, ' ', Colors);
  Letter(Cursor_Pos, y, light, Unit, Colors);
  
  Print_Progressbar(Colors, 0, 100, Value, light);

  Colorduino.FlipPage();

  return;
}
//----------------------------------------------------------------------------
void Print_Percent(short x, short y, bool light, long Value, String Colors) {
  short Print_Position = 0;  //PRINT INT!
  short First_Zero = 0;
  int   Digit[9];
  long  Temp_Value = Value;

  Digit[0] = ((int)Value / 100) % 10;
  Digit[1] = ((int)Value / 10) % 10;
  Digit[2] =  Value % 10;

  Spacer(x, y, 0);
  Spacer(x, y, 1);
  Spacer(x, y, 2);
  Letter(Cursor_Pos, y, light, ' ', Colors);
  Letter(Cursor_Pos, y, light, ' ', Colors);
  Letter(Cursor_Pos, y, light, ' ', Colors);

  while (Print_Position < 2 && Digit[Print_Position] == 0) {  // Clear first Zero's
    Letter(Cursor_Pos, y, light, ' ', Colors);                 // Replace with SPACE
    Print_Position++;                                         // Move to next digit
  }

  if (Value < 0) {
    Cursor_Pos = Cursor_Pos - 4;
    Letter(Cursor_Pos, y, light, '-', Colors);
  }

  while (Print_Position <= 2) {
    Number(Cursor_Pos, y, light, Digit[Print_Position], Colors);
    Print_Position++;
  }

  Letter(Cursor_Pos, y, light, '%', Colors);

  Colorduino.FlipPage();

  return;
}
//----------------------------------------------------------------------------
void Print_Clock(short x, short y, bool light, short Hour, short Minute, String Colors) {
  // https://linustechtips.com/main/topic/909558-how-to-split-a-floating-number-into-4-individual-digits-arduino/

  short Print_Position = 0;
  short First_Zero = 0;
  int   Digit[9];

  Digit[0] = ((int)Hour / 10) % 10;
  Digit[1] =  (int)Hour % 10;

  Spacer(x, y, 0);                            // Offset
  Spacer(x, y, 1);                            // Offset
  Spacer(x, y, 2);                            // Offset
  Letter(Cursor_Pos, y, light, ' ', Colors);  // Offset
  Letter(Cursor_Pos, y, light, ' ', Colors);  // Offset
  Letter(Cursor_Pos, y, light, ' ', Colors);  // Offset

  while (Print_Position <= 1) {
    Number(Cursor_Pos, y, light, Digit[Print_Position], Colors);
    Print_Position++;
  }

  Letter(Cursor_Pos, y, light, ':', Colors);

  Digit[0] = ((int)Minute / 10) % 10;
  Digit[1] =  (int)Minute % 10;

  Print_Position = 0;
  while (Print_Position <= 1) {
    Number(Cursor_Pos, y, light, Digit[Print_Position], Colors);
    Print_Position++;
  }

  Colorduino.FlipPage();

  return;
}
//----------------------------------------------------------------------------
void Print_Stats_3(short x, short y, bool light, short Val_1, short Val_2, short Val_3, short Delimiter, String Colors) {
  short Digit[6];

  Digit[0] = ( Val_1 / 10 ) % 10;
  Digit[1] =   Val_1 % 10;

  Digit[2] = ( Val_2 / 10 ) % 10;
  Digit[3] =   Val_2 % 10;

  Digit[4] = ( Val_3 / 10 ) % 10;
  Digit[5] =   Val_3 % 10;

  Spacer(x, y, 0);                       // Offset

  if (Val_1 >= 10) {
    Number(Cursor_Pos, y, light, Digit[0], Colors);
    Number(Cursor_Pos, y, light, Digit[1], Colors);
  } else {
    Letter(Cursor_Pos, y, light, ' ', Colors);
    Number(Cursor_Pos, y, light, Digit[1], Colors);
  }

  Print_Delimiter(x, y, light, Delimiter, Colors);

  if (Val_2 >= 10) {
    Number(Cursor_Pos, y, light, Digit[2], Colors);
    Number(Cursor_Pos, y, light, Digit[3], Colors);
  } else {
    Letter(Cursor_Pos, y, light, ' ', Colors);
    Number(Cursor_Pos, y, light, Digit[3], Colors);
  }

  Print_Delimiter(x, y, light, Delimiter, Colors);

  if (Val_3 >= 10) {
    Number(Cursor_Pos, y, light, Digit[4], Colors);
    Number(Cursor_Pos, y, light, Digit[5], Colors);
  } else {
    Letter(Cursor_Pos, y, light, ' ', Colors);
    Number(Cursor_Pos, y, light, Digit[5], Colors);
  }

  Colorduino.FlipPage();

  return;
}
//----------------------------------------------------------------------------
void Print_Stats_3_Bar(short x, short y, bool light, short Val_1, short Val_2, short Val_3, short Val_4, short Low_Val, short High_Val, short Delimiter, String Colors) {
  short Digit[6];

  Digit[0] = ( Val_1 / 10 ) % 10;
  Digit[1] =   Val_1 % 10;

  Digit[2] = ( Val_2 / 10 ) % 10;
  Digit[3] =   Val_2 % 10;

  Digit[4] = ( Val_3 / 10 ) % 10;
  Digit[5] =   Val_3 % 10;

  Spacer(x, y, 0);                       // Offset

  if (Val_1 >= 10) {
    Number(Cursor_Pos, y, light, Digit[0], Colors);
    Number(Cursor_Pos, y, light, Digit[1], Colors);
  } else {
    Letter(Cursor_Pos, y, light, ' ', Colors);
    Number(Cursor_Pos, y, light, Digit[1], Colors);
  }

  Print_Delimiter(x, y, light, Delimiter, Colors);

  if (Val_2 >= 10) {
    Number(Cursor_Pos, y, light, Digit[2], Colors);
    Number(Cursor_Pos, y, light, Digit[3], Colors);
  } else {
    Letter(Cursor_Pos, y, light, ' ', Colors);
    Number(Cursor_Pos, y, light, Digit[3], Colors);
  }

  Print_Delimiter(x, y, light, Delimiter, Colors);

  if (Val_3 >= 10) {
    Number(Cursor_Pos, y, light, Digit[4], Colors);
    Number(Cursor_Pos, y, light, Digit[5], Colors);
  } else {
    Letter(Cursor_Pos, y, light, ' ', Colors);
    Number(Cursor_Pos, y, light, Digit[5], Colors);
  }

  Print_Progressbar("White", Low_Val, High_Val, Val_4, light);

  Colorduino.FlipPage();

  return;
}

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
  │ InitSerial()  : Start Serial Communication                                       ┃
  │ SerialOutput(): Send Information to Colorduino                                   ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  ├──────────────────────────┬─────────────────────────┤
  │ Version: 0.0.1 - ALPHA                    Date: 27.Jan.2019                      ┃
  ├──────────────────────────┴─────────────────────────┤
  └────────────────────────────────────────────────────┘
*/

void InitSerial() {
  Serial.begin(9600);
}
//----------------------------------------------------------------------------
void SerialOutput() {

  Serial.print(Device.Mode);
  Serial.print(";");
  Serial.print(Device.Set);
  Serial.print(";");

  switch (Device.Set) {
    case 5:
      Serial.print(Device.WiFi_Skin);
      Serial.print(";");
      Serial.print("1");      //Ambientlight
      break;
      
    case 9:
      Serial.print("1"/*Updating.Enable*/);
      Serial.print(";");
      Serial.print(Updating.Device, 1);
      Serial.print(";");
      Serial.print(Updating.State);  

      Serial.print(";");
      Serial.print("1");      //Ambientlight
      break;

    case 20:
      Serial.print(Environment.Temperatur, 1);  // Ursprünglich gesetzt
      Serial.print(";");
      Serial.print("5");  //Weather.Temp_Unit
      Serial.print(";");
      Serial.print(Environment.SET_Ambientlight);
      //Serial.print(Environment.Ambientlight);
      break;
    
    case 30:
      Serial.print(Weather.Icon);
      Serial.print(";");
      Serial.print(Weather.Temperatur, 1);  // Ursprünglich gesetzt
      //Serial.print(Environment.Temperatur, 1);
      Serial.print(";");
      Serial.print(Weather.Temp_Unit);  //Weather.Temp_Unit
      Serial.print(";");
      Serial.print(Environment.SET_Ambientlight);
      //Serial.print(Environment.Ambientlight);
      break;

    case 40:
      Serial.print(YouTube.Subscriber);
      Serial.print(";");
      Serial.print(Environment.SET_Ambientlight);
      break;

    case 41:
      Serial.print(YouTube.View);
      Serial.print(";");
      Serial.print(Environment.SET_Ambientlight);
      break;

    case 42:
      Serial.print(YouTube.Comment);
      Serial.print(";");
      Serial.print(Environment.SET_Ambientlight);
      break;

    case 43:
      Serial.print(YouTube.Video);
      Serial.print(";");
      Serial.print(Environment.SET_Ambientlight);
      break;

    default:
      break;
  }


  Serial.println(";");
  Serial.print('\0');
  Setting.last_refresh = millis();

  return;
}
//----------------------------------------------------------------------------

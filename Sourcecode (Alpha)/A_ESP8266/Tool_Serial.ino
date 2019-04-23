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
  │ Version: 0.0.4 - ALPHA                    Date: 14.Apr.2019                      ┃
  ├──────────────────────────┴─────────────────────────┤
  │ + Weather.Pressure                                                               ┃
  │ + Weather.Humidity                                                               ┃
  │ + Weather.Wind_Speed                                                             ┃
  │ + Clock                                                                          ┃ 
  └────────────────────────────────────────────────────┘
*/

void InitSerial() {
  Serial.begin(9600);
}
//----------------------------------------------------------------------------
void SerialOutput() {
  digitalWrite(ESP_Led, LOW);
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

    case 10:// 10;10;12;4;1;
      Serial.print(Time.Hour);
      Serial.print(";");
      Serial.print(Time.Minute);
      Serial.print(";");
      //Serial.print(Date.Day);
      //Serial.print(";");
      Serial.print(Environment.SET_Ambientlight);
      break;

    case 20:
      Serial.print(Environment.Temperatur, 1);  // Ursprünglich gesetzt
      Serial.print(";");
      Serial.print("5");  //Weather.Temp_Unit
      Serial.print(";");
      Serial.print(Environment.SET_Ambientlight);
      //Serial.print(Environment.Ambientlight);
      break;

    case 21:
      //Serial.print(Weather.Pressure);
      Serial.print(Environment.Pressure);
      Serial.print(";");
      Serial.print(Environment.SET_Ambientlight);
      break;

    case 22:  // 22;22;123;1;
      Serial.print(Weather.Humidity);
      Serial.print(";");
      Serial.print(Environment.SET_Ambientlight);
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

    case 31:
      Serial.print(Weather.Pressure);
      Serial.print(";");
      Serial.print(Environment.SET_Ambientlight);
      break;

    case 32:
      //Serial.print(Weather.Humidity);
      Serial.print(Environment.Humidity);
      Serial.print(";");
      Serial.print(Environment.SET_Ambientlight);
      break;

    case 33:
      Serial.print(Weather.Wind_Speed);
      Serial.print(";");
      Serial.print(Environment.SET_Ambientlight);
      break;

    case 40:
      Serial.print(YouTube.Subscriber);
      //Serial.print(Date.Day);
      //Serial.print(Time.Hour);
      //Serial.print(Time.Minute);
      Serial.print(";");
      Serial.print(Environment.SET_Ambientlight);
      break;

    case 41:// 41;41;12345678;1;
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
  digitalWrite(ESP_Led, HIGH);
  return;
}
//----------------------------------------------------------------------------

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
  │ InitESP() : Configuration of the ESP8266 HW                                      ┃
  │ SetESP()  : Set Global Unit like Temperature                                     ┃
  │ SetESP()  : Configuration of Global Unit                                         ┃
  │ InitWiFi(): Configuration of WiFi                                                ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  ├──────────────────────────┬─────────────────────────┤
  │ Version: 0.0.3 - ALPHA                    Date: 01.Apr.2020                      ┃
  ├──────────────────────────┴─────────────────────────┤
  │ + Change WiFi Animation                                                          ┃
  │ + Check WiFi status                                                              ┃
  │ + Check Internet connection                                                      ┃
  │ + Algorithm for Animation and WiFi and Internet connection/status                ┃
  └────────────────────────────────────────────────────┘
*/


long rssi = 0;

void InitESP() {
  pinMode(ESP_Button, INPUT);
  pinMode(ESP_Led, OUTPUT);
  pinMode(ESP_Led2, OUTPUT);
  digitalWrite(ESP_Led, HIGH);
  digitalWrite(ESP_Led2, HIGH);

  return;
}

void SetESP() {
  switch (Setting.Global_Choice) {
    case 5:
      Setting.Global_Unit = "metric";
      Weather.Temp_Unit = 5;
      Environment.Temp_Unit = 5;
      break;

    case 6:
      Setting.Global_Unit = "imperial";
      Weather.Temp_Unit = 6;
      Environment.Temp_Unit = 6;
      break;

    case 7:
      Setting.Global_Unit = "default";
      Weather.Temp_Unit = 7;
      Environment.Temp_Unit = 7;
      break;

    default:
      break;
  }

  return;
}

void InitWiFi() {
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  Wire.begin();
  delay(100);
  WiFi.begin(ssid, password);

  Device.Mode = 0;
  Device.Set  = 0;

  delay(500);
  SerialOutput();
  delay(1000);

  /**/
  Device.Mode = 5;
  Device.Set  = 5;

  do {
    switch ( WiFi.status() ) {
      case WL_DISCONNECTED:   Device.WiFi_Code = 0;   if (Device.WiFi_Skin > 11) {
          Device.WiFi_Skin = 0;
        }    break;  // Verbindung getrennt || Verbindet
      case WL_NO_SSID_AVAIL:  Device.WiFi_Code = 1;   break;  // Router nicht gefunden
      case WL_CONNECT_FAILED: Device.WiFi_Code = 2;   break;  // Falsches Passwort oder Fehler
      case WL_CONNECTED:      Device.WiFi_Code = 4;   Device.WiFi_Skin = 2;  Device.WiFi_Connection = true;  break;  // IP Adresse erhalten vom Router
    }
    SerialOutput();
    Device.WiFi_Skin++;
    delay(200);
  } while ( Device.WiFi_Connection == false );

  delay(1000);

  HTTPClient http;
  short httpCode = 0;

  Device.WiFi_Code = 5;

  for (short Trys = 0; Trys <= 100; Trys++) {
    http.begin("http://www.google.com");
    httpCode = http.GET();
    
    SerialOutput();
    Device.WiFi_Skin++;
    
    if (Device.WiFi_Skin > 11) {
      Device.WiFi_Skin = 0;
    }
    
    if( httpCode != 0 ) {
      break;
    }
    
    http.end();
    delay(200);
  }

  if (httpCode < 0) {
    Device.WiFi_Code = 6;
    SerialOutput();
    while (1) { }
  } else {
    Device.WiFi_Code = 7;
    SerialOutput();
  }

  delay(500);

  /**/
  /*
    while (WiFi.status() != WL_CONNECTED) {
      Device.Mode = 5;
      Device.Set  = 5;
      SerialOutput();
      Device.WiFi_Skin++;

      if (Device.WiFi_Skin > 3) {
        Device.WiFi_Skin = 0;
      }

      while (WiFi.status() == WL_NO_SSID_AVAIL || WiFi.status() == WL_CONNECT_FAILED) {
        Device.WiFi_Skin = -1;
        SerialOutput();
      }

      delay(200);
      //delay(250);
      //delay(300);
    }

    Device.WiFi_Skin = 2;
    SerialOutput();
  */
  Device.Mode = 10;//10
  Device.Set  = 10;//10

  Setting.change_refresh = millis();

  return;
}

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
  │ Version: 0.0.1 - ALPHA                    Date: 27.Jan.2019                      ┃
  ├──────────────────────────┴─────────────────────────┤
  └────────────────────────────────────────────────────┘
*/


long rssi = 0;

void InitESP() {
  pinMode(ESP_Button, INPUT);
  pinMode(ESP_Led, OUTPUT);
  digitalWrite(ESP_Led, HIGH);

  return;
}

void SetESP() {
  switch(Setting.Global_Choice) {
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

    delay(250);
    //delay(300);
  }

  Device.WiFi_Skin = 2;
  SerialOutput();
  
  Device.Mode = 10;//10
  Device.Set  = 10;//10

  Setting.change_refresh = millis();

  return;
}

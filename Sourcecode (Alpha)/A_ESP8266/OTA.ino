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
  │ InitOTA(): Initalization of Over-the-Air update                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  ├──────────────────────────┬─────────────────────────┤
  │ Version: 0.0.1 - ALPHA                    Date: 27.Jan.2019                      ┃
  ├──────────────────────────┴─────────────────────────┤
  └────────────────────────────────────────────────────┘
*/

void InitOTA() {
  // Port defaults to 8266
  // ArduinoOTA.setPort(8266);

  // Hostname defaults to esp8266-[ChipID]
  ArduinoOTA.setHostname("LaColorduino");

  // No authentication by default
  // ArduinoOTA.setPassword("admins");

  // Password can be set with it's md5 value as well
  // MD5(admin) = 21232f297a57a5a743894a0e4a801fc3
  // ArduinoOTA.setPasswordHash("21232f297a57a5a743894a0e4a801fc3");

  ArduinoOTA.onStart([]() {
    Device.Mode = 9;
    Device.Set = 9;
    String type;
    if (ArduinoOTA.getCommand() == U_FLASH)
      type = "sketch";
    else // U_SPIFFS
      type = "filesystem";

    // NOTE: if updating SPIFFS this would be the place to unmount SPIFFS using SPIFFS.end()
    //Serial.println("Start updating " + type);
  });

  ArduinoOTA.onEnd([]() {
    digitalWrite(ESP_Led, HIGH);
    digitalWrite(ESP_Led2, HIGH);
    //Serial.println("\nEnd");
    Updating.State = 1;
    SerialOutput();
    Serial.println('\0');
  });

  ArduinoOTA.onProgress([](float progress, unsigned int total) {
    Updating.Device = (progress / (total / 100));
    Device.Mode = 9;
    Device.Set = 9;
    Updating.State = 0;
    SerialOutput();
    
    digitalWrite(ESP_Led, LOW);
    digitalWrite(ESP_Led2, LOW);
    //Serial.printf("%u%%\r", (progress / (total / 100)));
  });

  ArduinoOTA.onError([](ota_error_t error) {
    //Serial.printf("Error[%u]: ", error);
    if (error == OTA_AUTH_ERROR)         { Updating.State = 2; SerialOutput(); }//Serial.println("Auth Failed");
    else if (error == OTA_BEGIN_ERROR)   { Updating.State = 3; SerialOutput(); }//Serial.println("Begin Failed");
    else if (error == OTA_CONNECT_ERROR) { Updating.State = 4; SerialOutput(); }//Serial.println("Connect Failed");
    else if (error == OTA_RECEIVE_ERROR) { Updating.State = 5; SerialOutput(); }//Serial.println("Receive Failed");
    else if (error == OTA_END_ERROR)     { Updating.State = 6; SerialOutput(); }//Serial.println("End Failed");
    //SerialOutput();
  });
  ArduinoOTA.begin();
  Updating.State = 0;
  //Serial.println("Ready");
  //Serial.print("IP address: ");
  //Serial.println(WiFi.localIP());


}

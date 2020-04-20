void InitESP32() {
  Wire.begin(SDA_PIN, SCL_PIN);

  pinMode(LED, OUTPUT);
  pinMode(BTN, INPUT);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  Serial.println("START");

  if (WiFi.waitForConnectResult() != WL_CONNECTED) {
    Serial.println("WiFi Failed");
    while (1) {
      delay(250);
    }
  }

  return;
}

void Mode() {                                       // # Check if Button is Pressed
  if (digitalRead(BTN) == LOW) {                    // When pressing the button...
    if (canBtnPress) canBtnPress = false;           // ...change state
  } else if (!canBtnPress) {
    canBtnPress = true;

    Setting.Page++;

    if (Setting.Page == 3) {
      Setting.Page = 0;
    }
  }

  return;
}

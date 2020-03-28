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
  │ InitADS1115(): Configuration of the ADC                                          ┃
  │ GetADS1115() : Parsing Information                                               ┃
  │ CalculateAmbientlight(): It triggered the Day/Night Mode via Photoresistor       ┃
  │ NightMode()  : Activate NightMode if Ambientlight under Trigger                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  ├──────────────────────────┬─────────────────────────┤
  │ Version: 0.0.3 - ALPHA                    Date: 21.Apr.2019                      ┃
  ├──────────────────────────┴─────────────────────────┤
  └────────────────────────────────────────────────────┘
*/

void InitADS1115() {
  // The ADC input range (or gain) can be changed via the following
  // functions, but be careful never to exceed VDD +0.3V max, or to
  // exceed the upper and lower limits if you adjust the input range!
  // Setting these values incorrectly may destroy your ADC!
  //                                                                ADS1015  ADS1115
  //                                                                -------  -------
  // ads.setGain(GAIN_TWOTHIRDS);  // 2/3x gain +/- 6.144V  1 bit = 3mV      0.1875mV (default)
  // ads.setGain(GAIN_ONE);        // 1x gain   +/- 4.096V  1 bit = 2mV      0.125mV
  // ads.setGain(GAIN_TWO);        // 2x gain   +/- 2.048V  1 bit = 1mV      0.0625mV
  // ads.setGain(GAIN_FOUR);       // 4x gain   +/- 1.024V  1 bit = 0.5mV    0.03125mV
  // ads.setGain(GAIN_EIGHT);      // 8x gain   +/- 0.512V  1 bit = 0.25mV   0.015625mV
  // ads.setGain(GAIN_SIXTEEN);    // 16x gain  +/- 0.256V  1 bit = 0.125mV  0.0078125mV

  ads.begin();

  return;
}

void GetADS1115() {
  Environment.OldData = Environment.SET_Ambientlight;

  //Pressed.Button_One   =         ads.readADC_SingleEnded(0);
  //Pressed.Button_Two   =         ads.readADC_SingleEnded(1);
  //Pressed.Button_Three =         ads.readADC_SingleEnded(2);

  if ( ads.readADC_SingleEnded(0) < 10000 ) {
    Pressed.Button_One = false;
  } else {
    Pressed.Button_One = true;
  }

  if ( ads.readADC_SingleEnded(1) < 10000 ) {
    Pressed.Button_Two = false;
  } else {
    Pressed.Button_Two = true;
  }

  if ( ads.readADC_SingleEnded(2) < 10000 ) {
    Pressed.Button_Three = false;
  } else {
    Pressed.Button_Three = true;
  }

  Environment.RAW_Ambientlight = ads.readADC_SingleEnded(3);

  Environment.Ambientlight = map(Environment.RAW_Ambientlight, 0, 17600, 0, 100);

  if (Debug_Serial == true) {
    Serial.println("----------------------------------");
    Serial.print("AmbientlightRAW: ");
    Serial.println(Environment.RAW_Ambientlight);

    Serial.print("Ambientlight   : ");
    Serial.print(Environment.Ambientlight);
    Serial.println(" %");

    Serial.print("Button One     : ");
    Serial.println(Pressed.Button_One);

    Serial.print("Button Two     : ");
    Serial.println(Pressed.Button_Two);

    Serial.print("Button Three   : ");
    Serial.println(Pressed.Button_Three);
  }

  CalculateAmbientlight(Environment.OldData);


  return;
}

void CalculateAmbientlight(short Input) {
  bool MasterRefresh = false;

  if (Environment.Ambientlight > Trigger) {
    if (Input == 0) {
      MasterRefresh = true;
    }
    Environment.SET_Ambientlight = 1;

  } else if (Environment.Ambientlight < Trigger) {
    if (Input == 1) {
      MasterRefresh = true;
    }
    Environment.SET_Ambientlight = 0;
    Device.Mode = 10;
    Device.Set = 10;

  }

  if (MasterRefresh == true) {
    MasterRefresh = false;
    SerialOutput();
  }

  return;
}

void NightMode() {
  if (Environment.SET_Ambientlight == 0) {
    Setting.change_refresh = millis();

    //Device.Mode = 10;
    //Device.Set = 10;
    //SerialOutput();
  }

  return;
}

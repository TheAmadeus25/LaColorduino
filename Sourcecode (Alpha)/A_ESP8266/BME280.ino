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
  │ InitBME280(): Configuration of the Temperature/Pressure/Humidity Sensor          ┃
  │ GetBME280() : Parsing Information                                                ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  ├──────────────────────────┬─────────────────────────┤
  │ Version: 0.0.1 - ALPHA                    Date: 27.Jan.2019                      ┃
  ├──────────────────────────┴─────────────────────────┤
  └────────────────────────────────────────────────────┘
*/

void InitBME280() {
  if (! bme.begin(&Wire)) {
    Serial.println("Could not find a valid BME280 sensor, check wiring!");
    while (1);
  }

  /*
    // weather monitoring
    Serial.println("-- Weather Station Scenario --");
    Serial.println("forced mode, 1x temperature / 1x humidity / 1x pressure oversampling,");
    Serial.println("filter off");
    bme.setSampling(Adafruit_BME280::MODE_FORCED,
                    Adafruit_BME280::SAMPLING_X1, // temperature
                    Adafruit_BME280::SAMPLING_X1, // pressure
                    Adafruit_BME280::SAMPLING_X1, // humidity
                    Adafruit_BME280::FILTER_OFF   );

    // suggested rate is 1/60Hz (1m)
    delayTime = 60000; // in milliseconds
  */

  /*
      // humidity sensing
      Serial.println("-- Humidity Sensing Scenario --");
      Serial.println("forced mode, 1x temperature / 1x humidity / 0x pressure oversampling");
      Serial.println("= pressure off, filter off");
      bme.setSampling(Adafruit_BME280::MODE_FORCED,
                      Adafruit_BME280::SAMPLING_X1,   // temperature
                      Adafruit_BME280::SAMPLING_NONE, // pressure
                      Adafruit_BME280::SAMPLING_X1,   // humidity
                      Adafruit_BME280::FILTER_OFF );

      // suggested rate is 1Hz (1s)
      delayTime = 1000;  // in milliseconds
  */

  /*
      // indoor navigation
      Serial.println("-- Indoor Navigation Scenario --");
      Serial.println("normal mode, 16x pressure / 2x temperature / 1x humidity oversampling,");
      Serial.println("0.5ms standby period, filter 16x");
      bme.setSampling(Adafruit_BME280::MODE_NORMAL,
                      Adafruit_BME280::SAMPLING_X2,  // temperature
                      Adafruit_BME280::SAMPLING_X16, // pressure
                      Adafruit_BME280::SAMPLING_X1,  // humidity
                      Adafruit_BME280::FILTER_X16,
                      Adafruit_BME280::STANDBY_MS_0_5 );

      // suggested rate is 25Hz
      // 1 + (2 * T_ovs) + (2 * P_ovs + 0.5) + (2 * H_ovs + 0.5)
      // T_ovs = 2
      // P_ovs = 16
      // H_ovs = 1
      // = 40ms (25Hz)
      // with standby time that should really be 24.16913... Hz
      delayTime = 41;

      /*
      // gaming
      Serial.println("-- Gaming Scenario --");
      Serial.println("normal mode, 4x pressure / 1x temperature / 0x humidity oversampling,");
      Serial.println("= humidity off, 0.5ms standby period, filter 16x");
      bme.setSampling(Adafruit_BME280::MODE_NORMAL,
                      Adafruit_BME280::SAMPLING_X1,   // temperature
                      Adafruit_BME280::SAMPLING_X4,   // pressure
                      Adafruit_BME280::SAMPLING_NONE, // humidity
                      Adafruit_BME280::FILTER_X16,
                      Adafruit_BME280::STANDBY_MS_0_5 );

      // Suggested rate is 83Hz
      // 1 + (2 * T_ovs) + (2 * P_ovs + 0.5)
      // T_ovs = 1
      // P_ovs = 4
      // = 11.5ms + 0.5ms standby
      delayTime = 12;
  */

  return;
}

void GetBME280() {
  // Only needed in forced mode! In normal mode, you can remove the next line.
  //bme.takeForcedMeasurement(); // has no effect in normal mode

  Environment.Temperatur     = bme.readTemperature();
  Environment.Pressure       = bme.readPressure() / 100.0F;
  //Environment.Altitude       = bme.readAltitude();
  Environment.ApproxAltitude = bme.readAltitude(SEALEVELPRESSURE_HPA);
  Environment.Humidity       = bme.readHumidity();

  if (Debug_Serial == true) {
    Serial.println("----------------------------------");
    Serial.print("Env Temperatur : ");
    Serial.print(Environment.Temperatur);
    Serial.println(" °C");

    Serial.print("Env Pressure   : ");
    Serial.print(Environment.Pressure);
    Serial.println(" hPa");

    Serial.print("Env Altitude   : ");
    Serial.print(Environment.ApproxAltitude);
    Serial.println(" m");

    Serial.print("Env Humidity   : ");
    Serial.print(Environment.Humidity);
    Serial.println(" %");
  }
  
  return;
}

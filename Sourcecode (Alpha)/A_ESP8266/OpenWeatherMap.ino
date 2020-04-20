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
  │ InitWeather(): Configuration of WeatherAPI                                       ┃
  │ GetWeather() : Parsing Information                                               ┃
  │ dateTime()   : Convert String to Date                                            ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  ├──────────────────────────┬─────────────────────────┤
  │ Version: 0.0.1 - ALPHA                    Date: 27.Jan.2019                      ┃
  ├──────────────────────────┴─────────────────────────┤
  └────────────────────────────────────────────────────┘
*/

void InitWeather() {
  WF_status = W_TRY;
}

void GetWeather() {
  OWM_conditions *ow_cond = new OWM_conditions;
  // default: Kelvin, metric: Celsius, imperial: Fahrenheit
  owCC.updateConditions(ow_cond, ow_key, COUNTRY_ID, TOWN_ID, Setting.Global_Unit);
  //Serial.print("Latitude & Longtitude: ");
  //Serial.print("<" + ow_cond->longtitude + " " + ow_cond->latitude + "> @" + dateTime(ow_cond->dt) + ": ");
  //Serial.println("icon: " + ow_cond->icon + ", " + " temp.: " + ow_cond->temp + ", press.: " + ow_cond->pressure);


  Weather.Longtitude      = (ow_cond->longtitude).toFloat();
  Weather.Latitude        = (ow_cond->latitude).toFloat();
  Weather.ID              = (ow_cond->id);
  Weather.Icon            = (ow_cond->icon);
  Weather.Main            = (ow_cond->main);
  Weather.Description     = (ow_cond->description);
  Weather.Temperatur      = (ow_cond->temp).toFloat();
  Weather.Pressure        = (ow_cond->pressure).toInt();
  Weather.Humidity        = (ow_cond->humidity).toFloat();
  Weather.Day_Min         = (ow_cond->t_min).toInt();
  Weather.Day_Max         = (ow_cond->t_max).toInt();
  Weather.Visibility      = ( (ow_cond->visibility).toFloat() ) / 1000;
  Weather.Wind_Speed      = (ow_cond->w_speed).toFloat();
  Weather.Wind_Direction  = (ow_cond->w_deg).toFloat();
  Weather.Condition       = (ow_cond->cond);
  Weather.Condition_Value = (ow_cond->cond_value);
  //Weather.SunriseHour     = (ow_cond->sunrise);
  //Weather.SunriseMinute   = (ow_cond->sunrise).toInt();
  //Weather.Sunset          = (ow_cond->sunset);

  
    OWM_fiveForecast *ow_fcast5 = new OWM_fiveForecast[40];
    byte entries = owF5.updateForecast(ow_fcast5, 5, ow_key, COUNTRY_ID, TOWN_ID, Setting.Global_Unit);
    //Serial.print("Entries: "); Serial.println(entries+1);
    for (byte i = 0; i <= entries; ++i) {
      yield();
      //Serial.print(dateTime(ow_fcast5[i].dt) + ": icon: ");
      //Serial.print(ow_fcast5[i].icon + ", temp.: [" + ow_fcast5[i].t_min + ", " + ow_fcast5[i].t_max + "], press.: " + ow_fcast5[i].pressure);
      //Serial.println(", descr.: " + ow_fcast5[i].description + ":: " + ow_fcast5[i].cond + " " + ow_fcast5[i].cond_value);

      Weather.Forecast[i] = (ow_fcast5[i].icon);
    }

    /*
    for (byte i = 0; i <= entries; ++i) {
      Forecast[i].Icon            = (ow_fcast5[i].icon);
      Forecast[i].Pressure        = (ow_fcast5[i].pressure).toInt();
      Forecast[i].Description     = (ow_fcast5[i].description);
      Forecast[i].Condition       = (ow_fcast5[i].cond);
      Forecast[i].Condition_Value = (ow_fcast5[i].cond_value);
    }*/

    delete[] ow_fcast5;
  

  if (Debug_Serial == true) {
    Serial.println("\n----------------------------------");

    Serial.print("Longtitude     : ");
    Serial.println(Weather.Longtitude);

    Serial.print("Latitude       : ");
    Serial.println(Weather.Latitude);

    Serial.print("ID             : ");
    Serial.println(Weather.ID);

    Serial.print("Description    : ");
    Serial.println(Weather.Description);

    Serial.print("Main           : ");
    Serial.println(Weather.Main);

    Serial.print("Icon           : ");
    Serial.println(Weather.Icon);

    Serial.print("Temperatur     : ");
    Serial.print(Weather.Temperatur, 1);
    Serial.println(" °C");

    Serial.print("Pressure       : ");
    Serial.print(Weather.Pressure);
    Serial.println(" hPa");

    Serial.print("Humidity       : ");
    Serial.print(Weather.Humidity);
    Serial.println(" %");

    Serial.print("Day_Min        : ");
    Serial.print(Weather.Day_Min);
    Serial.println(" °C");

    Serial.print("Day_Max        : ");
    Serial.print(Weather.Day_Max);
    Serial.println(" °C");

    Serial.print("Visibility     : ");
    Serial.print(Weather.Visibility, 1);
    Serial.println(" km");

    Serial.print("Wind_Speed     : ");
    Serial.print(Weather.Wind_Speed, 1);
    Serial.println(" m/s");

    Serial.print("Wind_Speed     : ");
    Serial.print( (Weather.Wind_Speed) * 3.6, 1);
    Serial.println(" km/h");

    Serial.print("Wind_Direction : ");
    Serial.println(Weather.Wind_Direction);

    Serial.print("Condition      : ");
    Serial.println(Weather.Condition);

    Serial.print("Condition_Value: ");
    Serial.println(Weather.Condition_Value);

    Serial.print("Sunrise        : ");
    Serial.println(dateTime(ow_cond->sunrise));

    Serial.print("Sunset         : ");
    Serial.println(dateTime(ow_cond->sunset));

    Serial.print("Sunrise (EPOCH): ");
    Serial.println(Weather.SunriseHour);
    Serial.println(":");
    Serial.println(Weather.SunriseMinute);

    Serial.print("Sunset  (EPOCH): ");
    Serial.println(Weather.SunsetHour);
    Serial.println(":");
    Serial.println(Weather.SunsetMinute);
  }
  /*
    for (byte i = 0; i <= entries; ++i) {
    Serial.println("\n----------------------------------");
    Serial.print("Forecast Day : ");
    Serial.println(i+1);

    Serial.print("Icon           : ");
    Serial.println(Forecast[i].Icon);

    Serial.print("Pressure       : ");
    Serial.print(Forecast[i].Pressure);
    Serial.println(" hPa");

    Serial.print("Description    : ");
    Serial.println(Forecast[i].Description);

    Serial.print("Condition      : ");
    Serial.println(Forecast[i].Condition);

    Serial.print("Condition_Value: ");
    Serial.println(Forecast[i].Condition_Value);
    }*/

  delete ow_cond;

  return;
}

String dateTime(String timestamp) {
  time_t ts = timestamp.toInt();
  char buff[30];
  sprintf(buff, "%02d:%02d  %02d.%02d.%4d", hour(ts), minute(ts), day(ts), month(ts), year(ts));
  return String(buff);
}

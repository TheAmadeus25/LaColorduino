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
  │ InitNTP(): Configuration of the Time                                             ┃
  │ GetNTP() : Parsing Information                                                   ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  ├──────────────────────────┬─────────────────────────┤
  │ Version: 0.0.1 - ALPHA                    Date: 27.Jan.2019                      ┃
  ├──────────────────────────┴─────────────────────────┤
  └────────────────────────────────────────────────────┘
*/

void InitNTP() {
  timeClient.begin();
  timeClient.setTimeOffset(7200);
  
  return;
}

void GetNTP() {
  timeClient.update();

  Date.Day        = timeClient.getDay();
  //Date.Week     = timeClient.getDay();
  Time.Hour       = timeClient.getHours();
  Time.Minute     = timeClient.getMinutes();
  Time.Second     = timeClient.getSeconds();
  Time.Epoch      = timeClient.getEpochTime();
  Time.Epoch_Date = timeClient.getFormattedTime();

  

  if (Debug_Serial == true) {
    Serial.println("----------------------------------");
    Serial.print("Day            : ");
    Serial.println(Date.Day);

    Serial.print("Week           : ");
    switch(Date.Day){
      case 0: Serial.println("Sonntag");    break;
      case 1: Serial.println("Montag");     break;
      case 2: Serial.println("Dienstag");   break;
      case 3: Serial.println("Mittwoch");   break;
      case 4: Serial.println("Donnerstag"); break;
      case 5: Serial.println("Freitag");    break;
      case 6: Serial.println("Samstag");    break; 
    }
    //Serial.print("Week           : ");
    //Serial.println(Date.Week);
    //sprintf("%02d", (String)Time.Hour);
    
    Serial.print("Hour           : ");
    Serial.println(Time.Hour);

    Serial.print("Minute         : ");
    Serial.println(Time.Minute);

    Serial.print("Second         : ");
    Serial.println(Time.Second);

    Serial.print("Epoch          : ");
    Serial.println(Time.Epoch);

    Serial.print("Epoch Date     : ");
    Serial.println(Time.Epoch_Date);
  }
  //Serial.println("----------------------------------");

  //CalcNTP();
  
  return;
}

void CalcNTP() {
    Time.Second++;
    
    if(Time.Second > 59){
      Time.Second = 0;
      Time.Minute++;
    }

    if(Time.Minute > 59){
      Time.Minute = 0;
      Time.Hour++;
    }
    
    if(Time.Hour > 23){
      Time.Hour = 0;
    }

  
}

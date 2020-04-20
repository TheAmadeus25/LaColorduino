#include "A_Configuration.h"

#include <WiFi.h>
#include <WiFiUdp.h>

#include <Wire.h>
#include <INA226.h>
INA226 ina;

WiFiUDP udp;

bool canBtnPress = true;                    // Button available

#include "A_Variable.h"

void setup() {
  InitSerial();
  InitESP32();
  InitINA();
  InitUDP();
}

void loop() {
  Mode();
  
  if ( millis() - Messuring.last_refresh > Messuring.refresh_delay ) {                                              // If times up,...
    digitalWrite(LED, HIGH);
    GetINA();
    Serial.println(Messuring.VBS);
    Messuring.last_refresh = millis();                              // Reset Timer counter
    digitalWrite(LED, LOW);
  }//END IF
  
  if ( millis() - Setting.last_refresh > Setting.refresh_delay ) {                                              // If times up,...
    digitalWrite(LED, HIGH);
    SendUDP();                                                      // @OpenWeatherMap | Parsing Information
    Serial.println("SEND");
    Setting.last_refresh = millis();                                // Reset Timer counter
    digitalWrite(LED, LOW);
  }//END IF
}

#ifndef A_Configuration_h
#define A_Configuration_h

char ssid[] = "******";                                        // Your network SSID (name)
char password[] = "******";                       // Your network Password

const char *udpAddress = "192.168.178.2";
const int udpPort = 65003;

#define SERIAL_BAUD 115200

#define LED 2                               // Built-In Blue LED on ESP32
#define BTN 0                               // Built-In Button on ESP32

#define SDA_PIN 26                          // Screen SDA
#define SCL_PIN 27                          // Screen SCL

#endif

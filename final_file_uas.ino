

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


char auth[] = "Ej1gp7k-2yFTUqzW8HXP8riR9AD7UsNo";

char ssid[] = "Galaxy S10+be44";
char pass[] = "beliquota123";

void setup(){
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop(){
  Blynk.run();
}

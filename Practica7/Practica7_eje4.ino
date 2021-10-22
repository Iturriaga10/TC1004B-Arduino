#include <ArduinoJson.h>

int Valor1;
int Valor2;
int Valor3;

void setup() {
  Serial.begin(9600);
}

void loop() {
  DynamicJsonDocument doc(1024);
  
  Valor1=analogRead(A0);
  Valor2=analogRead(A1);
  Valor3=analogRead(A2);

  doc["Sensor 1"] = Valor1;
  doc["Sensor 2"] = Valor2;
  doc["Sensor 3"] = Valor3;

  serializeJson(doc, Serial);
  
  delay(500);
}

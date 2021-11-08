//Ejercicio 4
//Con ayuda de tu profesor:
//1. Configura el pin A0, A1 y A2 como entrada analógica, y el monitor serial a 9600 baudios.
//2. Conecta tu sensor MQ135, M5, M7 o M9 a tu Arduino.
//3. Lee el valor de la entrada analógica A0, A1 y A2 y muestra el valor por el monitor serial, como un objeto
//JSON.
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

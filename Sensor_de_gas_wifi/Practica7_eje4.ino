#include <ArduinoJson.h>

//WiFi Parameters
const char* ssid="SoteloNetwork";
const char* password="1turr1aga";

//Sensors Values
int Valor1;
int Valor2;
int Valor3;

void setup() {
  
  Serial.begin(115200);
  //WiFi 
  Serial.printf("Connecting to %s", ssid)
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED){
    delay (300);
    Serial.print("Waiting for connection");
  }
  Serial.println("Connected");
}
  
void loop() {
  DynamicJsonDocument doc(1024);
  
  Valor1=analogRead(A0);
  Valor2=analogRead(A1);
  Valor3=analogRead(A2);

  doc["Sensor 1"] = Valor1;
  doc["Sensor 2"] = Valor2;
  doc["Sensor 3"] = Valor3;

  data = serializeJson(doc, Serial);
  
  delay(500);
}

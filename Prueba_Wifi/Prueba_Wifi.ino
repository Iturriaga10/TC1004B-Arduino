#include <WiFiNINA.h>

char ssid = "SoteloNetwork";
char password = "1turr1aga";

int status = WL_IDLE_STATUS;

char server[] = "https://my-json-server.typicode.com/typicode/demo";

String postDate;
String postVariable = "Mensaje= ";

WiFiClient client;

void setup(){
  Serial.begin(9600);

  while (status != WL_CONNECTED) {
    Serial.print("Attempting to connect to Network: ");
    Serial.println(ssid);
    status = WiFi.begin(ssid,password);
    delay (1000);
  }
}

void loop(){
  
}

#include <ArduinoJson.h>
#include <WiFiNINA.h>

char ssid[] = "SoteloNetwork";
char password[] = "1turr1aga";

int status = WL_IDLE_STATUS;

char server[] = "1711-187-189-127-57.ngrok.io";    //Always modify when re-run ngrok

WiFiClient client;

void setup(){
  Serial.begin(9600);

  while (status != WL_CONNECTED) {
    Serial.println("Attempting to connect to Network: ");
    Serial.println(ssid);
    status = WiFi.begin(ssid,password);
    delay (1000);
  }

  Serial.print("Connected to SSID: ");
  Serial.println(WiFi.SSID());
  IPAddress ip = WiFi.localIP();
  IPAddress gateway = WiFi.gatewayIP();
  Serial.print("IP Address: ");
  Serial.println(ip);

}

void loop(){

  DynamicJsonDocument doc1(1024);
  DynamicJsonDocument doc2(1024);
  DynamicJsonDocument doc3(1024);
  
  float sensor1 = analogRead(A0);
  float sensor2 = analogRead(A1);
  float sensor3 = analogRead(A2);

  doc1["data_measured"] = sensor1;
  doc1["sensor"] = "1";

  doc2["data_measured"] = sensor2;
  doc2["sensor"] = "2";

  doc3["data_measured"] = sensor3;
  doc3["sensor"] = "3";

  String postData1;
  String postData2;
  String postData3;

  serializeJson(doc1, postData1);
  serializeJson(doc2, postData2);
  serializeJson(doc3, postData3);

   if (client.connect(server, 80)) {
    client.println("POST /pushData HTTP/1.1");
    client.println("Host: 1711-187-189-127-57.ngrok.io");
    client.println("Content-Type: application/json");
    client.print("Content-Length: ");
    client.println(postData1.length());
    client.println();
    client.print(postData1);
   }

   if (client.connect(server, 80)) {
    client.println("POST /pushData HTTP/1.1");
    client.println("Host: 1711-187-189-127-57.ngrok.io");
    client.println("Content-Type: application/json");
    client.print("Content-Length: ");
    client.println(postData2.length());
    client.println();
    client.print(postData2);
   }

   if (client.connect(server, 80)) {
    client.println("POST /pushData HTTP/1.1");
    client.println("Host: 1711-187-189-127-57.ngrok.io");
    client.println("Content-Type: application/json");
    client.print("Content-Length: ");
    client.println(postData3.length());
    client.println();
    client.print(postData3);
  }

  if (client.connected()) {
    client.stop();
  }
  
  Serial.println(postData1);
  Serial.println(postData2);
  Serial.println(postData3);

  delay(20000);
  
}

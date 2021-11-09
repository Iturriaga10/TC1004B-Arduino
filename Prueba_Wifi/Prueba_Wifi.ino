#include <WiFiNINA.h>
#include <ArduinoJson.h>

char ssid = "SoteloNetwork";
char password = "1turr1aga";

int status = WL_IDLE_STATUS;

char server[] = "https://my-json-server.typicode.com/typicode/demo";

String postData;

WiFiClient client;

void setup(){
  Serial.begin(9600);

  while (status != WL_CONNECTED) {
    Serial.print("Attempting to connect to Network: ");
    Serial.println(ssid);
    status = WiFi.begin(ssid,password);
    delay (1000);
  }

  Serial.print("SSID: ");
  Serial.println(WiFi.SSID());
  IPAddress ip = WiFi.localIP();
  IPAddress gateway = WiFi.gatewayIP();
  Serial.print("IP Address: ");
  Serial.println(ip);

}

void loop(){

  DynamicJsonDocument doc(1024);
  
  int sensor1 = analogRead(A0);
  int sensor2 = analogRead(A1);
  int sensor3 = analogRead(A2);

  doc["Sensor 1"] = sensor1;
  doc["Sensor 2"] = sensor2;
  doc["Sensor 3"] = sensor3;

  postData = serializeJson(doc, Serial);

   if (client.connect(server, 80)) {
    client.println("POST /posts/post.php HTTP/1.1");
    client.println("Host: https://my-json-server.typicode.com/typicode/demo");
    client.println("Content-Type: application/x-www-form-urlencoded");
    client.print("Content-Length: ");
    client.println(postData.length());
    client.println();
    client.print(postData);
  }

  if (client.connected()) {
    client.stop();
  }
  
  Serial.println(postData);

  delay(3000);
  
}

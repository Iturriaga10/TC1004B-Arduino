#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <WiFiClient.h>
#include <ArduinoJson.h>

const char* ssid = "SoteloNetwork";   //Put your modem name here
const char* password = "1turr1aga";   //Put your password here

//Put your domain name here
const char* serverName = "localhost";

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  Serial.println("");

  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {

  DynamicJsonDocument doc(1024);

  serializeJson(doc, Serial);
  
  String incomingData="";
  
  while (Serial.available()){
    incomingData = Serial.readString();
    Serial.write("Message received");   
  }

  Serial.println(incomingData);

  //Post
  if(WiFi.status()== WL_CONNECTED){
     WiFiClient client;
     HTTPClient http;
      
     // Your Domain name with URL path or IP address with path
     http.begin(client, serverName);

     // Specify content-type header
     http.addHeader("Content-Type", "application/json");

     // Data to send with HTTP POST
     String httpRequestData = incomingData;           
  
     // Send HTTP POST request
     int httpResponseCode = http.POST(httpRequestData);

     Serial.print("HTTP Response code: ");
     Serial.println(httpResponseCode);
        
     // Free resources
     http.end();
    }
    
    else {
      Serial.println("WiFi Disconnected");
    }

  //Serial.println(incomingData);

  delay(100000);
}

#include <SoftwareSerial.h>

SoftwareSerial mySerial(2,3);   //RX, TX

void setup() {
  Serial.begin(115200);
  mySerial.begin(115200);
}

void loop() {
    
  int sensor1 = analogRead(A0);
  int sensor2 = analogRead(A1);
  int sensor3 = analogRead(A2);

  String identifier1 = "Sensor 1: ";
  String identifier2 = "Sensor 2: ";
  String identifier3 = "Sensor 3: ";
  String coma = ", ";

  String message = identifier1+sensor1+coma+identifier2+sensor2+coma+identifier3+sensor3;

  String received="";
  
  while(mySerial.available()){
    mySerial.println(message);
    Serial.println("Message sended"); 
    received=Serial.readString();
    Serial.println(received);   
  }

  Serial.println("No serial communication");
  delay(10000);  

}

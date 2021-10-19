void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}


void loop() {
  if (Serial.available() > 0) {
    int data = Serial.parseInt();

    Serial.println(data);
    
    for(int i=0; i <= data; i++){
        Serial.println(i);
        delay(500);
    }

    for(int j=0; j <= data; j++){
        digitalWrite(13, HIGH);
        delay(1000);
        digitalWrite(13, LOW);
        delay(1000);
    }
  }
}

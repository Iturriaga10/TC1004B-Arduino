int Sensor1;
int Sensor2;
int Sensor3;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Sensor1=analogRead(A0);
  Sensor2=analogRead(A1);
  Sensor3=analogRead(A3);
  Serial.println(Sensor1);
  delay(500);
}

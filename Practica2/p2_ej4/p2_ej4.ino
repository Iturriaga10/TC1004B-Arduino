void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}


void loop() {
  int data;
  if (Serial.available() > 0) {
    data = Serial.read();
    Serial.write(data);
  }
}

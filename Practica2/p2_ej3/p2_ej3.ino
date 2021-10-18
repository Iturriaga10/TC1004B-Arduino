void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  delay(1000);

  digitalWrite(13, LOW);
  for (int i = 0; i <= 3; i++) {  
    digitalWrite(12, HIGH);
    delay(300);
    digitalWrite(12, LOW);
    delay(300);
  }
  
  digitalWrite(11, HIGH);
  delay(1000);

  digitalWrite(11, LOW);
  for (int i = 0; i <= 3; i++) {  
    digitalWrite(10, HIGH);
    delay(300);
    digitalWrite(10, LOW);
    delay(300);
  }

  digitalWrite(9, HIGH);
  delay(1000);
}

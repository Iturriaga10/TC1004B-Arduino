void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  int variable0 = 0;
  int variable1 = 1;
  
  digitalWrite(13, variable0);
  delay(1000);
  digitalWrite(13, variable1);
  delay(1000);
}

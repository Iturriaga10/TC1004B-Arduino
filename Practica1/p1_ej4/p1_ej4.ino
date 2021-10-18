void setup() {
  pinMode(13, OUTPUT);
}

int estado(int variable){
  return !variable;
}

void loop() {
  int variable = 0;
  
  digitalWrite(13, variable);
  delay(1000);
  variable = estado(variable);
  digitalWrite(13, variable);
  delay(1000);
}

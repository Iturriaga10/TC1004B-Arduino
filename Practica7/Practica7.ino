int Valor;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Valor=analogRead(A0);
  Serial.println(Valor);
  delay(500);
}

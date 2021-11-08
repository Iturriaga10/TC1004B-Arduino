//Ejercicio 1
//Con ayuda de tu profesor:
//2. Conecta tu sensor MQ135 a tu Arduino.
//3. Lee el valor de la entrada analógica A0 y muestra el valor por el monitor serial.
void setup() {
  Serial.begin(9600);
}

void loop() {
  int adc_MQ = analogRead(A0);
  float voltaje = adc_MQ * (5.0 /1023.0);
  float rs = 1000*( (5-voltaje) / voltaje);
  double aire = .4091*pow(rs/5463, -1.497);
  Serial.print("adc:");
  Serial.print(adc_MQ);
  Serial.print("  voltaje: ");
  Serial.print(voltaje);
  Serial.print("  rs: ");
  Serial.print(rs);
  Serial.print("  aire: ");
  Serial.print(aire);
  Serial.println("");
  delay(500);
}
// Ejercicio 1
// Con ayuda de tu profesor:
// 1. Configura el pin A0 como entrada analógica, y el monitor serial a 9600 baudios. 
// 2. Lee el valor de la entrada analógica A0 y muestra el valor por el monitor serial.

void setup() {
  // Configuración monitor serial a 9600 Baudios
  Serial.begin(9600);
}

void loop() {
  // Lectura analogica puerto A0.
  int val = analogRead(A0);    
  // Imprimir variable mediante monitor serial.
  Serial.println(val, DEC);
  // Retardo de 500mSegundos.
  delay(500);
}

// Ejercicio 1
// Con ayuda de tu profesor:
// 1. Configura el monitor serial a 9600 baudios.
// 2. Mediante el monitor serial envía el texto Hola Mundo.

void setup() {
  // Configuración monitor serial a 9600 Baudios
  Serial.begin(9600);
}

void loop() {
  // Imprimir texto mediante monitor serial.
  Serial.println("Hola Mundo");
  // Retardo de 1segundo = 1000msegundo
  delay(1000);
}

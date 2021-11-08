// Ejercicio 1:
// Con ayuda de tu profesor:
// 1. Configuren el Pin número 13 en modo digital .
// 2. Mediante código enciéndalo.

void setup() {
  // Configuracion Pin 13 como salida.
  pinMode(13, OUTPUT);
}

void loop() {
  // Encendedido del Pin 13.
  digitalWrite(13, HIGH);
  // Retardo de 1segundo = 1000msegundo
  delay(1000);
}

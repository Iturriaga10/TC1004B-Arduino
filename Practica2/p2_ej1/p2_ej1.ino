// Listado de ejercicios:
// Ejercicio 1
// Con ayuda de tu profesor:
// 1. Configuren el Pin número 12, 13 en modo digital. 
// 2. Mediante código enciéndelos y apágalos.

void setup() {
  // Configuracion Pin 13 como salida.
  pinMode(13, OUTPUT);
  // Configuracion Pin 12 como salida.
  pinMode(12, OUTPUT);
}

void loop() {
  // Encendedido Pin 13.
  digitalWrite(13, HIGH);
  // Apagado Pin 12.
  digitalWrite(12, LOW);
  // Retardo de 1segundo = 1000msegundo
  delay(1000);

  // Apagado Pin 13.
  digitalWrite(13, LOW);
  // Encendedido Pin 12.
  digitalWrite(12, HIGH);
  // Retardo de 1segundo = 1000msegundo
  delay(1000);
}

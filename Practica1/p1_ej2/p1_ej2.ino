// Ejercicio 2
// Con ayuda de tu profesor:
// 1. Configuren el Pin número 13 en modo digital. 
// 2. Mediante código enciéndalo y apágalo.

void setup() {
  // Configuracion Pin 13 como salida.
  pinMode(13, OUTPUT);
}

void loop() {
  // Encendedido del Pin 13.
  digitalWrite(13, HIGH);
  // Retardo de 1segundo = 1000msegundo
  delay(1000);
  
  // Apagado del Pin 13.
  digitalWrite(13, LOW);
  // Retardo de 1segundo = 1000msegundo
  delay(1000);
}

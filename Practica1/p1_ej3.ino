// Ejercicio 3
// Con ayuda de tu profesor:
// 1. Configuren el Pin número 13 en modo digital.
// 2. Configura una variable, la cual será la que defina el estado de encendido y apagado del led.
// 3. Mediante código enciéndalo y apágalo.


void setup() {
  // Configuracion Pin 13 como salida.
  pinMode(13, OUTPUT);
}

void loop() {
  int variable0 = 0; // Creando variable
  int variable1 = 1; // Creando variable
  
  // Encendedido del Pin 13 mediante variable.
  digitalWrite(13, variable0);
  // Retardo de 1segundo = 1000msegundo
  delay(1000);
  
  // Apagado del Pin 13 mediante variable.
  digitalWrite(13, variable1);
  // Retardo de 1segundo = 1000msegundo
  delay(1000);
}

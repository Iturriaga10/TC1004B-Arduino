// Ejercicio 1
// Con ayuda de tu profesor:
// 1. Configura PWM (Pin 3 como salida).
// 2. Enciende el Pin 3 al 50% con ayuda de PWM.

void setup() {
  // Configuracion Pin 3 como salida.
  pinMode(3, OUTPUT);
}

void loop() {
  // Enciende Pin 3 al 25% del ciclo util.
  analogWrite(3, 25);
}

// Ejercicio 4
// Con ayuda de tu profesor:
// 1. Configura todos lo pines de PWM (Pin 3, 5, 6, 9, 10 y 11 como salida). 
// 2. Con ayuda de PWM enciende:
//    Pin 3 al 15% 
//    Pin 5 al 30% 
//    Pin 6 al 50% 
//    Pin 9 al 65% 
//    Pin 10 al 80% 
//    Pin 11 al 100%

void setup() {
  // Configuracion Pin 3 como salida.
  pinMode(3, OUTPUT);
  // Configuracion Pin 5 como salida.
  pinMode(5, OUTPUT);
  // Configuracion Pin 6 como salida.
  pinMode(6, OUTPUT);
  // Configuracion Pin 9 como salida.
  pinMode(9, OUTPUT);
  // Configuracion Pin 10 como salida.
  pinMode(10, OUTPUT);
  // Configuracion Pin 11 como salida.
  pinMode(11, OUTPUT);
}

void loop() {
  // Enciende Pin 3 15% del ciclo util.
  analogWrite(3, 2.5 * 15);
  // Enciende Pin 5 30% del ciclo util.
  analogWrite(5, 2.5 * 30);
  // Enciende Pin 6 50% del ciclo util.
  analogWrite(6, 2.5 * 50);
  // Enciende Pin 9 15% del ciclo util.
  analogWrite(9, 2.5 * 65);
  // Enciende Pin 10 80% del ciclo util.
  analogWrite(10, 2.5 * 80);
  // Enciende Pin 11 100% del ciclo util.
  analogWrite(11, 2.5 * 100);
}

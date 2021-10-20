// Ejercicio 2
// Con ayuda de tu profesor:
// 1. Configura PWM (Pin 5 como salida).
// 2. Con ayuda de PWM el Pin 5 debe de incrementar el porcentaje de ciclo útil del 0 al 100% en escalones
//    de 10%.

void setup() {
  // Configuracion Pin 5 como salida.
  pinMode(5, OUTPUT);
}

void loop() {
  // Bucle definido en <=100, incrementa contador de salida digital 5.
  for(int i=0; i<=100; i=i+10){
    // Enciende Pin 5 0%-100% del ciclo util.
    analogWrite(5, 2.5 * i);
    // Retardo de 1segundo = 1000msegundo
    delay(1000);
  }
  
}

// Ejercicio 3
// Con ayuda de tu profesor:
// 1. Configuren todos los pines posibles en modo digital.
// 2. Los LEDs pares deben de parpadear, mientras que los impares solo deben permanecer encendidos.

void setup() {
  // Configuracion Pin 13 como salida.
  pinMode(13, OUTPUT);
  // Configuracion Pin 12 como salida.
  pinMode(12, OUTPUT);
  // Configuracion Pin 11 como salida.
  pinMode(11, OUTPUT);
  // Configuracion Pin 10 como salida.
  pinMode(10, OUTPUT);
  // Configuracion Pin 9 como salida.
  pinMode(9, OUTPUT);
}

// Creación función parpadear.
void parpadear(int pinNumber){
  // Bucle encendido y apagado Pin seleccionado por el usuario.
  for (int i = 0; i <= 3; i++) {  
    // Encendedido Pin seleccionado por el usuario.
    digitalWrite(pinNumber, HIGH);
    // Retardo de 300mSegundos.
    delay(300);

    // Apagado Pin seleccionado por el usuario.
    digitalWrite(pinNumber, LOW);
    // Retardo de 300mSegundos.
    delay(300);
  }
}

void loop() {
  // Encendedido Pin 13.
  digitalWrite(13, HIGH);
  // Retardo de 1segundo = 1000msegundo
  delay(1000);

  // Apagado Pin 13.
  digitalWrite(13, LOW);
  // Llamado funcion parpadear Pin 12.
  parpadear(12)
  
  // Encendedido Pin 11.
  digitalWrite(11, HIGH);
  // Retardo de 1segundo = 1000msegundo
  delay(1000);

  // Apagado Pin 11.
  digitalWrite(11, LOW);
  // Llamado funcion parpadear Pin 10.
  parpadear(10)

  // Encendedido Pin 9.
  digitalWrite(9, HIGH);
  // Retardo de 1segundo = 1000msegundo
  delay(1000);
}

// Ejercicio 4
// Con ayuda de tu profesor:
// 1. Configuren todos los pines posibles en modo digital .
// 2. Resuelve el ejercicio 2 y ejercicio 3 usando funciones y la estructura de repetición while.

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
void parpadearFor(int NumeroPin1, int NumeroPin2){
  // Bucle encendido y apagado Pin seleccionado por el usuario.
  for(int i=0; i<3; i++){
    // Encendedido Pin 1 seleccionado por el usuario.
    digitalWrite(NumeroPin1, HIGH);
    // Encendedido Pin 2 seleccionado por el usuario.
    digitalWrite(NumeroPin2, HIGH);
    // Retardo de 300mSegundos.
    delay(300);

    // Apagado Pin 1 seleccionado por el usuario.
    digitalWrite(NumeroPin1, LOW);
    // Apagado Pin 2 seleccionado por el usuario.
    digitalWrite(NumeroPin2, LOW);
    // Retardo de 300mSegundos.
    delay(300);
  }
}

void loop() {
  // Encendedido Pin 13.
  digitalWrite(13, HIGH);
  // Encendedido Pin 11.
  digitalWrite(11, HIGH);
  // Encendedido Pin 9.
  digitalWrite(9, HIGH);
  // Llamado funcion parpadear Pin 12, Pin 10.
  parpadearFor(12, 10);

  // Apagado Pin 13.
  digitalWrite(13, LOW);
  // Apagado Pin 11.
  digitalWrite(11, LOW);
  // Apagado Pin 9.
  digitalWrite(9, LOW);
  // Llamado funcion parpadear Pin 12, Pin 10.
  parpadearWhile(12, 10);
}
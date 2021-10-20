// Ejercicio 3
// Con ayuda de tu profesor:
// 1. Configura el monitor serial a 9600 baudios.
// 2. Toma el ejercicio anterior y cambia la estructura de repetición utilizada. Si utilizaste for cámbialo por
// while, y viceversa.

void setup() {
  // Configuración monitor serial a 9600 Baudios
  Serial.begin(9600);
  // Configuracion Pin 13 como salida.
  pinMode(13, OUTPUT);
}

// Creación función serialText.
void serialText(){
  // Bucle definido en <20, que imprime el contador por el puerto serial.
  for( int i=0; i<20; i++ ){
    // Imprimir variable mediante monitor serial.
    Serial.println(i);
    // Retardo de 500mSegundos.
    delay(500);
  }
}

// Creación función ledparpadeante.
void ledparpadeante(int parpadeo){
  // Imprimir texto mediante monitor serial.
  Serial.println("El led esta parpadeando");
  
  // Bucle definido en <20, imprime contador por puerto serial.
  for( int i=0; i<parpadeo; i++ ){
    // Encendedido Pin 13.
    digitalWrite(13, HIGH);
    // Retardo de 1segundo = 1000msegundo
    delay(1000);
    // Apagado Pin 13.
    digitalWrite(13, LOW);
    // Retardo de 1segundo = 1000msegundo
    delay(1000);
  }
}



// Creación función ledparpadeante.
void ledparpadeante(int parpadeo){
  // Imprimir texto mediante monitor serial.
  Serial.println("El led esta parpadeando");
  
  int variable = 0;// Creando variable incremento while.

  // Bucle definido en <20, imprime contador por puerto serial.
  while (variable < parpadeo){
    // Encendedido Pin 13.
    digitalWrite(13, HIGH);
    // Retardo de 1segundo = 1000msegundo
    delay(1000);
    // Apagado Pin 13.
    digitalWrite(13, LOW);
    // Retardo de 1segundo = 1000msegundo
    delay(1000);
    // Incremento Variable.
    variable++;
  }
}

void loop() {
  // Llamado función serialText.
  serialText();
  // Llamado función ledparpadeante Pin 13, 5 repeticiones.
  ledparpadeante(5);
}

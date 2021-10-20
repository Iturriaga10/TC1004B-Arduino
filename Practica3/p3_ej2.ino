// Ejercicio 2
// Con ayuda de tu profesor:
// 1. Configura el monitor serial a 9600 baudios.
// 2. Crea una variable que comience en 0 y que se vaya incrementando hasta llegar al número 20 y muestre
//    por el monitor serial este incremento.
// 3. Al llegar al número 20 el LED del pin 13 debe parpadear 3 veces. 4. Utiliza estructuras de repetición y funciones.

void setup() {
  // Configuración monitor serial a 9600 Baudios
  Serial.begin(9600);
  // Configuracion Pin 13 como salida.
  pinMode(13, OUTPUT);
}

// Creación función serialText.
void serialText(){
  int variable = 0; // Creando variable incremento while.
  
  // Bucle definido en <20, imprime contador por puerto serial.
  while (variable < 20){
    // Imprimir variable mediante monitor serial.
    Serial.println(variable);
    // Retardo de 500mSegundos.
    delay(500);
    // Incremento Variable.
    variable++;
  }
}

// Creación función ledparpadeante.
void ledparpadeante(int parpadeo){
  // Imprimir texto mediante monitor serial.
  Serial.println("El led esta parpadeando");
  
  // Bucle encendido y apagado Pin seleccionado por usuario.
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

void loop() {
  // Llamado función serialText.
  serialText();
  // Llamado función ledparpadeante Pin 13, 5 repeticiones.
  ledparpadeante(5);

}

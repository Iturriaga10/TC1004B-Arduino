// Ejercicio 5
// Con ayuda de tu profesor:
// 1. Configura el monitor serial a 9600 baudios.
// 2. Crea una variable que registre un valor introducido por el puerto serial.
// 3. Crea un contador que vaya de 0 al valor ingresado y que se muestre por pantalla en el monitor serial. 
// 4. Al llegar al número introducido el LED del pin 13 debe parpadear el valor ingresado.
// 5. Utiliza estructuras de repetición y funciones.

void setup() {
  // Configuración monitor serial a 9600 Baudios
  Serial.begin(9600);
  // Configuracion Pin 13 como salida.
  pinMode(13, OUTPUT);
}

// Creación función serialText.
void serialText(int contador){
  // Bucle definido en <20, que imprime el contador por el puerto serial.
  for( int i=0; i<contador; i++ ){
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

void loop() {
  // Envia información solo cuando es recibida la información.
  if (Serial.available() > 0) {
    // Lectura Dato Puerto serial de dato entero.
    int data = Serial.parseInt();
    
    // Llamado función serialText.
    serialText(data)
    // Llamado función ledparpadeante Pin 13, 5 repeticiones.
    ledparpadeante(5);
    }
  }
}

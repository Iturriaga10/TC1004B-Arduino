// Ejercicio 4
// Con ayuda de tu profesor:
// 1. Configura el monitor serial a 9600 baudios.
// 2. Mediante el monitor serial lee un valor y énvialo por el monitor serial.

void setup() {
  // Configuración monitor serial a 9600 Baudios
  Serial.begin(9600);
  // Configuracion Pin 13 como salida.
  pinMode(13, OUTPUT);
}

void loop(){
  // Envia información solo cuando es recibida la información.
  if (Serial.available() > 0) {
    // Lectura Dato Puerto serial.  
    int lectura = Serial.read()

    // Imprime información enviada, por puerto serial:
    Serial.print("I received: ");
    Serial.println(incomingByte, DEC);
  } 
}
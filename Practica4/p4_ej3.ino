// Ejercicio 3
// Con ayuda de tu profesor:
// 1. Configura PWM (Pin 6 como salida).
// 2. Configura el monitor serial a 9600 baudios.
// 3. Crea una variable que leerá el valor por el monitor serial. 
// 4. Esta variable indicará el porcentaje de ciclo útil del Pin 6.

void setup() {
  // Configuracion Pin 5 como salida.
  pinMode(6, OUTPUT);
  // Configuración monitor serial a 9600 Baudios
  Serial.begin(9600);

}

int data = 0; // Creando variable

void loop() {
  // Envia información solo cuando es recibida la información.
  if (Serial.available() > 0) {
    // Lectura Dato Puerto serial de dato entero.
    data = Serial.parseInt();
  }

  // Enciende Pin 6 0%-100% del ciclo util.
  analogWrite(6, 2.5 * data);
}

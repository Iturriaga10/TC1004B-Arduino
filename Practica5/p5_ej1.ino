// Ejercicio 1
// Con ayuda de tu profesor:
// 1. Configura el pin 2 como entrada, y el pin 13 como salida.
// 2. Al estar el switch activado, encienda el Led, y al estar apagado el switch el Led debe de estar apagado.

void setup() {
  // Configuracion Pin 13 como salida.
  pinMode(13, OUTPUT);  
  // Configuracion Pin 2 como entrada.
  pinMode(2, INPUT);    
}

void loop() {
  // Lectura del Pin 2 asignado a variable.
  int val = digitalRead(2); 
  // Encendido del Pin 13 mediante variable.
  digitalWrite(13, val);  

  
}

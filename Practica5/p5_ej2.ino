// Ejercicio 2
// Con ayuda de tu profesor:
// 1. Configura el pin 3 y 4 como entrada, y el pin 13 como salida. 
// 2. Simula las compuertas AND, OR y NOT.

void setup() {
  // Configuracion Pin 13 como salida.
  pinMode(13, OUTPUT);
  // Configuracion Pin 12 como salida.  
  pinMode(12, OUTPUT);
  // Configuracion Pin 11 como salida.
  pinMode(11, OUTPUT);
  // Configuracion Pin 2 como entrada.
  pinMode(2, INPUT);
  // Configuracion Pin 3 como entrada.
  pinMode(3, INPUT);    
}

void loop() {
  // Lectura del Pin 2 asignado a variable.
  int entrada1 = digitalRead(2);   
  // Lectura del Pin 3 asignado a variable.
  int entrada2 = digitalRead(3);  

  //NOT
  // Encendido / Apagado del Pin 13 mediante variable negada.
  digitalWrite(13, !entrada1);  

  // AND
  // Condicional
  if(entrada1==HIGH && entrada2==HIGH){
    // Encendido del Pin 12.
    digitalWrite(12, HIGH);
  }
  else{
    // Apagado del Pin 13.
    digitalWrite(12, LOW);
  }

  // OR
  // Condicional
  if(entrada1==LOW && entrada2==LOW){
    // Apagado del Pin 11.
    digitalWrite(11, LOW);
  }
  else{
    // Encendido del Pin 11.
    digitalWrite(11, HIGH);
  }
}

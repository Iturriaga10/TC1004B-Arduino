// Ejercicio 3
// 1. Configura el pin A0 como entrada analógica, el pin 13, 12, 11, 10, 9, 8, 7, 6 como salida.
// 2. Lee el valor de la entrada analógica A0 y mientras más se incremente la resistencia en el potenciometro
//    mayor cantidad de Leds deben de encenderse.

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
  // Configuracion Pin 8 como salida.
  pinMode(8, OUTPUT);

}

void loop() {
  // Lectura analogica puerto A0.
  int val = analogRead(A0);
  
  // Condicional 1
  if(val < 190 ){
    // Encendedido Pin 13.
    digitalWrite(13, HIGH);
    // Bucle apagado Pin 12, 11, 10, 9 y 8.
    for(int i=8; i<13; i++){
      // Apagado Pin i.
      digitalWrite(i, LOW);
    }
  }

  // Condicional 2 
  if(val >190 && val < 190*2 ){
    // Encendedido Pin 13.
    digitalWrite(13, HIGH);
    // Encendedido Pin 12.
    digitalWrite(12, HIGH);
    // Bucle apagado Pin 11, 10, 9 y 8.
    for(int i=8; i<12; i++){
      // Apagado Pin i.
      digitalWrite(i, LOW);
    }
  }
  
  // Condicional 3
  if(val >190*2 && val < 190*3){
    // Encendedido Pin 13.
    digitalWrite(13, HIGH);
    // Encendedido Pin 12.
    digitalWrite(12, HIGH);
    // Encendedido Pin 11.
    digitalWrite(11, HIGH);
    // Bucle apagado Pin 10, 9 y 8.
    for(int i=8; i<11; i++){
      // Apagado Pin i.
      digitalWrite(i, LOW);
    }  
  }
  
  // Condicional 4
  if(val > 190*3 && val < 190*4){
    // Encendedido Pin 13.
    digitalWrite(13, HIGH);
    // Encendedido Pin 12.
    digitalWrite(12, HIGH);
    // Encendedido Pin 11.
    digitalWrite(11, HIGH);
    // Encendedido Pin 10.
    digitalWrite(10, HIGH);
    // Bucle apagado Pin 9 y 8.
    for(int i=8; i<10; i++){
      // Apagado Pin i.
      digitalWrite(i, LOW);
    }
  }
  
  // Condicional 5
  if(val > 190*4 && val < 190*5){
    // Bucle encendido Pin 13, 12, 11, 10 y 9.
    for(int i=9; i<=13; i++){
      // Encendido Pin i.
      digitalWrite(i, HIGH);
    }
    // Apagado Pin 8.
    digitalWrite(8, LOW);
  }
  
  // Condicional 6
  if(val > 190*5 && val < 190*6){
    // Bucle encendido Pin 13, 12, 11, 10, 9 y 8.
    for(int i=8; i<=13;i++){
      // Encendido Pin i.
      digitalWrite(i, HIGH);
    }
  }
}

// Ejercicio 4
// Con ayuda de tu profesor:
// 1. Configura el pin 3 y 4 como entrada y el pin 13, 12, 11, 10 y 9 como salida.
// 2. Al activar el switch deslizable 1 los leds deben de encender de derecha a izquierda, al activar el switch
//    deslizable 2 los leds deben de prender de izquierda a derecha. Si ambos son activados los leds deben de parpadear.

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
  // Configuracion Pin 2 como entrada.
  pinMode(2, INPUT);
  // Configuracion Pin 3 como entrada.
  pinMode(3, INPUT);    
}

void loop() {
  // Condicional
  if(digitalRead(2)==HIGH && digitalRead(3)==LOW){
   // Bucle encendido y apagado Pin 13, 12, 11, 10 y 9.
   for(int i = 13; i>=9; i--){
    // Encendedido Pin i.
    digitalWrite(i, HIGH);
    // Retardo de 50mSegundos.
    delay(50);
    digitalWrite(i, LOW);
    // Retardo de 50mSegundos.
    delay(50);
    }
  }

  //Condicional
  if(digitalRead(2)==LOW && digitalRead(3)==HIGH){
    // Bucle encendido y apagado Pin 9, 10, 11, 12 y 13.
    for(int i = 9; i<=13; i++){
    // Encendedido Pin i.
    digitalWrite(i, HIGH);
    // Retardo de 50mSegundos.
    delay(50);
    // Apagado Pin i.
    digitalWrite(i, LOW);
    // Retardo de 50mSegundos.
    delay(50);
    }
  }

  // Condicional
  if(digitalRead(2)==HIGH && digitalRead(3)==HIGH){
    // Bucle encendido Pin 9, 10, 11, 12 y 13.
    for(int i = 9; i<=13; i++){
    // Encendedido Pin i.
    digitalWrite(i, HIGH);
    }
    // Retardo de 100mSegundos.
    delay(100);
    // Bucle apagado Pin 9, 10, 11, 12 y 13.
    for(int i = 9; i<=13; i++){
    // Apagado Pin i.
    digitalWrite(i, LOW);
    }
    // Retardo de 100mSegundos.
    delay(100);
  }
}

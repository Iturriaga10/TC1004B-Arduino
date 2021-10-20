// Ejercicio 3
// Con ayuda de tu profesor:
// 1. Configura el pin 3 como entrada y el pin 5 como PWM.
// 2. Simula un botón con el switch deslizable conectado al pin 3.
// 3. Cada ocasión que se simule el switch el porcentaje de PWM debe de incrementar en escalones de 10%
//    hasta llegar al 100%, una vez que llegue al 100%, debe de resetearse la salida de PWM.

void setup() {
  // Configuracion Pin 5 como salida.
  pinMode(5, OUTPUT);  
  // Configuracion Pin 2 como entrada.
  pinMode(2, INPUT);    
}


int state = 0; // Creando variable global.
void loop() {
  // Condicional
  if(digitalRead(2)==HIGH){
    // Retardo de 100msegundo
    delay(100);

    // Condicional
    if(digitalRead(2)==LOW){
    // Incremento variable global.
    state = state + 10;
    // Condicional Reseteo estado
    if( state >= 100){
     // Puesta a 0 variable global.
     state = 0; 
     }
    // Enciende Pin 5 0%-100% del ciclo util.
    analogWrite(5, 2.5 * state);
    }
  }
}

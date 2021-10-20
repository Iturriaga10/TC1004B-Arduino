// Ejercicio 2
// Con ayuda de tu profesor:
// 1. Configura el pin A0 como entrada analógica, y el pin 3 como PWM.
// 2. Lee el valor de la entrada analógica A0 e incrementa el PWM de un Led.

void setup() {
  // Configuracion Pin 3 como salida.
  pinMode(3, OUTPUT);
}

void loop() {
  // Lectura analogica puerto A0.
  int val = analogRead(A0); 
  // Enciende Pin 3 0%-100% del ciclo util.   
  analogWrite(3, (val*.0989*2.5));
  // Retardo de 500mSegundos.
  delay(500);
}

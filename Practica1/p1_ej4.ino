// Ejercicio 4
// Con ayuda de tu profesor:
// 1. Configuren el Pin número 13 en modo digital.
// 2. Crea una función en donde una variable, definirá el estado de encendido y apagado del led.

void setup() {
  // Configuracion Pin 13 como salida.
  pinMode(13, OUTPUT);
}

// Creación de función estado.
int estado(int variable){
  // Regreso de valor negado.
  return !variable;
}

void loop() {
  int variable = 0; // Creando variable
  
  // Encendedido del Pin 13 mediante variable.
  digitalWrite(13, variable);
  // Retardo de 1segundo = 1000msegundo
  delay(1000);

  // Llamando funcion estado y asiganandolo a variable.
  variable = estado(variable);

  // Apagado del Pin 13 mediante variable.
  digitalWrite(13, variable);
  // Retardo de 1segundo = 1000msegundo
  delay(1000);
}

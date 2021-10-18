void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void serialText(){
  int variable = 0;
  
  while (variable < 20){
    Serial.println(variable);
    delay(500);
    variable++;
  }
}

void ledparpadeante(int parpadeo){
  Serial.println("El led esta parpadeando");
  
  for( int i=0; i<parpadeo; i++ ){
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
  }
}

void loop() {
 
  serialText();
  ledparpadeante(5);

}

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void serialText(){
  for( int i=0; i<20; i++ ){
    Serial.println(i);
    delay(500);
  }
}

void ledparpadeante(int parpadeo){
  Serial.println("El led esta parpadeando");
  
  int variable = 0;
  
  while (variable < parpadeo){
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
    variable++;
  }
}

void loop() {
 
  serialText();
  ledparpadeante(5);

}

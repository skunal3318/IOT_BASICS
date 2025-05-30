void setup(){
  pinMode(13,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop(){
  //FOR THR RED LOGHT 
  digitalWrite(13,HIGH);
  delay(5000);
  digitalWrite(13,LOW);
  delay(5000);
  //FOR THE YELLOW LIGHT 
  digitalWrite(10,HIGH);
  delay(1000);
  digitalWrite(10,LOW);
  delay(1000);
  //FOR THE GREEN LIGHT
  digitalWrite(8,HIGH);
  delay(1500);
  digitalWrite(8,LOW);
  delay(1500);
}

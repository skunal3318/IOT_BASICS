void setup(){
  pinMode(13,OUTPUT); //Set Pin 13 as the output
}

void loop(){
  digitalWrite(13,HIGH); // Turn LED on
  delay(1000);           //Wait 1 second
  digitalWrite(13,LOW);  //Turn LED off
  delay(1000);           //Wait 1 second
}

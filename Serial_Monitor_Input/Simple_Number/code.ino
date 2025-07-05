String msg = "Enter your number :: ";
String msg2 = "Your number is :: ";
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println(msg);
  while(Serial.available() == 0){
    
  }
  int myNum = Serial.parseInt();
  Serial.print(msg2);
  Serial.println(myNum);
}

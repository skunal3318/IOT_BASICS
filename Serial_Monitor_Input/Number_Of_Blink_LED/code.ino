 int ledpin = 12;
String msg = "Enter number of times led should blink :: ";
String msg2 = "Your number is :: ";
void setup()
{
  pinMode(ledpin , OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println();
  Serial.print(msg);
  while(Serial.available() == 0){
    
  }
  int myNum = Serial.parseInt();
  Serial.print(myNum);
  for(int i = 0 ; i < myNum ; i++){
    digitalWrite(ledpin , HIGH);
    delay(500);
    digitalWrite(ledpin , LOW);
    delay(500);
  }
  delay(500);
}

int buzzpin = 7;
int potpin = A3;
String msg="Potentiometer val :: ";
float potval;
void setup()
{
  Serial.begin(9600);
  pinMode(buzzpin, OUTPUT);
  pinMode(potpin , INPUT);
  
}

void loop()
{
  potval = analogRead(potpin);
  Serial.print(msg);
  Serial.println(potval);
  if(potval > 1000){
    digitalWrite(buzzpin, HIGH);
  }else{
    digitalWrite(buzzpin, LOW);
  }
}

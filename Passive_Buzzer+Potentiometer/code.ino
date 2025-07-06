int potpin = A3;
int buzzpin = 7;
float potval;
float buzzval;
String msg="Potentiometer value :: ";
String comma=" , ";
String msg2="Buzzer value :: ";
int dt = 500;
void setup()
{
  Serial.begin(9600);
  pinMode(buzzpin, OUTPUT);
  pinMode(potpin , INPUT);
}

void loop()
{
  potval = analogRead(potpin);
  buzzval = (9940./1023.)*(potval)+60;
  analogWrite(buzzpin, buzzval);
  delayMicroseconds(dt);
  Serial.print(msg);
  Serial.print(potval);
  Serial.print(comma);
  Serial.print(msg2);
  Serial.println(buzzval);
}

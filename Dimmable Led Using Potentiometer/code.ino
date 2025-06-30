int ledpin = 7;
int potpin = A3;
int delayT = 500;
int potVal;
float ledval;
void setup()
{
  pinMode(ledpin, OUTPUT);
  pinMode(potpin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  potVal = analogRead(potpin);
  ledval = (255./1023.)*potVal;
  analogWrite(ledpin, ledval);
  Serial.println(ledval);
}

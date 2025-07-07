int ledpin = 12;
int buttonpin = 13;
int buttonval;
int dt = 250;
void setup()
{
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
  pinMode(buttonpin, INPUT);
}

void loop()
{
  buttonval = digitalRead(buttonpin);
  Serial.println(buttonval);
  delay(dt);
  if(buttonval == 1){
    digitalWrite(ledpin, LOW);
  }
  if(buttonval == 0){
    digitalWrite(ledpin, HIGH);
  }
}

int ledpin = 12;
int buttonpin = 13;
int dt = 250;
int buttonnew;
int ledstate=0;
int buttonold=1;
void setup()
{
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
  pinMode(buttonpin, INPUT);
}

void loop()
{
  buttonnew = digitalRead(buttonpin);
  Serial.println(buttonnew);
  if(buttonold == 0 && buttonnew == 1){
    if(ledstate == 0){
      digitalWrite(ledpin, HIGH);
      ledstate=1;
    }else{
      digitalWrite(ledpin,LOW);
      ledstate=0;
    }
  }
  buttonold = buttonnew;
}

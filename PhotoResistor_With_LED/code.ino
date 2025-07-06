int photpin = A0;
int photval;
int greenpin = 7;
int redpin = 8;
String msg="Photo resistance value :: ";

void setup()
{
  pinMode(photpin, INPUT);
  pinMode(greenpin, OUTPUT);
  pinMode(redpin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  photval = analogRead(photpin);
  Serial.print(msg);
  Serial.println(photval);
  if(photval > 350){
    digitalWrite(greenpin, HIGH);
    digitalWrite(redpin , LOW);
  }
  if(photval < 350){
    digitalWrite(greenpin, LOW);
    digitalWrite(redpin , HIGH);
  }
  
}

int tiltpin = 2;
int redpin = 7;
int greenpin = 8;
int tiltval;
int dt = 250;
void setup()
{
  Serial.begin(9600);
  pinMode(tiltpin, INPUT);
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  digitalWrite(tiltpin, HIGH);
}

void loop()
{
  tiltval = digitalRead(tiltpin);
  Serial.print("Tilt value :: ");
  Serial.println(tiltval);
  if(tiltval == 1){
    digitalWrite(greenpin, HIGH);
    digitalWrite(redpin, LOW);
 }
  else{
  digitalWrite(redpin, HIGH);
    digitalWrite(greenpin, LOW);
  }
}

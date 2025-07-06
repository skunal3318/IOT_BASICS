int buzzpin = 7;
int photopin = A0;
int photoval;
int buzzval;
void setup()
{
  Serial.begin(9600);
  pinMode(buzzpin, OUTPUT);
  pinMode(photopin , INPUT);
}

void loop()
{
  photoval = analogRead(photopin);
  Serial.println(photoval);
  buzzval = (9940./920.)*(photoval-54)+60;
  analogWrite(buzzpin,buzzval);
}

int outpin = A3;
int readval;
float v2=0;
int delayT = 500;

void setup()
{
  pinMode(outpin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  readval = analogRead(outpin);
  v2 = (5./1023.)*readval;
  Serial.println(v2);
  delay(delayT);
}

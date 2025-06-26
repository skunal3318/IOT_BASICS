
int readpin = A4;
int readval;
float v2= 0;
int delaytime = 500;

void setup()
{
  pinMode(readpin ,INPUT);
  Serial.begin(9600);

}

void loop()
{
  readval = analogRead(readpin);
  v2 = (5./1023.)*readval;
  Serial.println(v2);
  delay(delaytime);
}

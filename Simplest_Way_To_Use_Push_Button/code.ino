int button = 2;
int butval;
void setup()
{
  Serial.begin(9600);
  pinMode(button, INPUT);
  digitalWrite(button, HIGH);
}

void loop()
{
  butval = digitalRead(button);
  Serial.print("Buttton State :: ");
  Serial.println(butval);
}

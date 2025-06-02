int potPin = A0;
int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(potPin);
  float voltage = potValue * (5.0 / 1023.0);
  float Temp = voltage * 100;

  Serial.print("Temp: ");
  Serial.print(Temp);
  Serial.println(" °C");

  if (Temp > 30) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(500);
}

int ldrPin = A0;       // LDR connected to analog pin A0
int ledPin = 9;        // LED on digital pin 9
int threshold = 500;   // Light level threshold (adjust as needed)

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); // Optional: to see LDR values in Serial Monitor
}

void loop() {
  int ldrValue = analogRead(ldrPin); // Read LDR value
  Serial.println(ldrValue); // Optional debugging

  if (ldrValue < threshold) {
    digitalWrite(ledPin, HIGH); // It's dark, turn LED ON
  } else {
    digitalWrite(ledPin, LOW); // It's bright, turn LED OFF
  }

  delay(500);
}

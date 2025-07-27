int trigpin = 12;
int echopin = 11;
int measuredtime;
int distance;
void setup() {
  Serial.begin(9600);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(trigpin, LOW);
  delayMicroseconds(10);
  digitalWrite(trigpin , HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);
  measuredtime = pulseIn(echopin, HIGH);
  distance = measuredtime/58;
  Serial.print("Measured Time :: ");
  Serial.print(measuredtime);
  Serial.print(" , ");
  Serial.print("Calculated Distance :: ");
  Serial.println(distance);
  // put your main code here, to run repeatedly:

}

int trigpin = 12;
int echopin = 11;
int measuredtime;
int distance;
int dt = 500;
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
  Serial.print(0);
  Serial.print(",");
  Serial.println(distance);
  Serial.print(",");
  Serial.println(10);
  // put your main code here, to run repeatedly:
  delay(dt);

}

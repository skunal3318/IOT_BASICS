#include<Servo.h>
int pos;
int servopin = 9;
Servo myservo;
int lrpin = A3;
int lrval;
int dt = 100;

void setup()
{
  Serial.begin(9600);
  myservo.attach(servopin);
  pinMode(lrpin, INPUT);
}

void loop()
{
  lrval = analogRead(lrpin);
  pos = (18./92.)*(lrval-54);
  Serial.print("PhotoResistor :: ");
  Serial.print(lrval);
  Serial.print(" , ");
  Serial.print("Angle :: ");
  Serial.println(pos);
  myservo.write(pos);
  delay(dt);
}

#include<Servo.h>
int initialpos;
int servopin = 9;
Servo myservo;
String msg="Enter the angle by which motor should rotate :: ";
void setup()
{
  Serial.begin(9600);
  myservo.attach(servopin);
}

void loop()
{
  Serial.print(msg);
  while(Serial.available()==0){
    
  }
  initialpos = Serial.parseInt();
  Serial.println(initialpos);
  myservo.write(initialpos);
}

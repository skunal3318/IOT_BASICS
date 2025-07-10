// LINK TO THE PROJECT ::: https://wokwi.com/projects/436093966238508033


#include <Servo.h>
int sxpin = A2;
int sypin = A3;
int sxval;
int syval;
int spin = 7;
int buzzer=2;
int jbuttonval;
int xservo = 9;
int yservo = 10;
int xpos;
int ypos;
int dt = 250;
Servo xdir;
Servo ydir;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sxpin , INPUT);
  pinMode(sypin , INPUT);
  pinMode(spin , OUTPUT);
  pinMode(buzzer , OUTPUT);
  xdir.attach(xservo);
  ydir.attach(yservo);
  digitalWrite(spin, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  sxval = analogRead(sxpin);
  xpos = (180./1023.)*(sxval);

  syval = analogRead(sypin);
  ypos = (180./1023.)*(syval);

  jbuttonval = digitalRead(spin);
  if(jbuttonval == 0){
    pinMode(buzzer, HIGH);
  }else{
    pinMode(buzzer, LOW);
  }

  Serial.print("X val :: ");
  Serial.print(sxval);
  Serial.print(" , ");
  Serial.print("Y val :: ");
  Serial.print(syval);
  Serial.print(" , ");
  Serial.print("Jbutton val :: ");
  Serial.println(jbuttonval);

  xdir.write(xpos);
  ydir.write(ypos);

  delay(dt);
}

#include <Stepper.h>
int stepsperrevolutoion = 2048;
int speed = 10;
int buttonpin = 2;
int mdir=1;
int buttonvalold = 1;
int buttonvalnew;
int dt = 500;
Stepper mystepper(stepsperrevolution , 8, 10, 9 ,11);

void setup(){
  Serial.begin(9600);
  mystepper.setspeed(speed);
  pinMode(buttonpin , INPUT);
  digitalWrite(buttonpin, HIGH);
}

void loop(){
  buttonvalnew = digitalRead(buttonpin);
  if(buttonvalold == 1 && buttonvalnew == 0){
    mdir = mdir*(-1);
  }
  mystepper.step(mdir*(1));

  buttonvalnew = buttonvalold;
}

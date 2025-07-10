#include <Stepper.h>
int stepsperrevolutoion = 2048;
int speed = 10;
int dt = 500;
Stepper mystepper(stepsperrevolution , 8, 10, 9 ,11);

void setup(){
  Serial.begin(9600);
  mystepper.setspeed(speed);
}

void loop(){
  mystepper.step(stepsperrevolution);
  delay(dt);
  mystepper.step(-stepsperrevolution);
  delay(dt);
}

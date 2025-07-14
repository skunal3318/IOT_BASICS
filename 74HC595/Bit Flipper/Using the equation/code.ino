int latchpin = 11;
int clockpin = 9;
int datapin = 12;
byte LEDs = 0x0f;
byte flipLEDs;
  
void setup(){
  Serial.begin(9600);
  pinMode(latchpin, OUTPUT);
  pinMode(clockpin, OUTPUT);
  pinMode(datapin, OUTPUT);
}

void loop(){
  Serial.println(LEDs, BIN);
  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clockpin, LSBFIRST, LEDs);
  digitalWrite(latchpin, HIGH);
  
  delay(300);
  
  flipLEDs = 255-LEDs;
  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clockpin, LSBFIRST, flipLEDs);
  digitalWrite(latchpin, HIGH);
  
  delay(300);
  }

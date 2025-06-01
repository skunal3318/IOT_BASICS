int led = 13;
int button = 2;
int buzzer = 10;

void setup() {
  pinMode(button, INPUT_PULLUP);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop(){
  if(digitalRead(button) == LOW){
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(200);
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    delay(200);
  }
  else{
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
  }
}

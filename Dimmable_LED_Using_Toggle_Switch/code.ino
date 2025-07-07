int ledpin = 3;
int button1=12;
int button2=13;
int buttonval_1;
int buttonval_2;
int dt=500;
int buzzpin = 7;
int i=0;

void setup()
{
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(buzzpin, OUTPUT);
}

void loop()
{
  buttonval_1=digitalRead(button1);
  buttonval_2=digitalRead(button2);
  analogWrite(ledpin,i);
  Serial.print("Button 1 :: ");
  Serial.print(buttonval_1);
  Serial.print(" , ");
  Serial.print("Button 2 :: ");
  Serial.println(buttonval_2);
  //if(buttonval_1 == 0){
  //  analogWrite(ledpin, i+50);
  //}
  //if(buttonval_2 == 0){
  //  analogWrite(ledpin, i-50);
  //}
  if(buttonval_1 == 0){
    i = i + 5;
  }
  if(buttonval_2 == 0){
    i = i - 5;
  }
  if(i > 255){
    i = 255;
    digitalWrite(buzzpin , HIGH);
    delay(dt);
    digitalWrite(buzzpin , LOW);
  }
  if(i < 0){
    i = 0;
    digitalWrite(buzzpin , HIGH);
    delay(dt);
    digitalWrite(buzzpin , LOW);
  }
  analogWrite(ledpin , i);
}

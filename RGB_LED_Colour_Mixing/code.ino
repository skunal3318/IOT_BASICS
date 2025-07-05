int redpin = 8;
int greenpin = 9;
int bluepin = 10;
String ledcolor;
String msg = "Which colour led you wanna glow ??";

void setup(){
  pinMode(redpin , OUTPUT);
  pinMode(greenpin , OUTPUT);
  pinMode(bluepin , OUTPUT);
  Serial.begin(9600);
}

void loop(){
  Serial.println(msg);
  while(Serial.available() == 0){
    
  }
  ledcolor = Serial.readString();
  if(ledcolor == "RED" || ledcolor == "red" || ledcolor == "Red"){
    Serial.println("Red led glown ..!");
    digitalWrite(redpin , HIGH);
    digitalWrite(greenpin , LOW);
    digitalWrite(bluepin , LOW);
    
  }
  if(ledcolor == "Green" || ledcolor == "grean" || ledcolor == "GREEN"){
    Serial.println("Green led glown ..!");
    digitalWrite(redpin , LOW);
    digitalWrite(greenpin , HIGH);
    digitalWrite(bluepin , LOW);
  }
  if(ledcolor == "BLUE" || ledcolor == "blue" || ledcolor == "Blue"){
    Serial.println("Blue led glown ..!");
    digitalWrite(redpin , LOW);
    digitalWrite(greenpin , LOW);
    digitalWrite(bluepin , HIGH);
  }
  if(ledcolor == "aqua" || ledcolor == "AQUA" || ledcolor == "Aqua"){
    Serial.println("Aqua led glown ..!");
    digitalWrite(redpin , LOW);
    analogWrite(greenpin , 125);
    analogWrite(bluepin , 125);
  }
  if(ledcolor == "orange" || ledcolor == "ORANGE" || ledcolor == "Orange"){
    Serial.println("Orange led glown ..!");
    analogWrite(redpin , 255);
    analogWrite(greenpin , 25);
    analogWrite(bluepin , 0);
  }
  if(ledcolor == "magenta" || ledcolor == "MAGENTA" || ledcolor == "Magenta"){
    Serial.println("Magenta led glown ..!");
    analogWrite(redpin , 255);
    analogWrite(greenpin , 0);
    analogWrite(bluepin , 255);
  }
  if(ledcolor == "pink" || ledcolor == "Pink" || ledcolor == "PINK"){
    Serial.println("pink led glown ..!");
    analogWrite(redpin , 200);
    analogWrite(greenpin , 0);
    analogWrite(bluepin , 100);
  }
}

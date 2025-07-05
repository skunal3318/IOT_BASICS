int redpin = 12;
int greenpin = 7;
int bluepin = 6;
String ledcolor;
String welcome = "Welcome to the led simulation ..!";
String msg = "Which colour led you wanna glow ??";
int glowdelay = 500;

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
    delay(glowdelay);
    digitalWrite(redpin , LOW);
    delay(glowdelay);
  }
  if(ledcolor == "Green" || ledcolor == "grean" || ledcolor == "GREEN"){
    Serial.println("Green led glown ..!");
    digitalWrite(greenpin , HIGH);
    delay(glowdelay);
    digitalWrite(greenpin , LOW);
    delay(glowdelay);
  }
  if(ledcolor == "BLUE" || ledcolor == "blue" || ledcolor == "Blue"){
    Serial.println("Blue led glown ..!");
    digitalWrite(bluepin , HIGH);
    delay(glowdelay);
    digitalWrite(bluepin , LOW);
    delay(glowdelay);
  }
}

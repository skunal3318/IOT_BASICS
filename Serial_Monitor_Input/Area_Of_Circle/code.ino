float radius;
String msg = "Enter the radius of your circle :: ";
float area;
String msg2 = "Area of given circle is :: ";
float pie = 3.14;


void setup(){
  Serial.begin(9600);
}

void loop(){
  Serial.print(msg);
  while(Serial.available()== 0){
    
  }
  radius = Serial.parseFloat();
  Serial.println(radius);
  area = radius * radius * pie;
  Serial.print(msg2);
  Serial.println(area);
}

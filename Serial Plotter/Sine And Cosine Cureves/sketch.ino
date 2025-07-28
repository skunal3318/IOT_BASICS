float sinval;
float cosval;
float j;

void setup(){
  Serial.begin(9600);
}

void loop(){
  for(j=0 ; j<=2*3.14159265; j=j+.1){
    sinval = sin(j);
    cosval = cos(j);
    Serial.print(sinval);
    Serial.print(",");
    Serial.println(cosval);
  }
}

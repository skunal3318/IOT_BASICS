byte mybit = 0;
int dt = 1500;

void setup(){
Serial.begin(9600);
}

void loop(){
Serial.print("Decimal :: ");
Serial.print(mybit, DEC);
Serial.print(" , ");
Serial.print("Binary :: ");
Serial.print(mybit, BIN);
Serial.print(" , ");
Serial.print("HexaDecimal :: ");
Serial.println(mybit, HEX);
mybit = mybit+1;
delay(dt);


}

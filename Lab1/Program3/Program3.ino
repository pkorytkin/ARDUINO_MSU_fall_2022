void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Setup done");
  Serial.println("Enter int");
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()>0)
  {
    delay(1000);
    int data= Serial.parseInt();
    
    //Serial.print("Username=");
    //Serial.print("Number=");
    Serial.print(data);
    Serial.print("  ");
    Serial.print(data,BIN);
    Serial.print("  ");
    Serial.print(data,OCT);
    Serial.print("  ");
    Serial.print(data,HEX);
    Serial.print("  ");
    /*Serial.println(data);
    Serial.print("BIN=");
    Serial.println(data,BIN);
    Serial.print("OCT=");
    Serial.println(data,OCT);
    Serial.print("HEX=");
    Serial.println(data,HEX);*/
    //delay(1000);
    while(true);
  }


}

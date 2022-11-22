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
    //delay(1000);
    int data= Serial.parseInt();
    
    //Serial.print("Username=");
    Serial.print("Number=");
    Serial.println(data);
    delay(1000);
    while(true);
  }


}

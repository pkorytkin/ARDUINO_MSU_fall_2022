void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Setup done");
  Serial.println("Enter name");
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()>0)
  {
    delay(1000);
    String data= Serial.readString();
    //Serial.print("Username=");
    Serial.println(data);
    //delay(1000);
  }


}

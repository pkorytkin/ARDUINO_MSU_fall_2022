byte b1;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(14,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  b1=digitalRead(14);
  if(b1==1)
  {
    digitalWrite(13,1);
  }else
  {
    digitalWrite(13,0);
  }
}

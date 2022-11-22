void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Init done");
}

void loop() {
  // put your main code here, to run repeatedly:
  String word="TEXT";
  while(Serial.available()>0)
  {
    String readed=Serial.readStringUntil('\n');
    if(word==readed)
    {
      Serial.println("OK");
    }else
    {
      Serial.println("WRONG");
    }
    if(readed.length()>=5)
    {
      Serial.println("Readed word length is bigger or equal than 5");
    }else
    {
      Serial.println("Readed word length is less than 5");
    }
  }
}

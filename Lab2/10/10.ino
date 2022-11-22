#define LED1 13
#define LED2 4

//Была собрана схема, где при нажатии кнопки 0, а отпускании 1
void setup() {
  Serial.begin(9600);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
}

bool b=false;
void loop() {
  b=!b;
  if(b)
  {
    //MigIt(LED1,100);
    digitalWrite(LED1,HIGH);
  }else
  {
    digitalWrite(LED1,LOW);
  }
  if(!b)
  {
    digitalWrite(LED2,HIGH);
  }else
  {
    digitalWrite(LED2,LOW);
  }
  delay(100);
}

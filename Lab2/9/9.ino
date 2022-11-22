#define LED1 13
#define LED2 4
#define B1 2
#define B2 3
//Была собрана схема, где при нажатии кнопки 0, а отпускании 1
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(B1,INPUT);
  pinMode(B2,INPUT);
}


void loop() {
  //Читаем и инвертируем
  int b1=!digitalRead(B1);
  int b2=!digitalRead(B2);
  if(b1)
  {
    //MigIt(LED1,100);
    digitalWrite(LED1,HIGH);
  }else
  {
    digitalWrite(LED1,LOW);
  }
  if(b2)
  {
    digitalWrite(LED2,HIGH);
  }else
  {
    digitalWrite(LED2,LOW);
  }

  delay(10);
}

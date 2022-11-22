#define B1 2
#define LED 13
bool value;
//Была собрана схема, где при нажатии кнопки 0, а отпускании 1
void setup() {

  
  pinMode(13,OUTPUT);
  pinMode(2,INPUT);
}

void loop() {
  //Инвертируем
  value=!digitalRead(B1);
  if(value){
    digitalWrite(LED,1);
    //Serial.println(b1);
  }else
  {
    digitalWrite(LED,0);
  }
}

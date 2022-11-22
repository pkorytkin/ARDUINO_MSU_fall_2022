#define B1 2
#define LED 13
bool value;
//Была собрана схема, где при нажатии кнопки 1, а отпускании 0
void setup() {

  
  pinMode(13,OUTPUT);
  pinMode(2,INPUT);
}

void loop() {
  //Инвертирование не требуется
  value=digitalRead(B1);
  if(value){
    digitalWrite(LED,1);
    //Serial.println(b1);
  }else
  {
    digitalWrite(LED,0);
  }
}

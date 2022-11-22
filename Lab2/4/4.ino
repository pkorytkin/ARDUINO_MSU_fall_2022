#define B1 2
#define B2 3
#define LED 13
//Была собрана схема, где при нажатии кнопки 0, а отпускании 1
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  pinMode(B1,INPUT);
  pinMode(B2,INPUT);
}

void loop() {
  //Инвертируем
  bool b1=!digitalRead(B1);
  bool b2=!digitalRead(B2);
  //Serial.println(b1);
  if(b1){
    Serial.println(B1);
  }
  if(b2){
    Serial.println(B2);
  }
  delay(10);
}

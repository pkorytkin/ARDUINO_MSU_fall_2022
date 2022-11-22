void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}
///
///Включает и отключает светодиод
///
void iMig(int d)
{
  //13й пин включаем
  digitalWrite(13,1);
  delay(d);
  digitalWrite(13,0);
  delay(d);
  return;
}
void loop() {
  //Мигание
  iMig(1000);

  while(Serial.available()==0)
  {

  }
  //Данные пришли. Мигаем снова. Задержка 2 сек.
  iMig(1000);

  int val=Serial.read();

  Serial.println(val);


}

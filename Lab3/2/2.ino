#define A3 3 
#define LED1 8
int analogPin=A3;//потенциометр 10 кОм (средний вывод) подключён к аналоговому выводу А3.
//Крайние выводы соединены с землёй и 5В.
int val=0;
//float voltage=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED1,OUTPUT);
  Serial.begin(9600);
}
bool lastValue=false;
void loop() {
  // put your main code here, to run repeatedly:
  val=analogRead(analogPin);
  //voltage=val*5.0/1024;
  if(val>512)
  {
    digitalWrite(LED1,HIGH);
  }else
  {
    if(lastValue)
    {
      digitalWrite(LED1,HIGH);
      
    }else
    {
      digitalWrite(LED1,LOW);
    }
    delay(100);
    lastValue=!lastValue;
  }
  Serial.println(analogPin);
}

#define A3 3 
#define LED1 8
#define LED2 13
int analogPin=A3;//потенциометр 10 кОм (средний вывод) подключён к аналоговому выводу А3.
//Крайние выводы соединены с землёй и 5В.
int val=0;
//float voltage=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  Serial.begin(9600);
}
int lastVal=0;
void loop() {
  // put your main code here, to run repeatedly:
  val=analogRead(analogPin);
  if(val<lastVal)
  {
    digitalWrite(LED2,HIGH);
    delay(100);
    digitalWrite(LED2,LOW);
    delay(100);
  }
  if(val>lastVal)
  {
    digitalWrite(LED1,HIGH);
    delay(100);
    digitalWrite(LED1,LOW);
    delay(100);
  }
  Serial.println(val);
  lastVal=val;
}

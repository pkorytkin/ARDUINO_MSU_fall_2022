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
bool ValueSaved=false;
int PassID=-1;
void loop() {
  // put your main code here, to run repeatedly:
  val=analogRead(analogPin);
  if(!ValueSaved){
    if(Serial.available()){
      PassID=Serial.parseInt();
      ValueSaved=true;
    }
  }
  if(val>1023)
  {
    val=1023;
  }else
  if(val<0){
    val=0;
  }
  if((PassID-10<val)&&(PassID+10>val))
  {
    digitalWrite(LED1,HIGH);
  }else
  {
    digitalWrite(LED1,LOW);
  }

}

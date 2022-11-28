#define A3 3 
int analogPin=A3;//потенциометр 10 кОм (средний вывод) подключён к аналоговому выводу А3.
//Крайние выводы соединены с землёй и 5В.
int val=0;
float voltage=0;
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val=analogRead(analogPin);
  voltage=val*5.0/1024;
  Serial.println(voltage);
}

#define LED 13
#define B1 2
#define B2 3
//Была собрана схема, где при нажатии кнопки 0, а отпускании 1
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  pinMode(B1,INPUT);
  pinMode(B2,INPUT);
}
int b1_lastFrame=0;
int b2_lastFrame=0;
void loop() {
  int b1=!digitalRead(B1);
  int b2=!digitalRead(B2);


  if(b1>b1_lastFrame){
    Serial.println(B1);
    
  }
  if(b2>b2_lastFrame){
    Serial.println(B2);
  }
  b1_lastFrame=b1;
  b2_lastFrame=b2;
  delay(10);
}

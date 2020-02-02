#include<Servo.h>

Servo myservo;
unsigned int angle;
void setup() {
  // put your setup code here, to run once:
  myservo.attach(10);
  Serial.begin(9600);
  Serial.print("Enter angle:");
}

void loop() {
  // put your main code here, to run repeatedly:
 while(Serial.available()==0){
  }
  delay(100);
  angle=Serial.parseInt();
  Serial.println(angle);
  if(angle==101){
  myservo.write(0);}
else if(angle>0)
 {
  myservo.write(angle);
 }
  Serial.print("Enter angle:");
}

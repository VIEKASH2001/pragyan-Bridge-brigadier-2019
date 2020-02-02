#include<Servo.h>

Servo myservo1,myservo2;
unsigned int angle;
int c;

void setup() {
  // put your setup code here, to run once:
  myservo1.attach(8);
  myservo2.attach(9);
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
//angle=map(angle,0,180,0,151);
if(angle==101){
  myservo2.write(180);
  myservo1.write(0);}
else if(angle>0)
 {
  myservo2.write(180-angle);
  myservo1.write(angle);
  }
  Serial.print("Enter angle:");
}

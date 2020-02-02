#include<Servo.h>
int pos=0;
int servoPin=A0;
int servoDelay=0;
int c;
Servo myPointer;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myPointer.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
c=Serial.parseInt();     
Serial.println(c);
switch(c)
{
  case 1:for(pos=5;pos<=170;pos=pos+1) //up
         {
           myPointer.write(pos);
           delay(servoDelay);
         }
  case 2:for(pos=170;pos>-5;pos=pos-1) //down
         {
          myPointer.write(pos);
          delay(servoDelay);
         } 
   default:;     
}       
}

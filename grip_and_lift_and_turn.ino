#include<Servo.h>

Servo myservo1,myservo2,myservo3,myservo4,myservo5;
unsigned int angle;
unsigned int c,x;

void setup() {
  // put your setup code here, to run once1
  myservo1.attach(7); //grip
  myservo2.attach(6); //grip
  myservo3.attach(8); //lift
  myservo4.attach(9); //lift
  myservo5.attach(10); //turn
  Serial.begin(9600);
  Serial.print("Enter the angle +1000 grip      +2000 lift      +3000 turn \n");
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()==0){
  }
  delay(100);
  
  c=Serial.parseInt();
  Serial.println(c);
  if(c>0)
  {
    x=c/1000;
  switch(x)
  {
    case 1:angle= c%1000;   //grip
           Serial.print("Grip ");
           Serial.println(angle);
           if(angle==1){
           myservo2.write(180);
           myservo1.write(0);}
           else if(angle>0)
           {
            myservo2.write(180-angle);
            myservo1.write(angle);
           }
           Serial.print("Enter angle:");
           break;
   
    case 2:angle=c%2000;    //lift
           Serial.print("Lift");
           Serial.println(angle);
           if(angle==1){
           myservo4.write(180);
           myservo3.write(0);}
           else if(angle>0)
           {
            myservo4.write(180-angle);
            myservo3.write(angle);
           }
           Serial.print("Enter angle:");
           break;
     case 3:angle=c%3000; //turn
            Serial.print("Turn");
            Serial.println(angle);
            if(angle==1){
            myservo5.write(0);}
            else if(angle>0)
            {
             myservo5.write(angle);
            }
            Serial.print("Enter angle:");     
  }
  }
  
}


#define in1 2 //Connect the in1 to pin 4 of arduino nano 
#define in2 3 
#define in3 4 
#define in4 5 
#define in5 6 //Connect the in1 to pin 4 of arduino nano 
#define in6 7 
#define in7 8 
#define in8 9
#include<Servo.h>

Servo myservo1,myservo2,myservo3,myservo4,myservo5;

int c;


void setup() { 
  myservo3.attach(12); //lift
  myservo4.attach(11); //lift
  
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(in5,OUTPUT);
  pinMode(in6,OUTPUT);
  pinMode(in7,OUTPUT);
  pinMode(in8,OUTPUT);
  Serial.begin(9600);
}
void loop() { 
  c=Serial.parseInt();   
  Serial.println(c); //Prints the read user input on the serial monitor 
  switch(c) 
  { case 1: digitalWrite(in1,LOW);   //FORWARD
            digitalWrite(in2,HIGH); 
            digitalWrite(in3,LOW); 
            digitalWrite(in4,HIGH); 
            digitalWrite(in5,HIGH);   //FORWARD
            digitalWrite(in6,LOW); 
            digitalWrite(in7,HIGH); 
            digitalWrite(in8,LOW);
            break; 
            
    case 2: digitalWrite(in1,LOW); //LEFT 
            digitalWrite(in2,HIGH); 
            digitalWrite(in3,HIGH); 
            digitalWrite(in4,LOW); 
            digitalWrite(in5,HIGH); //LEFT 
            digitalWrite(in6,LOW); 
            digitalWrite(in7,LOW); 
            digitalWrite(in8,HIGH);
            break; 
               
     case 3: digitalWrite(in1,HIGH); //RIGHT 
             digitalWrite(in2,LOW); 
             digitalWrite(in3,LOW); 
             digitalWrite(in4,HIGH); 
             digitalWrite(in5,LOW); //RIGHT 
             digitalWrite(in6,HIGH); 
             digitalWrite(in7,HIGH); 
             digitalWrite(in8,LOW);
             break;
             
     case 4: digitalWrite(in1,HIGH); //BACK 
             digitalWrite(in2,LOW);  
             digitalWrite(in3,HIGH); 
             digitalWrite(in4,LOW); 
             digitalWrite(in5,LOW); //BACK 
             digitalWrite(in6,HIGH);  .
             digitalWrite(in7,LOW); 
             digitalWrite(in8,HIGH);
             break; 
             
     case 5: digitalWrite(in1,LOW); //STOP 
             digitalWrite(in2,LOW); 
             digitalWrite(in3,LOW); 
             digitalWrite(in4,LOW); 
             digitalWrite(in5,LOW); //STOP 
             digitalWrite(in6,LOW); 
             digitalWrite(in7,LOW); 
             digitalWrite(in8,LOW);
             break;
             
     case 6: digitalWrite(in1,LOW);   //FORWARD
            digitalWrite(in2,HIGH); 
            digitalWrite(in3,LOW); 
            digitalWrite(in4,HIGH); 
            digitalWrite(in5,HIGH);   //FORWARD
            digitalWrite(in6,LOW); 
            digitalWrite(in7,HIGH); 
            digitalWrite(in8,LOW);
            delay(300);
            digitalWrite(in1,LOW); //STOP 
             digitalWrite(in2,LOW); 
             digitalWrite(in3,LOW); 
             digitalWrite(in4,LOW); 
             digitalWrite(in5,LOW); //STOP 
             digitalWrite(in6,LOW); 
             digitalWrite(in7,LOW); 
             digitalWrite(in8,LOW);
            break;
            
     case 7: digitalWrite(in1,LOW); // CONTROLLED LEFT 
            digitalWrite(in2,HIGH); 
            digitalWrite(in3,HIGH); 
            digitalWrite(in4,LOW); 
            digitalWrite(in5,HIGH); // CONTROLLED LEFT 
            digitalWrite(in6,LOW); 
            digitalWrite(in7,LOW); 
            digitalWrite(in8,HIGH);
            delay(300);
            digitalWrite(in1,LOW); //STOP 
             digitalWrite(in2,LOW); 
             digitalWrite(in3,LOW); 
             digitalWrite(in4,LOW); 
             digitalWrite(in5,LOW); //STOP 
             digitalWrite(in6,LOW); 
             digitalWrite(in7,LOW); 
             digitalWrite(in8,LOW);
            break;
            
     case 8: digitalWrite(in1,HIGH); // CONTROLLED RIGHT 
             digitalWrite(in2,LOW); 
             digitalWrite(in3,LOW); 
             digitalWrite(in4,HIGH); 
             digitalWrite(in5,LOW); // CONTROLLED RIGHT 
             digitalWrite(in6,HIGH); 
             digitalWrite(in7,HIGH); 
             digitalWrite(in8,LOW);
             delay(300);
             digitalWrite(in1,LOW); //STOP 
             digitalWrite(in2,LOW); 
             digitalWrite(in3,LOW); 
             digitalWrite(in4,LOW); 
             digitalWrite(in5,LOW); //STOP 
             digitalWrite(in6,LOW); 
             digitalWrite(in7,LOW); 
             digitalWrite(in8,LOW);
            break;
            
     case 9: digitalWrite(in1,HIGH); //BACK 
             digitalWrite(in2,LOW);  
             digitalWrite(in3,HIGH); 
             digitalWrite(in4,LOW); 
             digitalWrite(in5,LOW); //BACK 
             digitalWrite(in6,HIGH);  
             digitalWrite(in7,LOW); 
             digitalWrite(in8,HIGH);
              delay(300);
            digitalWrite(in1,LOW); //STOP 
             digitalWrite(in2,LOW); 
             digitalWrite(in3,LOW); 
             digitalWrite(in4,LOW); 
             digitalWrite(in5,LOW); //STOP 
             digitalWrite(in6,LOW); 
             digitalWrite(in7,LOW); 
             digitalWrite(in8,LOW);
            break;
     
     case 10:myservo4.write(180-10);
            myservo3.write(10);  
            break;
    case 20:myservo4.write(180-20);
            myservo3.write(20);  
            break;
     case 30:myservo4.write(180-30);
            myservo3.write(30);  
            break;
     case 40:myservo4.write(180-40);
            myservo3.write(40);  
            break;
     case 50:myservo4.write(180-50);
            myservo3.write(50);  
            break;
     case 60:myservo4.write(180-60);
            myservo3.write(60);  
            break;
    case 70:myservo4.write(180-70);
            myservo3.write(70);  
            break;
   case 80:myservo4.write(180-80);
            myservo3.write(80);  
            break;
    case 90:myservo4.write(180-90);
            myservo3.write(90);  
            break;
    case 100:myservo4.write(180-100);
            myservo3.write(100);  
            break;
    case 110:myservo4.write(180-110);
            myservo3.write(110);  
            break;
    case 120:myservo4.write(180-120);
            myservo3.write(120);  
            break;
            
            
    
    
 }
}

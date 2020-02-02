#define in1 8//Connect the in1 to pin 4 of arduino nano 
#define in2 9 
#define in3 10 
#define in4 11
#define in5 2 //Connect the in1 to pin 4 of arduino nano 
#define in6 3 
#define in7 4 
#define in8 5
int c;
void setup() { 
  Serial.begin(9600);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(in5,OUTPUT);
  pinMode(in6,OUTPUT);
  pinMode(in7,OUTPUT);
  pinMode(in8,OUTPUT);
}
void loop() { 
  c=Serial.parseInt();   
  Serial.println(c); //Prints the read user input on the serial monitor 
  switch(c) 
  { case 1:  
     digitalWrite(in1,1); //forward
     digitalWrite(in2,0);
     digitalWrite(in3,1);
     digitalWrite(in4,0);
     digitalWrite(in5,1); 
     digitalWrite(in6,0);
     digitalWrite(in7,1);
     digitalWrite(in8,0);

            break; 
    case 2: 
     digitalWrite(in1,0); //right 
     digitalWrite(in2,1);
     digitalWrite(in3,1);
     digitalWrite(in4,0);
     digitalWrite(in5,0); 
     digitalWrite(in6,1);
     digitalWrite(in7,1);
     digitalWrite(in8,0);
            break;    
     case 3: digitalWrite(in1,0); //backward
     digitalWrite(in2,1);
     digitalWrite(in3,0);
     digitalWrite(in4,1);
     digitalWrite(in5,0); 
     digitalWrite(in6,1);
     digitalWrite(in7,0);
     digitalWrite(in8,1);
             break;
     case 4:  
     digitalWrite(in1,1); //left
     digitalWrite(in2,1);
     digitalWrite(in3,0);
     digitalWrite(in4,0);
     digitalWrite(in5,1); 
     digitalWrite(in6,1);
     digitalWrite(in7,0);
     digitalWrite(in8,0);
             break; 
     case 5: 
             digitalWrite(in1,LOW); //STOP 
             digitalWrite(in2,LOW); 
             digitalWrite(in3,LOW); 
             digitalWrite(in4,LOW); 
             digitalWrite(in5,LOW); //STOP 
             digitalWrite(in6,LOW); 
             digitalWrite(in7,LOW); 
             digitalWrite(in8,LOW);
             break;  
    
 }
}

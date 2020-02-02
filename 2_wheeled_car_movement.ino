#define in1 6 //Connect the in1 to pin 4 of arduino nano 
#define in2 9 
#define in3 10 
#define in4 11
int c;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  c=Serial.parseInt();   
  Serial.println(c); //Prints the read user input on the serial monitor 
  switch(c) 
  { case 1:  
     analogWrite(in1,242); //forward
     analogWrite(in2,0);
     analogWrite(in3,242);
     analogWrite(in4,0);
     

            break; 
    case 2: 
    analogWrite(in1,0); //right
     analogWrite(in2,204);
     analogWrite(in3,255);
     analogWrite(in4,0);
            break;    
     case 3: digitalWrite(in1,0); //backward
     digitalWrite(in2,1);
     digitalWrite(in3,0);
     digitalWrite(in4,1);
             break;
     case 4:  
     analogWrite(in1,255); //left
     analogWrite(in2,0);
     analogWrite(in3,0);
     analogWrite(in4,230);
     
             break; 
     case 5: 
             digitalWrite(in1,0); //STOP 
             digitalWrite(in2,0); 
             digitalWrite(in3,0); 
             digitalWrite(in4,0); 
             
             break;  
    
 }
}

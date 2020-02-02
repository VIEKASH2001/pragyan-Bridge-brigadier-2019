
#include <IRremote.h>
#include <IRremoteInt.h>

#include<Servo.h>


Servo myservo;

/* define IR sensor pin */
int IRsensorPin = 8;

/* define the some functions used by the library */
IRrecv irrecv(IRsensorPin);
decode_results results;




void setup() {
  // put your setup code here, to run once:
  myservo.attach(11);
  Serial.begin(9600);
  irrecv.enableIRIn();
}




void loop() {
  // put your main code here, to run repeatedly:


    
  /* if the sensor is receive any signal */
  if (irrecv.decode(&results))
  {
    
    /* print the hex code value on the serial monitor */
    Serial.println(results.value,HEX);
    delay(5);

    /* resume function according to hex code */
    irrecv.resume();
  }

  if((results.value,HEX)== 0x20DF8877) //1
    myservo.write(0);

  if((results.value,HEX) ==0x20DF48B7) //2
    myservo.write(60);

 
  
  
  
  
}

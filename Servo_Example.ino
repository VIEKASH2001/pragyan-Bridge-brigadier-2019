#include<Servo.h>
int pos=0;
int servoPin=A0;
int servoDelay=0;
Servo myPointer;
void setup()
{Serial.begin(9600);
myPointer.attach(servoPin);
}
void loop()
{for(pos=5;pos<=170;pos=pos+1)
{
  myPointer.write(pos);
  delay(servoDelay);
}
for(pos=170;pos>-5;pos=pos-1)
{myPointer.write(pos);
delay(servoDelay);
}
}

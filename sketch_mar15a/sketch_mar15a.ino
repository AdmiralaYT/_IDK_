#include <Servo.h>

Servo myservo;

int pos=180;
  
void setup() 
{
myservo.attach(9);
}

void loop()
{
 for(pos=180;pos<1;pos-=1)
 {  
 myservo.write(pos);
 delay(15);
 }
 for(pos=0;pos<=180;pos++)
 {
 myservo.write(pos);
   delay(15); 
 }
}

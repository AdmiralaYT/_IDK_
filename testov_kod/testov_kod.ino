
#include <Servo.h>
#include <Stepper.h>

const int stepsPerRevolution = 200;

Stepper stupkovMotor(stepsPerRevolution, 13, 12, 7, 4);

int stepCount = 0;

Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;


int pos = 180;
  
void setup() 
{
/*myservo1.attach(7);
myservo2.attach(9);
myservo3.attach(10);
myservo4.attach(11);
*/stupkovMotor.setSpeed(15);
}

void loop()
{
 /*for(pos=180;pos<1;pos-=1)
 
 {
  delay(15);  
 myservo1.write(pos);
 myservo2.write(pos);
 myservo3.write(pos);
 myservo4.write(pos);
 }*/
 while (1){ 
 stupkovMotor.step(2000);
  //delay(300);
 }
}
   

<<<<<<< HEAD
=======

>>>>>>> cd24213d39852cee0c8866b6ae9cfa4450a14416
#include <Servo.h>
#include <Stepper.h>

const int stepsPerRevolution = 200;

Stepper stupkovMotor(stepsPerRevolution, 8, 9, 10, 11);

int stepCount = 0;

Servo myservo;

int pos=180;
  
void setup() 
{
<<<<<<< HEAD
myservo.attach(9);
=======
myservo1.attach(7);
myservo2.attach(9);
myservo3.attach(10);
myservo4.attach(11);
stupkovMotor.setSpeed(100);
>>>>>>> cd24213d39852cee0c8866b6ae9cfa4450a14416
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
<<<<<<< HEAD
}
=======
 while (1){ 
 stupkovMotor.step(20);
  delay(300);
 }
}
   
>>>>>>> cd24213d39852cee0c8866b6ae9cfa4450a14416

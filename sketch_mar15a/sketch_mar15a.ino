#include <Stepper.h>


const int stepsPerRevolution = 200;

Stepper stupkovMotor(stepsPerRevolution, 8, 9, 10, 11);

int stepCount = 0;

void setup() {
stupkovMotor.setSpeed(100);

}

void loop(){
stupkovMotor.step(20);
  delay(300);
}

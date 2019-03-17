#include <Servo.h>
#include <Stepper.h>
#include <SoftwareSerial.h>
#include <stdio.h>
SoftwareSerial BTserial(2, 3); // RX | TX
// Connect the HC-06 TX to the Arduino RX on pin 2. 
// Connect the HC-06 RX to the Arduino TX on pin 3 through a voltage divider.
// 

const int stepsPerRevolution = 200;

Stepper stupkovMotor(stepsPerRevolution, 13, 12, 7, 4);

int stepCount = 0;

Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;

int pos1 = 180;
int pos2 = 90;
int pos3 = 90;
int pos4 = 90;
  
void setup() 
{
myservo1.attach(7);
myservo2.attach(9);
myservo3.attach(10);
myservo4.attach(11)
stupkovMotor.setSpeed(15);
Serial.begin(9600);
  Serial.println("Enter AT commands:");
  BTserial.begin(9600);  
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
  int recv_byte6;
  int recv_byte7;
 //stupkovMotor.step(2000);

 if (BTserial.available() > 0)
 {
 BTserial.read();
 BTserial.read();
 BTserial.read();
 BTserial.read();
 BTserial.read();
 recv_byte6 = BTserial.read();
 Serial.println(recv_byte6);
 recv_byte7 = BTserial.read();
 Serial.println(recv_byte7);
 BTserial.read();
 BTserial.read();
 BTserial.read();
 BTserial.read();
 BTserial.read();
 BTserial.read();
 BTserial.read();
 BTserial.read();
 BTserial.read();
 if (recv_byte6 != 0)
 {
 if (recv_byte6 == 16)
 
 {
pos3 -= 1;
myservo3.write(pos3);
  
 }
 }
 }
  
 }

/*
Enable A,in1 = 8,in2 = 9,in3 = 10 ,in4 = 11,Enable B

*/

#include<Stepper.h>
#include <EEPROM.h>
#include<Servo.h>
Servo j1;
Servo j2;

Stepper myStepper(200,8,9,10,11);
int x = 0; // This is from Zeroing.ino
int current_position;




void setup() 
{
  setupServo();
  Serial.begin(9600);   
  setupStepper();
  //task(); stepper test
  //testServo();
  movej1(3.14);
  movej2(3.14);
  delay(2000);
  movej1(-3.14);
  movej2(-3.14);
  delay(2000);
  
  
}

void loop() 
{



}


 void setupStepper(){// 
  eepRead();
  myStepper.setSpeed(50);
  myStepper.step(-1*current_position);
  eepWrite(0);
  
 }
void moveStepper(double radian_command)
{
  int step_command = radToStep(radian_command);

  
  // Recheck current position and set Zero
  eepRead();// get current pose
  myStepper.step(-1*current_position);
  /* eepWrite(0); */

  // Move 
  if(step_command>90 || step_command<-90) errorRobot();
  else
  {
    myStepper.step(step_command);
    eepWrite(step_command);
  }
}

//void moveStepper(int step_command)
//{
//  
//  // Recheck current position and set Zero
//  eepRead();// get current pose
//  myStepper.step(-1*current_position);
//  // eepWrite(0);
//
//  // Move 
//  if(step_command>90 || step_command<-90) errorRobot();
//  else
//  {
//    myStepper.step(step_command);
//    eepWrite(step_command);
//  }
//}

//--------------------------------------------------------------//

 void task()
 {
  moveStepper(1.3);
  delay(1000);
  moveStepper(-1.3);
  delay(1000);
  
 }

 void errorRobot()
 {
  for(int i=0;i<=5;i++)

  {
   moveStepper(10);
   delay(200);
   moveStepper(-10);
   delay(200);
  }
 }


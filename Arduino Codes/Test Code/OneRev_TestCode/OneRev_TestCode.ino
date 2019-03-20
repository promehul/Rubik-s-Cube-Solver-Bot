/*creator: swapnil*/

/*test code to run the steppers after completion of assembly*/

#include <Stepper.h>

const int stepsPerRevolution = 50; 
/*naming the steppers according to the face colors*/


Stepper myStepper_W(stepsPerRevolution, 8, 9, 10, 11);

Stepper myStepper_B(stepsPerRevolution, 22, 23, 24, 25);

Stepper myStepper_R(stepsPerRevolution, 28, 29, 30, 31);

Stepper myStepper_G(stepsPerRevolution, 34, 35, 36, 37);

Stepper myStepper_Y(stepsPerRevolution, 40, 41, 42, 43);

Stepper myStepper_O(stepsPerRevolution, 46, 47, 48, 49);

void setup() {
  /*set the speed of the stepper. if you want the speed to be high(it can go upto 200 revolutions per minute), you will have to add codes for acceleration and deceleration of steppers*/
  
myStepper_W.setSpeed(50);

myStepper_B.setSpeed(50);

myStepper_R.setSpeed(50);

myStepper_G.setSpeed(50);

myStepper_Y.setSpeed(50);

myStepper_O.setSpeed(50);

  
  
}

void loop(){
  /*simply runs the steppers one by one for 90 degrees with 0.5 second delay in loop*/

  myStepper_W.step(stepsPerRevolution);
  delay(500);
  myStepper_R.step(stepsPerRevolution);
  delay(500);
  myStepper_B.step(stepsPerRevolution);
  delay(500);
  myStepper_G.step(stepsPerRevolution);
  delay(500);
  myStepper_Y.step(stepsPerRevolution);
  delay(500);
  myStepper_O.step(stepsPerRevolution);
  delay(500);
 
}

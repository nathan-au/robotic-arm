#include "Stepper.h"

const int stepsPerRevolution = 2048;

Stepper myStepper = Stepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  myStepper.setSpeed(18); //18 rpm is max
}

void loop() {
  myStepper.step(1);
}

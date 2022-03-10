#include "main.h"

void setLift(int power) {
    lift = power;
}


void setLiftMotor() {
    int liftPower = (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2) - controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1));
    setLift(liftPower);
}
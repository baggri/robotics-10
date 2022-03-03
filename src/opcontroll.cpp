#include "main.h"

void opcontrol() {
  while(true) {
    setDriveMotors();
    pros::delay(10);
  }
}

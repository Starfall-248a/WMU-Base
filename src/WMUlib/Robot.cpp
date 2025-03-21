#include "main.h"

#include "pros/motor_group.hpp"

pros::Controller controller_pros(pros::E_CONTROLLER_MASTER);

/* Drive motors*/
pros::MotorGroup driveLeft({1, 2, 3, 4}); // Front to back
pros::MotorGroup driveRight({5, 6, 7, 8}); // Front to back

pros::Imu imu1(9);
pros::Imu imu2(10);

pros::Rotation vertEnc(11);   // Vertical encoder
pros::Rotation horizEnc(12);  // Horizontal encoder

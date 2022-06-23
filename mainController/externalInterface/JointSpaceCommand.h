#ifndef __INPUTCOMMAND__
#define __INPUTCOMMAND__

#include "ControlMode.h"

struct JointSpaceCommand
{
    ControlMode mode;
    float angle1;
    float angle2;
    float torque1;
    float torque2;
};

#endif
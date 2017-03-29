#include <iostream>
#include "../include/RobotRotation.h"
#include "../defines.h"

RobotRotation::RobotRotation()
{
    //ctor
    #ifdef _DEBUG
    std::cout << "New RobotRotation instance" << std::endl;
    #endif // _DEBUG
}

RobotRotation::~RobotRotation()
{
    //dtor
    #ifdef _DEBUG
    std::cout << "Destroying RobotRotation instance" << std::endl;
    #endif // _DEBUG
}

void RobotRotation::setAngle(double ang) {

    angle = ang;

    std::cout << "Setting robot rotation angle to " << angle << "rad" << std::endl;

}

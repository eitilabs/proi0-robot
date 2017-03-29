#include <iostream>
#include "../include/RobotDrive.h"
#include "../defines.h"

RobotDrive::RobotDrive()
{
    //ctor
        #ifdef _DEBUG
    std::cout << "New RobotDrive instance" << std::endl;
    #endif // _DEBUG



}

RobotDrive::~RobotDrive()
{
    //dtor
    #ifdef _DEBUG
    std::cout << "Destroying RobotDrive instance" << std::endl;
    #endif // _DEBUG
}



void RobotDrive::driveForward(double distance) {

    std::cout << "Driving forward " << distance << " units" << std::endl;

    position += distance;

}

void RobotDrive::driveBackwards(double distance) {


    std::cout << "Driving backwards " << distance << " units" << std::endl;

    position -= distance;

}

double RobotDrive::getPosition() {

    return position;

}



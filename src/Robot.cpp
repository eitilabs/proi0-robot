#include <iostream>
#include <cmath>
#include "../include/RobotDrive.h"
#include "../include/RobotRotation.h"
#include "../include/RobotWeapons.h"
#include "../include/Robot.h"
#include "../defines.h"




Robot::Robot()
{
    //ctor
    #ifdef _DEBUG
    std::cout << "New robot instance" << std::endl;
    #endif // _DEBUG

  //  instances[0]++;
  totalInstances++;

}

Robot::~Robot()
{
    //dtor
    #ifdef _DEBUG
    std::cout << "Destroying robot instance" << std::endl;
    #endif // _DEBUG


}



int Robot::shootTarget(int x, int y) {

/*
    Robot->shootTarget
        calculates if target is in range
        if in range, rotates the robot and shoots it
        else checks if it can drive to be closer and shoot
        else if not in range at all, exits

*/

    //disallow x, y < 0

    if (x < 0 || y < 0) {

        std::cout << "Negative coordinates are not allowed." << std::endl;

        return -1;

    }


    double range = 500;

    double robotY = drive.getPosition(); //robot drives along X axis, so robotX would be always 0

    double distanceToTarget = sqrt(x * x + (y - robotY) * (y - robotY));

    double rotationAngle;

    std::cout << "Distance to target: " <<  distanceToTarget << std::endl;

    if (distanceToTarget <= range) {

        std::cout << "Target within range" << std::endl;

        rotationAngle = asin(y / distanceToTarget);

        if (y < robotY)
            rotationAngle += 3/14 / 2;

        rotation.setAngle(rotationAngle);

        if (weapons.shoot() == -1) {

            weapons += 1;
            weapons.shoot();

        }




    }

    else if (x <= range) { //if the robot can get close to the target

        std::cout << "Driving closer to target" << std::endl;

        //rotate the robot in the direction of movement

        if (y > robotY) {

            rotation.setAngle(0);
            drive.driveForward(y - robotY);

        }

        else {

            rotation.setAngle(3.14);
            drive.driveBackwards(robotY - y);

        }

        //rotate to target
        rotation.setAngle(3.14/2);
        weapons.shoot();

    }

    else {

        std::cout << "Target out of range" << std::endl;

        return -1;

    }

    return 0;

}

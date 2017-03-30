#ifndef ROBOT_H
#define ROBOT_H

#include "RobotDrive.h"
#include "RobotWeapons.h"
#include "RobotRotation.h"

class Robot
{
    public:
        Robot();
        virtual ~Robot();
        void rotate(double ang);
        void walk(double distance);
        double getPositionX();
        double getPositionY();
        int shootTarget(int, int);
        static int totalInstances;

    protected:

    private:
        double angle;
        double positionX;
        double positionY;
        RobotDrive drive;
        RobotWeapons weapons;
        RobotRotation rotation;
};

#endif // ROBOT_H

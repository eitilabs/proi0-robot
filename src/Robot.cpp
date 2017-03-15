#include <iostream>
#include "../include/Robot.h"

Robot::Robot()
{
    //ctor
    std::cout << "New robot instance" << std::endl;
}

Robot::~Robot()
{
    //dtor
}

void Robot::rotate(double ang) {

    angle += ang;


}

void Robot::walk(double distance) {

    positionX += distance;


}

double Robot::getPositionX() {

    return positionX;

}

double Robot::getPositionY() {

    return positionY;

}

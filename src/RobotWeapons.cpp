#include <iostream>
#include "../include/RobotWeapons.h"
#include "../defines.h"

RobotWeapons::RobotWeapons()
{
    //ctor

    #ifdef _DEBUG
    std::cout << "New RobotWeapons instance" << std::endl;
    #endif // _DEBUG

    rounds = 10;

}

RobotWeapons::~RobotWeapons()
{
    //dtor
    #ifdef _DEBUG
    std::cout << "New RobotWeapons instance" << std::endl;
    #endif // _DEBUG
}


int RobotWeapons::shoot() {



    if (rounds > 0) {

        std::cout << "Firing weapons" << std::endl;
        rounds--;

    }
    else {

        std::cout << "Out of ammo" << std::endl;

    }

    return rounds;


}

int RobotWeapons::getRoundsCount() {


    return rounds;

}

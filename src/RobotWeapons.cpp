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

int RobotWeapons::operator +=( const int & a) {

    rounds += a;

    return rounds;

}

RobotWeapons::~RobotWeapons()
{
    //dtor
    #ifdef _DEBUG
    std::cout << "Destroying RobotWeapons instance" << std::endl;
    #endif // _DEBUG
}


int RobotWeapons::shoot() {



    if (rounds > 0) {

        std::cout << "Firing weapons" << std::endl;
        rounds--;

    }
    else {

        std::cout << "Out of ammo" << std::endl;

        return -1;

    }

    return rounds;


}

int RobotWeapons::getRoundsCount() {


    return rounds;

}

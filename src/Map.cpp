#include <iostream>
#include "../include/Map.h"

Map::Map()
{
    //ctor
    std::cout << "New Map instance" << std::endl;


}

Map::~Map()
{
    //dtor
}

int Map::getSizeX() {

    return sizeX;

}



int Map::getSizeY() {

    return sizeY;

}

void Map::setSize(int x, int y) {

    sizeX = x;

    sizeY = y;

}

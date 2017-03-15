#include <iostream>
#include "include/Robot.h"
#include "include/Map.h"

using namespace std;

int main()
{

    cout << "Hello world!" << endl;

    Map mapInstance;

    mapInstance.setSize(500, 500);

    cout << mapInstance.getSizeX() << " " << mapInstance.getSizeY() << endl;

    Robot robot1;

    robot1.walk(200);

    cout << "The robot position is (" << robot1.getPositionX() << ", " << robot1.getPositionY() << ")" << endl;

    return 0;


}

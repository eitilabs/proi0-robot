#define _DEBUG

#include <iostream>
#include "include/Robot.h"
#include "include/Map.h"
#include "include/RobotDrive.h"
#include "include/RobotWeapons.h"

using namespace std;

int main()
{

/*

    Program symuluje prostego robota wojskowego ktory porusza sie wzdluz jednej osi, moze obracac sie i strzelac

    Uzytkownik zadaje cel w postaci wspolrzednych x, y

*/

    cout << "Hello world!" << endl;

    int Robot::instances[4] = { 0, 0, 0, 0};

    Robot* robot1 = new Robot();

    //robot1->shootTarget(50, 55);

    int x, y;

    while (1) {

        cout << "Enter target coordinates. (Negative to exit)";

        cin >> x;

        if (x < 0)
            break;

        cin >> y;

        robot1->shootTarget(x, y);


    }

    delete robot1;


    return 0;


}

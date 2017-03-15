#ifndef ROBOT_H
#define ROBOT_H


class Robot
{
    public:
        Robot();
        virtual ~Robot();
        void rotate(double ang);
        void walk(double distance);
        double getPositionX();
        double getPositionY();


    protected:

    private:
        double angle;
        double positionX;
        double positionY;
};

#endif // ROBOT_H

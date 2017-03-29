#ifndef ROBOTROTATION_H
#define ROBOTROTATION_H


class RobotRotation
{
    public:
        RobotRotation();
        virtual ~RobotRotation();
        void rotateRight(double);
        void RotateLeft(double);
        double getAngle();
        void setAngle(double );

    protected:

    private:
        double angle;
};

#endif // ROBOTROTATION_H

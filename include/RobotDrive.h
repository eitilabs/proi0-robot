#ifndef ROBOTDRIVE_H
#define ROBOTDRIVE_H


class RobotDrive
{
    public:
        RobotDrive();
        virtual ~RobotDrive();
        void driveForward(double distance);
        void driveBackwards(double distance);
        double getPosition();

    protected:

    private:
        double position;
};

#endif // ROBOTDRIVE_H

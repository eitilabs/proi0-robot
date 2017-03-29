#ifndef ROBOTWEAPONS_H
#define ROBOTWEAPONS_H


class RobotWeapons
{
    public:
        RobotWeapons();
        virtual ~RobotWeapons();
        int shoot();
        int getRoundsCount();

    protected:

    private:
        int rounds;
};

#endif // ROBOTWEAPONS_H

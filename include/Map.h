#ifndef MAP_H
#define MAP_H


class Map
{
    public:
        Map();
        virtual ~Map();
        void setSize(int x, int y);
        int getSizeX();
        int getSizeY();

    protected:

    private:
        int sizeX;
        int sizeY;
};

#endif // MAP_H

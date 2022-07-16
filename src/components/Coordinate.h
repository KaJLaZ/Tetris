#include <string>
#include <iostream>

class Coordinate
{
public:
    int getX() const {
        return x;
    }

    int getY() const {
        return y;
    }

private:
    int x;
    int y;
};
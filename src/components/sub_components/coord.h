#include <string>
#include <iostream>
#include "../../utils/math_utils.h"

class coord
{
public:
    int get_x() const {
        return x;
    }

    int get_y() const {
        return y;
    }

private:
    int x;
    int y;
};

template<>
struct std::hash<coord>
{
    std::size_t operator()(coord const& coord) const
    {
        return std::hash<int>()(math_utils::cantor_func(coord.get_x(), coord.get_y()));
    }
};
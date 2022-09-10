#include <array>
#include "coord.h"

class form {
public:
    const static int BLOCK_SIZE = 4;
private:
    std::array<coord, BLOCK_SIZE> occupied_space_coords;
};


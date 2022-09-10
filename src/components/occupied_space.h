#include <vector>
#include <unordered_set>
#include "sub_components/coord.h"

class occupied_space {
public:
    void add_cords(coord& coordinate){
       //TODO coords.insert(coordinate);
    }

    void remove_cords(coord& coordinate){
      //TODO  coords.insert(coordinate);
    }
private:
    std::unordered_set<coord> coords;
};
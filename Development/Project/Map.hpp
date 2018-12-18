#ifndef MAP_HPP
#define MAP_HPP

#include <vector>
#include "Tile.hpp"

using namespace std;
class Map {
  private:
    unsigned int size;
    vector<Tile *> tiles;
  public:
    void initialize();
};

#endif 
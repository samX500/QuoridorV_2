//
// Created by samx500 on 2021-01-05.
//

#ifndef QUORIDORV_2_WALL_H
#define QUORIDORV_2_WALL_H


#include <vector>

class Wall {

public:
    enum Orientation {horizontal, vertical};
    std::vector<int> position;
};


#endif //QUORIDORV_2_WALL_H

//
// Created by samx500 on 2020-12-30.
//

#ifndef QUORIDORV_2_BOARD_H
#define QUORIDORV_2_BOARD_H


#include "Wall.h"
#include <vector>

class Board {
    int size;
    std::vector<Wall> walls;

    public:
        explicit Board(int size);
};


#endif //QUORIDORV_2_BOARD_H

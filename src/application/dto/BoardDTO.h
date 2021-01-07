//
// Created by samx500 on 2020-12-30.
//

#ifndef QUORIDORV_2_BOARDDTO_H
#define QUORIDORV_2_BOARDDTO_H
#include <map>
#include <vector>
#include "../../game/Wall.h"

using vectorOfPosition = std::vector<std::vector<int,int>>;

struct BoardDTO {
    std::map<Wall::Orientation, vectorOfPosition> walls;
    int size;
};


#endif //QUORIDORV_2_BOARDDTO_H

//
// Created by samx500 on 2020-12-30.
//

#ifndef QUORIDORV_2_QUORIDOR_H
#define QUORIDORV_2_QUORIDOR_H


#include "../game/Board.h"
#include "../ui/GUI.h"

class Quoridor {
    GUI* gui;
    Board board;

    public:
        explicit Quoridor(int size);
        void play();
};


#endif //QUORIDORV_2_QUORIDOR_H

//
// Created by samx500 on 2020-12-30.
//

#ifndef QUORIDORV_2_CMDINTERFACE_H
#define QUORIDORV_2_CMDINTERFACE_H

#include "../application/dto/QuoridorDTO.h"
#include "../application/dto/BoardDTO.h"

class CMDInterface {
public:
    void showGame(QuoridorDTO game);

private:
    void showBoard(BoardDTO board);
};


#endif //QUORIDORV_2_CMDINTERFACE_H

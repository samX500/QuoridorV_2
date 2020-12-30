//
// Created by samx500 on 2020-12-30.
//

#ifndef QUORIDORV_2_CMDINTERFACE_H
#define QUORIDORV_2_CMDINTERFACE_H


#include "Output.h"
#include "../DTO/BoardDTO.h"

class CMDInterface : public Output{
    void showGame(QuoridorDTO game) override;

    private:
        void showBoard(BoardDTO board);
};


#endif //QUORIDORV_2_CMDINTERFACE_H

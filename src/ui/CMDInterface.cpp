//
// Created by samx500 on 2020-12-30.
//

#include "CMDInterface.h"


void CMDInterface::showGame(const QuoridorDTO &game) {

    showBoard(game.board);
}

/* -----------------------------------
9 | .   .   .   .   .   .   .   .   . |
  |                                   |
8 | .   .   .   .   .   . | .   .   . |
  |        ------- -------|-------    |
7 | . | .   .   .   .   . | .   .   . |
  |   |                               |
6 | . | .   .   .   .   . | .   2   . |
  |    -------            |           |
5 | .   .   . | .   1   . | .   .   . |
  |           |                       |
4 | .   .   . | .   .   .   .   .   . |
  |            -------                |
3 | .   .   .   .   . | .   .   .   . |
  |                   |               |
2 | .   .   .   .   . | .   .   .   . |
  |                                   |
1 | .   .   .   .   .   .   .   .   . |
--|-----------------------------------
|    1   2   3   4   5   6   7   8   9*/

void CMDInterface::showBoard(const BoardDTO &board) {

}
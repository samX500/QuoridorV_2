//
// Created by samx500 on 2020-12-30.
//

#ifndef QUORIDORV_2_GUI_H
#define QUORIDORV_2_GUI_H

#include "../application/dto/QuoridorDTO.h"
#include "../application/dto/BoardDTO.h"
#include "SFML/Graphics.hpp"

class GUI {

    sf::RenderWindow window;

public:
    GUI();

    void showGame(const QuoridorDTO& game);

};


#endif //QUORIDORV_2_GUI_H

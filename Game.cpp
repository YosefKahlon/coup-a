//
// Created by 97252 on 4/25/2022.
//

#include <iostream>
#include "Game.hpp"
#include "stdexcept"
#include "stdio.h"

using namespace std;

coup::Game::Game() {
   this-> win = false; // there is a winner
    this->size = 0; //number of player

}

std::vector<std::string> coup::Game::players() {

    return this->player;


}


std::string coup::Game::winner() {
    if (win) {
        throw runtime_error("Game is over !");
    }


    return std::string();
}

std::string coup::Game::turn() {

    return std::string();
}






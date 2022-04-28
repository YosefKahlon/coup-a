//
// Created by 97252 on 4/25/2022.
//

#include "Contessa.hpp"

using namespace coup;
Contessa::Contessa(Game& game, string name) : Player(game , name){
    this->player_name = name;
    game.player.push_back(name);
    game.size++;
}


string Contessa::rule() const {
    return "Contessa";
}


//todo
void Contessa::block(const Player &player) {

}



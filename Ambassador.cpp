//
// Created by 97252 on 4/25/2022.
//

#include "Ambassador.hpp"
using namespace coup;
Ambassador::Ambassador(Game &game, string name): Player(game,name) {
    this->player_name = name;
    game.player.push_back(name);
    game.size++;

}


/**
 *
 * @return the rule of this player.
 */
string Ambassador::rule() const {
    return "Ambassador";
}

//TODO
void Ambassador::transfer(const Player &player1, const Player &player2) {

}
//TODO
void Ambassador::block(const Player &player) {

}

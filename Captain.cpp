//
// Created by 97252 on 4/25/2022.
//

#include "Captain.hpp"

using namespace coup;
Captain::Captain(Game &game,  string name): Player(game,name) {
    this->player_name = name;
    game.player.push_back(name);
    game.size++;

}

/**
 *
 * @return the rule of this player.
 */
string Captain::rule() const {
    return "Captain";
}


//TODO
void Captain::steal(const Player& player) {

}

//TODO
void Captain::block(const Player& player) {

}




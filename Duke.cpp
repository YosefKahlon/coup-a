//
// Created by 97252 on 4/25/2022.
//

#include <iostream>
#include "Duke.hpp"
#include "Player.hpp"
#include "Game.hpp"
using namespace coup;


Duke::Duke(Game &game, string name) : Player(game, name) {
    this->player_name = name;
    game.player.push_back(name);
    game.size++;

}

/**
 *
 * @return the rule of this player.
 */
string Duke::rule() const {
    return "Duke";
}

/**
 * Action:
 * the player choose to take three coins to his pile
 */
void Duke::tax() {
    set_coins(3);
}


////TODO
//void Duke::block(const Player &player) {
//
//}
//
//







//
// Created by 97252 on 4/25/2022.
//


#include "Assassin.hpp"

using namespace std;
using namespace coup;

Assassin::Assassin(Game &game, string name) : Player(game,name) {
    this->player_name = name;
    game.player.push_back(name);
    game.size++;

}

/**
 *
 * @return the rule of this player.
 */
string Assassin::rule() const {
    return "Assassin";
}

//void Assassin::coup(const Player &player) {
//   // Player::coup(player);
//}



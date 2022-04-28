//
// Created by 97252 on 4/25/2022.
//

#include "Captain.hpp"

using namespace coup;

Captain::Captain(Game &game, string name) : Player(game, name) {
    this->player_name = name;
    game.player.push_back(name);
    game.action_of_the_player.push_back(Start);
    game.action_for_player.push_back(Noting);
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
void Captain::steal(Player player) {
//    int i = find_player(player);
//    if (player.coins() < 2) {
//        this->p_game->index++;
//        throw runtime_error("Player not have enough money to steel !");
//    }
//    player.set_coins(-2);
//    set_coins(+2);
//    this->p_game->action_of_the_player[this->p_game->index % this->p_game->size] = Steel;
//    this->p_game->action_for_player.at((unsigned long)i) = Steel;
//    this->p_game->index++;
}


void Captain::block(Player player) {
//    int i = find_player(player);
//    if (this->p_game->action_of_the_player.at((unsigned long)i) != Steel) {
//        this->p_game->index++;
//        throw runtime_error("Capitan canot block this player operation !");
//    }
//        player.set_coins(-2);
//
//    this->p_game->action_of_the_player.at(this->p_game->index % this->p_game->size) = Block_cap;
//    this->p_game->index++;

}




//
// Created by 97252 on 4/25/2022.
//

#include "Ambassador.hpp"
using namespace coup;
Ambassador::Ambassador(Game &game, string name): Player(game,name) {
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
string Ambassador::rule() const {
    return "Ambassador";
}


void Ambassador::transfer( Player player1,  Player player2) {
//    int i = find_player(player1);
//    int j = find_player(player2);
//    if (player1.coins() < 1 ){
//        this->p_game->index++;
//        throw runtime_error("The player does not have enough money to transfer !");
//    }
//
//    player1.set_coins(-1);
//    player2.set_coins(1);
//    this->p_game->action_for_player.at((unsigned long)i) = Loss_t;
//    this->p_game->action_for_player.at((unsigned long)j) = Get_t;
//    this->p_game->action_of_the_player.at(this->p_game->index%this->p_game->index) = Transfer;
//    this->p_game->index++;



}
//TODO
void Ambassador::block( Player player) {
//    int i = find_player(player);
//    if (this->p_game->action_of_the_player.at((unsigned long)i) != Steel) {
//        this->p_game->index++;
//        throw runtime_error("Ambassador canot block this player operation !");
//    } else {
//        player.set_coins(-2);
//    }
//
//    this->p_game->action_of_the_player.at(this->p_game->index % this->p_game->size) = Block_amb;
//    this->p_game->index++;
}

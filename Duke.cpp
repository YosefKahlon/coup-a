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
    game.action_of_the_player.push_back(Start);
    game.action_for_player.push_back(Noting);
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
    p_game->action_of_the_player[this->p_game->index % this->p_game->size] = Tax;
    set_coins(3);
    this->p_game->index++;
}



void Duke::block(Player player) {
//    int i = find_player(player);
//    if (this->p_game->action_of_the_player.at((unsigned long)i) != Foreign_aid) {
//        this->p_game->index++;
//        throw runtime_error("Duke cannot block this player operation ! ");
//    }
//    player.set_coins(-2);
//    this->p_game->action_of_the_player.at(this->p_game->index % this->p_game->size) = Block_duke;
//    this->p_game->index++;

}









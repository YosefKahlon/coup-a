//
// Created by 97252 on 4/25/2022.
//

#include <iostream>
#include "Duke.hpp"
#include "Player.hpp"
#include "Game.hpp"

using namespace coup;


Duke::Duke(Game &game, const string& name) : Player(game, name) {
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
    if (this->p_game->player.at(this->p_game->index % this->p_game->size) != this->player_name) {
        throw invalid_argument("Not your turn !");
    }
    const int ten= 10;

    if (coins() >= ten) {
        throw runtime_error("Player must make a coup operation when he have more then 10 coins ! ");
    }
    p_game->action_of_the_player[this->p_game->index % this->p_game->size] = Tax;
    set_coins(3);
    this->p_game->index++;
}



void Duke::block(Player player) {
    int i = find_player(player.get_name());
    if (this->p_game->action_of_the_player.at((unsigned long)i) != Foreign_aid) {
        throw runtime_error("Duke cannot block this player operation ! ");
    }

    player.set_coins(-2);
    int j = find_player(player.get_name());
    this->p_game->action_of_the_player.at((unsigned long)j) = Block_duke;
    this->p_game->action_for_player.at((unsigned long)i) = Block_duke;
}









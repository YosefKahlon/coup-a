//
// Created by 97252 on 4/25/2022.
//

#include <iostream>
#include "Duke.hpp"
#include "Player.hpp"
#include "Game.hpp"

using namespace coup;

Duke::Duke(Game &game, const string &name) {
    game.player.push_back(name);
    game.size++;
    this->p_game = &game;
    this->player_name = name;
    this->money = 0;

}


/**
 *
 * @return How many coins does this player have
 */
int Duke::coins() const {
    return this->money;
}


/**
 * Action:
 * the player choose to take one coin to his pile
 *
 * If it's not his turn throw exception !
 */
void Duke::income() {
    if (this->p_game->player.at(this->p_game->index%this->p_game->size) != this->player_name) {
        throw invalid_argument("Not your turn !");
    }
    this->p_game->index++;
    set_coins(1);
}



/**
 * Action:
 * the player choose to take two coins to his pile
 *
 * If it's not his turn throw exception !
 */
void Duke::foreign_aid() {
    if (this->p_game->player.at(this->p_game->index%this->p_game->size) != this->player_name) {
        throw invalid_argument("Not your turn !");
    }
    this->p_game->index++;
    set_coins(2);
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



//TODO
void Duke::block(const Player &player) {

}


//TODO
void Duke::coup(const Player &player) const {

}

/**
 *
 * @param num
 * set the coins of this player.
 */
void Duke::set_coins(int num) {
    this->money+= num;
}



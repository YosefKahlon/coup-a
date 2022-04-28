//
// Created by 97252 on 4/25/2022.
//
#include "Player.hpp"

#include <utility>


coup::Player::Player(coup::Game &game, string name) {
    this->p_game = &game;
    this->money = 0;
    this->player_name = std::move(name);
}

/**
 *
 * @return How many coins does this player have
 */
int coup::Player::coins() const {
    return this->money;
}


/**
 * Action:
 * the player choose to take one coin to his pile
 *
 * If it's not his turn throw exception !
 */
void coup::Player::income() {
    if (this->p_game->player.at(this->p_game->index % this->p_game->size) != this->player_name) {
        throw invalid_argument("Not your turn !");
    }
    this->p_game->index++;
    set_coins(1);
}

void coup::Player::set_coins(int num) {
    this->money += num;
}


/**
 * Action:
 * the player choose to take two coins to his pile
 *
 * If it's not his turn throw exception !
 */
void coup::Player::foreign_aid() {
    if (this->p_game->player.at(this->p_game->index % this->p_game->size) != this->player_name) {
        throw invalid_argument("Not your turn !");
    }
    this->p_game->index++;
    set_coins(2);
}

/**
 *
 * @return the rule of the player.
 */
string coup::Player::rule() const {
    return "";
}



//Todo
void coup::Player::coup(const coup::Player &player) {

}








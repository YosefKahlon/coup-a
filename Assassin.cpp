//
// Created by 97252 on 4/25/2022.
//


#include "Assassin.hpp"

using namespace std;
Assassin::Assassin(Game &game, const string &name) {
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
int Assassin::coins() const {
    return this->money;
}

/**
 * Action:
 * the player choose to take one coin to his pile
 *
 * If it's not his turn throw exception !
 */
void Assassin::income()  {
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
void Assassin::foreign_aid() {
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
string Assassin::rule() const {
    return "Assassin";
}

void Assassin::coup(const Player &player) {

}



void Assassin::coup(const Player &player) const {

}

/**
 *
 * @param num
 * set the coins of this player.
 */
void Assassin::set_coins(int num) {
    this->money+= num;
}
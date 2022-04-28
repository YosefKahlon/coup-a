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
//    if (this->p_game->player.at(this->p_game->index % this->p_game->size) != this->player_name) {
//        throw invalid_argument("Not your turn !");
//    }
    this->p_game->index++;
    set_coins(1);
    p_game->action_of_the_player[this->p_game->index % this->p_game->size] = Income;

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
//    if (this->p_game->player.at(this->p_game->index % this->p_game->size) != this->player_name) {
//        throw invalid_argument("Not your turn !");
//    }

//    if (this->p_game->action_of_the_player.at(this->p_game->index % this->p_game->size) == Coup_ass || this->p_game->action_of_the_player.at(this->p_game->index % this->p_game->size) == Normal_coup){
//        this->p_game->player.erase(this->p_game->index % this->p_game->size);
//        size--;
//
//
//    }

    p_game->action_of_the_player[this->p_game->index % this->p_game->size] = Foreign_aid;
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



void coup::Player::coup(coup::Player player) {
//    if (coins() < 7 ){
//        this->p_game->index++;
//        throw runtime_error("Not enough money for this operation !");
//    }
    int i = find_player(player);
    this->p_game->action_for_player.at((unsigned long)i) = Normal_coup;
    this->p_game->action_of_the_player.at(this->p_game->index%this->p_game->size) = Normal_coup;
    this->p_game->index++;
}

int coup::Player::find_player(coup::Player player) {
    int ans = 0;
    for (unsigned long i = 0; i < this->p_game->size; ++i) {
        if (this->p_game->player.at(i) == player.player_name) {
            ans = i;
            break;
        }
    }
    return ans;
}










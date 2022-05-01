//
// Created by 97252 on 4/25/2022.
//

#include "Ambassador.hpp"
using namespace coup;
Ambassador::Ambassador(Game &game, const string& name): Player(game,name) {
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


void Ambassador::transfer( Player &player1,  Player& player2) {
    if (this->p_game->player.at(this->p_game->index % this->p_game->size) != this->player_name) {
        throw invalid_argument("Not your turn !");
    }
    const int ten= 10;
    if (coins() >=ten) {
        throw runtime_error("Player must make a coup operation when he have more then 10 coins ! ");
    }
    int i = find_player(player1.get_name());
    int j = find_player(player2.get_name());
    if (player1.coins() < 1 ){
        this->p_game->index++;
        throw runtime_error("The player does not have enough money to transfer !");
    }

    player1.set_coins(-1);
    player2.set_coins(1);
    this->p_game->action_for_player.at((unsigned long)i) = Loss_t;
    this->p_game->action_for_player.at((unsigned long)j) = Get_t;
    this->p_game->action_of_the_player.at(this->p_game->index%this->p_game->index) = Transfer;
    this->p_game->index++;



}

void Ambassador::block( Player& player) {
    int i = find_player(player.get_name());
    if (this->p_game->action_of_the_player.at((unsigned long)i) != Steel) {

        throw runtime_error("Ambassador cannot block this player operation !");
    }


    // ----------     todo  --------
    //case 1 steel 2
    player.set_coins(-2);

    //case 2 steel 1
    //player.set_coins(-1);

    // ----------------------------


    int j = find_player(this->player_name);
    this->p_game->action_of_the_player.at((unsigned long)j) = Block_amb;

}

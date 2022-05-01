//
// Created by 97252 on 4/25/2022.
//

#include "Captain.hpp"

using namespace coup;

Captain::Captain(Game &game, const string& name) : Player(game, name) {
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
void Captain::steal(Player& player) {
    if (this->p_game->player.at(this->p_game->index % this->p_game->size) != this->player_name) {
        throw invalid_argument("Not your turn !");
    }
    const int ten= 10;
    const int two= 2;
    const int one= 1;
    if (coins() >= ten) {
        throw runtime_error("Player must make a coup operation when he have more then 10 coins ! ");
    }
    int i = find_player(player.get_name());


    if (player.coins() >= two ){
        player.set_coins(-2);
        set_coins(2);
        this->p_game->action_of_the_player[this->p_game->index % this->p_game->size] = Steel;
        this->p_game->action_for_player.at((unsigned long)i) = Steel;
        this->p_game->index++;
    }
    else if (player.coins() == one){
        player.set_coins(-1);
        set_coins(1);
        this->p_game->action_of_the_player[this->p_game->index % this->p_game->size] = Steel;
        this->p_game->action_for_player.at((unsigned long)i) = Steel;
        this->p_game->index++;
    }
    else {
        throw runtime_error("Player not have enough money to steel !");
    }



}


void Captain::block(Player &player) {
    int i = find_player(player.get_name());
    if (this->p_game->action_of_the_player.at((unsigned long)i) != Steel) {

        throw runtime_error("Capitan canot block this player operation !");
    }
    // ----------     todo  -------- find the playr he was blocked
    //case 1 steel 2
    //player.set_coins(-2);

    //case 2 steel 1
    player.set_coins(-1);

    // ----------------------------

    int j = find_player(this->player_name);
    this->p_game->action_of_the_player.at((unsigned long)j) = Block_cap;
    this->p_game->action_for_player.at((unsigned long)j) = Block_cap;

}




//
// Created by 97252 on 4/25/2022.
//

#include "Contessa.hpp"

using namespace coup;
Contessa::Contessa(Game& game, string name) : Player(game , name){
    this->player_name = name;
    game.player.push_back(name);
    game.action_of_the_player.push_back(Start);
    game.action_for_player.push_back(Noting);
    game.size++;
}


string Contessa::rule() const {
    return "Contessa";
}



void Contessa::block(Player player) {
//    int i = find_player(player);
//    if (this->p_game->action_of_the_player.at((unsigned long)i) != Coup_ass) {
//        this->p_game->index++;
//        throw runtime_error("Contessa cannot block this player operation !");
//    }
//            this->p_game->action_for_player.at((unsigned long)i) = Noting;
//
//    this->p_game->action_of_the_player.at(this->p_game->index % this->p_game->size) = Block_cont;
//    this->p_game->index++;
}



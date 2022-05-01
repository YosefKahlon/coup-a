//
// Created by 97252 on 4/25/2022.
//

#include "Contessa.hpp"

using namespace coup;

Contessa::Contessa(Game &game, const string &name) : Player(game, name) {
    this->player_name = name;
    game.player.push_back(name);
    game.action_of_the_player.push_back(Start);
    game.action_for_player.push_back(Noting);
    game.size++;
}


string Contessa::rule() const {
    return "Contessa";
}


void Contessa::block(Player& player) {
  //  int i = find_player(player.get_name()); // find this player to block


    //Contessa block only the Assassin coup.
    if (player.get_Action() != Coup_ass) {
        throw runtime_error("Contessa cannot block this player operation !");
    }

    player.set_Action(Noting);


    string name = this->p_game->assassin_list.at(player.get_name());



    // Bring back from the dead
    auto itPos = this->p_game->player.begin() + find_player(name);
    this->p_game->player.insert(itPos, name);
    this->p_game->size++;


    player.set_Action(Noting);

  //  int j = find_player(this->player_name);
    //this->p_game->action_of_the_player.at((unsigned long) j) = Block_cont;
    this->set_Action(Block_cont);
}



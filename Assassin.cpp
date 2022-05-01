//
// Created by 97252 on 4/25/2022.
//


#include <sstream>
#include "Assassin.hpp"

using namespace std;
using namespace coup;

Assassin::Assassin(Game &game, const string& name) : Player(game, name) {
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
string Assassin::rule() const {
    return "Assassin";
}
//
//void Assassin::coup(Player player) {
//    if (this->p_game->player.at(this->p_game->index % this->p_game->size) != this->player_name) {
//        throw invalid_argument("Not your turn !");
//    }
//
//    const int tree= 3;
//    const int seven= 7;
//    const int ten = 10;
//    if (coins() < tree){
//        throw invalid_argument("Not have enough money to make this move !");
//    }
//
//    if (coins() >=ten) {
//        throw runtime_error("Player must make a coup operation when he have more then 10 coins ! ");
//    }
//    if (coins() < seven) {
//        this->p_game->assassin_list[this->player_name] = player.get_name(); //add a player to the coup list of the assassin.
//        set_coins(-3);
//
//        this->p_game->dead_list[this->player_name] = find_player(player.get_name());
//
//        this->p_game->action_for_player.at(this->p_game->index % this->p_game->size) = Coup_ass ;
//
//
//
//
//        this->p_game->action_of_the_player.at(this->p_game->index % this->p_game->size) = Coup_ass;
//        out_from_game(find_player(player.get_name()));
//
//        this->p_game->index++;
//    }
//
//
//}









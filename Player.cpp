//
// Created by 97252 on 4/25/2022.
//
#include "Player.hpp"

#include <utility>

using namespace coup;

/*
 * std::move is used to indicate that an object t may be "moved from", i.e. allowing the efficient transfer of resources from t to another object.

In particular, std::move produces an xvalue expression that identifies its argument t. It is exactly equivalent to a static_cast to an rvalue reference type.

Parameters
 */
coup::Player::Player(coup::Game &game, string name) {
    this->p_game = &game;
    this->money = 0;
    this->player_name = std::move(name);
    this->action = Start;
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
    const int ten = 10;
    if (coins() >= ten) {
        throw runtime_error("Player must make a coup operation when he have more then 10 coins ! ");
    }
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
    if (this->p_game->player.at(this->p_game->index % this->p_game->size) != this->player_name) {
        throw invalid_argument("Not your turn !");
    }
    const int ten = 10;
    if (coins() >= ten) {
        throw runtime_error("Player must make a coup operation when he have more then 10 coins ! ");
    }

//    if (this->p_game->action_for_player.at(this->p_game->index % this->p_game->size) == Normal_coup ||
//        this->p_game->action_for_player.at(this->p_game->index % this->p_game->size) == Coup_ass
//             ) {
//        out_from_game(this->p_game->index % this->p_game->size);
//        this->p_game->index++;
    //       return;
//    }


    p_game->action_of_the_player[this->p_game->index % this->p_game->size] = Foreign_aid;
    this->p_game->index++;
    set_coins(2);

}




void coup::Player::coup(Player &player) {
    const int seven = 7;
    const int tree = 3;
    if (rule() == "Assassin" && coins() < seven && coins() >= tree) {


        int i = find_player(player.get_name());

        this->set_Action(   Coup_ass);

        set_coins(-tree);
        //this->p_game->action_for_player.at((unsigned long) i) = Coup_ass;
        // cout<<this->p_game->index % this->p_game->size <<endl;
         player.set_Action(Coup_ass);
//        this->p_game->action_of_the_player.at(this->p_game->index % this->p_game->size) = Coup_ass;
        this->p_game->assassin_list[this->player_name] = player.get_name(); //add a player to the coup list of the assassin.
        this->p_game->dead_list[this->player_name] = find_player(player.get_name());
        out_from_game(i);
        this->p_game->index++;

        return;
    }

     if (coins() < seven) {
       // this->p_game->index++;
        throw runtime_error("Not enough money for this operation !");
    }
     else if (rule() == "Assassin" &&  coins() < tree){
         //this->p_game->index++;
         throw runtime_error("Not enough money for this operation !");
     }


    int i = find_player(player.get_name());
    out_from_game(i);
    set_coins(-seven);
    this->set_Action(Normal_coup);
    player.set_Action(Normal_coup);
  // this->p_game->action_for_player.at((unsigned long) i) = Normal_coup;
    //this->p_game->action_of_the_player.at(this->p_game->index % this->p_game->size) = Normal_coup;
    this->p_game->index++;

}


int coup::Player::find_player(const string &player_n) {
    int ans = 0;
    for (::size_t i = 0; i < this->p_game->size; i++) {
        if (this->p_game->player.at(i) == player_n) {
            ans = i;
            break;
        }
    }
    return ans;
}

string coup::Player::get_name() {
    return this->player_name;
}

void coup::Player::out_from_game(int pos) {
    this->p_game->player.erase(this->p_game->player.begin() + pos);
    this->p_game->action_of_the_player.erase(this->p_game->action_of_the_player.cbegin() + pos);
    this->p_game->action_for_player.erase(this->p_game->action_for_player.cbegin() + pos);
    this->p_game->size--;
}

int Player::get_Action() const {
    return this->action;
}

void Player::set_Action(int act) {
    this->action = act;

}

//string Player::rule() const {
//    return std::string();
//}











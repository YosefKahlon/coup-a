//
// Created by 97252 on 4/25/2022.
//

#ifndef COUP_A_ASSASSIN_HPP
#define COUP_A_ASSASSIN_HPP


#include "Player.hpp"
#include "Game.hpp"
#include "string"
 namespace coup{

class Assassin : public Player {

public:
    string player_name;

public:


    Assassin(Game &game,  string name);


    string rule() const override;

    //void coup(const Player& player);



};

}
#endif //COUP_A_ASSASSIN_HPP

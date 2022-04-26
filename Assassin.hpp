//
// Created by 97252 on 4/25/2022.
//

#ifndef COUP_A_ASSASSIN_HPP
#define COUP_A_ASSASSIN_HPP


#include "Player.hpp"
#include "Game.hpp"
#include "string"
using namespace coup;

class Assassin : public Player{

public:

    string player_name;
    Game* p_game ;
    int money;

public:


    Assassin(Game &game ,const string& name);

    int coins() const override;

    void income()  override;

    void foreign_aid()  override;

    string rule() const override;

    void coup(const Player& player);



    void coup(const Player &player) const override;

    void set_coins(int num);
};

#endif //COUP_A_ASSASSIN_HPP

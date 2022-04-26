//
// Created by 97252 on 4/25/2022.
//

#ifndef COUP_A_CONTESSA_HPP
#define COUP_A_CONTESSA_HPP

#include "Player.hpp"
#include "Game.hpp"
#include "string"

using namespace coup;

class Contessa : public Player {

public:
    string player_name;
    Game *p_game;
    int money;

public:
    Contessa(Game &game, const string &name);

    int coins() const override;

    void income() override;

    void foreign_aid() override;

    string rule() const override;


    //block steel
    void block(const Player &player);

    void coup(const Player &player) const override;

    void set_coins(int num);
};

#endif //COUP_A_CONTESSA_HPP

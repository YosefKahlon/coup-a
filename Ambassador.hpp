//
// Created by 97252 on 4/25/2022.
//

#ifndef COUP_A_AMBASSADOR_HPP
#define COUP_A_AMBASSADOR_HPP

#include "Player.hpp"
#include "Game.hpp"
#include "string"

using namespace coup;

class Ambassador : public Player {

public:
    string player_name;
    Game *p_game;
    int money;

public:
    Ambassador(Game &game, const string &name);

    int coins() const override;

    void income() override;

    void foreign_aid() override;

    string rule() const override;

    void transfer(const Player &player1, const Player &player2);


    //block steel
    void block(const Player &player);

    string getName();

    void coup(const Player &player) const override;

    void set_coins(int num);
};

#endif //COUP_A_AMBASSADOR_HPP

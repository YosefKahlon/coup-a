//
// Created by 97252 on 4/25/2022.
//

#ifndef COUP_A_AMBASSADOR_HPP
#define COUP_A_AMBASSADOR_HPP

#include "Player.hpp"
#include "Game.hpp"
#include "string"
using namespace coup;

class Ambassador : public Player{

private:
    string name;


public:
    Ambassador(Game& game ,const string& name);

    int coins() const override;

    void income() const override;

    void foreign_aid() const override;

    string rule() const override;

    void transfer(const Player& player1 ,const Player& player2);


    //block steel
    void block(const Player& player);

    string getName();

    void coup(const Player &player) const override;
};
#endif //COUP_A_AMBASSADOR_HPP

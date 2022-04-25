//
// Created by 97252 on 4/25/2022.
//

#ifndef COUP_A_CAPTAIN_HPP
#define COUP_A_CAPTAIN_HPP
#include "Player.hpp"
#include "Game.hpp"
#include "string"
using namespace coup;

class Captain : public Player{

private:
    string name;


public:
    Captain(Game &game ,const string &name);

    int coins() const override;

    void income() const override;

    void foreign_aid() const override;

    string rule() const override;

    void steal(const Player& player);

    //block steel
    void block(const Player& player);

    string getName();

    void coup(const Player &player) const override;


};

#endif //COUP_A_CAPTAIN_HPP

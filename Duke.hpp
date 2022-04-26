//
// Created by 97252 on 4/25/2022.
//

#ifndef COUP_A_DUKE_HPP
#define COUP_A_DUKE_HPP
#include "Player.hpp"
#include "Game.hpp"
#include "string"
using namespace coup;

class Duke : public Player{

public:
    string player_name;
    Game* p_game;
    int money;

public:

    Duke(Game &game ,const string &name);

    int coins() const override;

    void income() override;

    void foreign_aid() override;

    string rule() const override;

    void tax();

    void block(const Player& player);


    void set_coins(int num);

    void coup(const Player &player) const override;
};


#endif //COUP_A_DUKE_HPP

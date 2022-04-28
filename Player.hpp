//
// Created by 97252 on 4/25/2022.
//

#ifndef COUP_A_PLAYER_HPP
#define COUP_A_PLAYER_HPP

#include "string"
#include "iostream"

using namespace std;

#include "Game.hpp"

namespace coup {
    class Game;

    class Player {

    protected:
        string player_name;
        Game *p_game;
        int money;

    public:
        Player(Game &game, string name);

        virtual int coins() const ;


        virtual void income();

        virtual void set_coins(int num);

        virtual void foreign_aid();

        virtual string rule() const;

        virtual void coup(const Player &player);

    };
}

#endif //COUP_A_PLAYER_HPP

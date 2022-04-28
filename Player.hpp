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
        enum op {Start,Income, Foreign_aid,Normal_coup,Tax,Block_duke,Coup_ass,
            Transfer,Block_amb,Steel,Block_cap,Block_cont,Out,Noting , Get_t , Loss_t};

        Player(Game &game, string name);

        virtual int coins() const ;


        virtual void income();

        virtual void set_coins(int num);

        virtual void foreign_aid();

        virtual string rule() const;

        virtual void coup( Player player);

        virtual int find_player(Player player);
    };
}

#endif //COUP_A_PLAYER_HPP

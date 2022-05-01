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
        int action;


    public:

        enum op {
            Start, Income, Foreign_aid, Normal_coup, Tax, Block_duke, Coup_ass,
            Transfer, Block_amb, Steel, Block_cap, Block_cont, Out, Noting, Get_t, Loss_t
        };

        Player(Game &game, string name);



        int coins() const;


        void income();

        void set_coins(int num);

        void foreign_aid();

        void coup(Player& player);

        int find_player(const string &player_n);

        string get_name();

        void out_from_game(int pos);



        int  get_Action() const;
        void set_Action(int act);

        virtual string rule() const =0 ; //need to be overridden
    };
}

#endif //COUP_A_PLAYER_HPP

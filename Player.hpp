//
// Created by 97252 on 4/25/2022.
//

#ifndef COUP_A_PLAYER_HPP
#define COUP_A_PLAYER_HPP

#include "string"

using namespace std;

#include "Game.hpp"

class Player {


public:




    // pure virtual
    virtual int coins() const = 0;

    virtual void income() const = 0;

    virtual void foreign_aid() const = 0;

    virtual string rule() const = 0;

    virtual void coup(const Player &player) const = 0;

};


#endif //COUP_A_PLAYER_HPP

//
// Created by 97252 on 4/25/2022.
//

#include "Ambassador.hpp"

Ambassador::Ambassador(Game &game, const string& name) {
        game.player.push_back(name);
        game.size++;
        //game.add(name);
}

int Ambassador::coins() const {
    return 0;
}

void Ambassador::income() const {

}

void Ambassador::foreign_aid() const {

}

string Ambassador::rule() const {
    return std::string();
}

void Ambassador::transfer(const Player& player1,const  Player& player2) {

}

void Ambassador::block(const Player& player) {

}

string Ambassador::getName() {
    return std::string();
}

void Ambassador::coup(const Player &player) const {

}

//
// Created by 97252 on 4/25/2022.
//

#include <iostream>
#include "Duke.hpp"
#include "Player.hpp"
#include "Game.hpp"
using namespace coup;
Duke::Duke(Game &game, const string& name) {
    game.player.push_back(name);
    game.size++;
//    game.add(name);
}

int Duke::coins() const {
    return 0;
}

void Duke::income() const {

}

void Duke::foreign_aid() const {

}

string Duke::rule() const {
    return std::string();
}

void Duke::tax() {

}

void Duke::block(const Player& player) {

}

string Duke::getName() {
    return std::string();
}

void Duke::coup(const Player &player) const {

}



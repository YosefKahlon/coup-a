//
// Created by 97252 on 4/25/2022.
//

#include "Assassin.hpp"

Assassin::Assassin(Game &game, const string &name) {
    game.player.push_back(name);
    game.size++;
}

int Assassin::coins() const {
    return 0;
}

void Assassin::income() const {

}

void Assassin::foreign_aid() const {

}

string Assassin::rule() const {
    return std::string();
}

void Assassin::coup(const Player &player) {

}

string Assassin::getName() {
    return std::string();
}

void Assassin::coup(const Player &player) const {

}

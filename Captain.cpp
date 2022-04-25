//
// Created by 97252 on 4/25/2022.
//

#include "Captain.hpp"

Captain::Captain(Game &game, const string& name) {
    game.player.push_back(name);
    game.size++;
}

int Captain::coins() const {
    return 0;
}

void Captain::income() const {

}

void Captain::foreign_aid() const {

}

string Captain::rule() const {
    return std::string();
}

void Captain::steal(const Player& player) {

}

void Captain::block(const Player& player) {

}

string Captain::getName() {
    return std::string();
}

void Captain::coup(const Player &player) const {

}

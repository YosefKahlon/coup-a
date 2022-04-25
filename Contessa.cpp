//
// Created by 97252 on 4/25/2022.
//

#include "Contessa.hpp"


Contessa::Contessa(Game& game, const string& name) {
    game.player.push_back(name);
    game.size++;
}

int Contessa::coins() const {
    return 0;
}

void Contessa::income() const {

}

void Contessa::foreign_aid() const {

}

string Contessa::rule() const {
    return std::string();
}



void Contessa::block(const Player &player) {

}

string Contessa::getName() {
    return std::string();
}

void Contessa::coup(const Player &player) const {

}

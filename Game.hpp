//
// Created by 97252 on 4/25/2022.
//

#ifndef COUP_A_GAME_HPP
#define COUP_A_GAME_HPP


#include "string"
#include "vector"
#include "unordered_map"

using namespace std;
namespace coup {
    class Game {
    public:
        vector<std::string> player;
        bool win;
        ::size_t size;
        ::size_t index;
        vector<int> action_of_the_player; //the player move
        vector<int> action_for_player; // move a player did on another player

        unordered_map<string,string> assassin_list; //name for the player who going to coup by the Assassin coup
        unordered_map<string,int> dead_list;

    public:

        Game();

        std::string turn();

        std::vector<std::string> players() const;

        std::string winner();


    };
}

#endif //COUP_A_GAME_HPP

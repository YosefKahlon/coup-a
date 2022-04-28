//
// Created by 97252 on 4/25/2022.
//

#ifndef COUP_A_GAME_HPP
#define COUP_A_GAME_HPP


#include "string"
#include "vector"
using namespace std;
namespace coup {
    class Game {
    public:
        vector<std::string> player;
        bool win;
        ::size_t size;
        ::size_t index;
        vector<int> action_of_the_player;
        vector<int> action_for_player;

 
    public:

        Game();

        std::string turn();

        std::vector<std::string> players();

        std::string winner();




    };
}

#endif //COUP_A_GAME_HPP

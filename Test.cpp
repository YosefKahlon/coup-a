

#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>
#include <exception>
#include "doctest.h"

using namespace std;
using namespace coup;










TEST_CASE ("GAME - 1") {
    Game game_1{};
    Duke duke{game_1, "Moshe"};
    Assassin assassin{game_1, "Yossi"};
    Ambassador ambassador{game_1, "Meirav"};
    Captain captain{game_1, "Reut"};
    Contessa contessa{game_1, "Gilad"};


            CHECK_EQ(game_1.player.size(), 5);

            CHECK_EQ(duke.rule(), "Duke");
            CHECK_EQ(assassin.rule(), "Assassin");
            CHECK_EQ(ambassador.rule(), "Ambassador");
            CHECK_EQ(captain.rule(), "Captain");
            CHECK_EQ(contessa.rule(), "Contessa");


    for (int i = 0; i < 4; i++) {
                CHECK_EQ(duke.coins(), i);
                CHECK_EQ(assassin.coins(), i);
                CHECK_EQ(ambassador.coins(), i);
                CHECK_EQ(captain.coins(), i);
                CHECK_EQ(contessa.coins(), i);

        duke.income();
        assassin.income();
        ambassador.income();
        captain.income();
        contessa.income();
    }
    for (int i = 4; i < 10; i += 2) {
                CHECK_EQ(duke.coins(), i);
                CHECK_EQ(assassin.coins(), i);
                CHECK_EQ(ambassador.coins(), i);
                CHECK_EQ(captain.coins(), i);
                CHECK_EQ(contessa.coins(), i);

        duke.foreign_aid();
        assassin.foreign_aid();
        ambassador.foreign_aid();
        captain.foreign_aid();
        contessa.foreign_aid();
    }

    duke.coup(assassin);
    //duke have 10 coin so he have to make a coup operation
            CHECK_EQ(game_1.player.size(), 4);
    ambassador.coup(captain);
            CHECK_EQ(game_1.player.size(), 3);

            CHECK_THROWS(contessa.income()); // contessa must make coup move
    contessa.coup(ambassador);
            CHECK_EQ(game_1.player.size(), 2);

    duke.tax();
    contessa.foreign_aid();
    duke.block(contessa);

            CHECK_EQ(duke.coins(), 6);
            CHECK_EQ(contessa.coins(), 5);


            CHECK_THROWS(contessa.income());
    duke.tax();
    contessa.income();
            CHECK_EQ(duke.coins(), 9);
            CHECK_EQ(contessa.coins(), 6);
    duke.coup(contessa);

            CHECK_EQ(game_1.player.size(), 1);

            CHECK_EQ(game_1.winner(), "Moshe");
}


TEST_CASE ("GAME - 2") {

    Game game_1{};
    Duke duke{game_1, "Ronaldo"};
            CHECK_EQ(game_1.player.size(), 1);
            CHECK_EQ(game_1.turn(), "Ronaldo");

    Assassin assassin{game_1, "Xavi"};
            CHECK_EQ(game_1.player.size(), 2);
            CHECK_FALSE(game_1.turn() == "Xavi");

    Assassin assassin2{game_1, "Pedri"};
            CHECK_EQ(game_1.player.size(), 3);
            CHECK_FALSE(game_1.turn() == "Pedri");

    Captain captain{game_1, "Muler"};
            CHECK_EQ(game_1.player.size(), 4);
            CHECK_FALSE(game_1.turn() == "Muler");

    Contessa contessa{game_1, "Ramos"};
            CHECK_EQ(game_1.player.size(), 5);


    Captain captain2{game_1, "Messi"};
            CHECK_EQ(game_1.player.size(), 6);

    //not the right order to play
    for (int i = 0; i < 30; ++i) {
                CHECK_THROWS(contessa.income());
                CHECK_THROWS(assassin2.income());
                CHECK_THROWS(contessa.income());
                CHECK_THROWS(captain.income());
                CHECK_THROWS(assassin.income());

    }

    //round 1
    duke.tax();

            CHECK_THROWS(assassin.coup(duke)); // assassin not have enough money to make this move
    assassin.foreign_aid();
    assassin2.income();
           CHECK_THROWS(contessa.block(assassin)); // last move of assassin was ok
    captain.steal(assassin2); // assassin have 1 coin
          CHECK_EQ(captain.coins(), 1);
    contessa.income();
   captain2.income();



    //round 2
    duke.foreign_aid(); //5 //3
            CHECK_EQ(duke.coins(), 5);
    assassin.income(); //3
    assassin2.foreign_aid(); //3
   captain.income();//2
    contessa.foreign_aid(); // 3
   captain2.steal(duke);//3

          CHECK_EQ(duke.coins(), 3);
            CHECK_EQ(captain2.coins(), 3);

    //round 3
    duke.income();
   assassin.coup(contessa);
    assassin2.coup(duke);

    captain.foreign_aid();
    contessa.income();
   captain2.foreign_aid();


    //round 4

           CHECK_EQ(game_1.player.size(), 4);
    while (captain.coins() == 7 && captain2.coins() == 7) {
        assassin.foreign_aid();
       assassin2.foreign_aid();
        captain.steal(assassin);
        captain2.steal(assassin2);
                CHECK_EQ(assassin.coins(), 0);
               CHECK_EQ(assassin2.coins(), 0);
    }
   assassin.foreign_aid();
   assassin2.foreign_aid();
   captain.coup(assassin);
    captain2.coup(assassin2);
            CHECK_EQ(game_1.player.size(), 2);

    while (captain2.coins() == 7) {

       captain.income();
        captain2.steal(captain);

    }

    captain.foreign_aid();
            CHECK_EQ(game_1.turn(), "Messi");
    captain2.coup(captain);
            CHECK_EQ(game_1.winner(), "Messi");

}
//
// Created by 97252 on 4/28/2022.
//
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





TEST_CASE ("GOOD TEST") {

    Game game_1{};
    Duke duke{game_1, "Moshe"};
    Assassin assassin{game_1, "Yossi"};
    Ambassador ambassador{game_1, "Meirav"};
    Captain captain{game_1, "Reut"};
    Contessa contessa{game_1, "Gilad"};
            SUBCASE("rule") {

                CHECK_EQ(duke.rule(), "Duke");
                CHECK_EQ(assassin.rule(), "Assassin");
                CHECK_EQ(ambassador.rule(), "Ambassador");
                CHECK_EQ(captain.rule(), "Captain");
                CHECK_EQ(contessa.rule(), "Contessa");
    }
            SUBCASE("Coins") {


        for (int i = 0; i < 10; i++) {
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


        for (int i = 10; i < 20; i += 2) {
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

    }
    SUBCASE("SPECIAL ACTION"){

            //TAX
            // BLOCK FOREIGN AID
            // CAPTAIN STEALING
            // TRANSFER
            // COUPE
            //BLOCK COUPE
            //INCOME
            // - MONEY FROM TRANSFER

            }

     SUBCASE("GAME") {
                // SIZE OF PLAYER
                // MAX MONEY
                // COUPE
                //COUPE

                // HAVE TO MAKE COUPE MORE THEN 10 COIN
                // SIZE OF PLAYER
                // WHILE ( SIZE EOF PLAYER == 1 ) IF HAVE ENOUGH COIN MAKE COIN
                // TEST RULE
                // ELSE MAKE TAKE THE MAX MONEY YOU CAN TAKE
                // MAKE A COPE FOR YOUR NEXT
                // SIZE = 1
                // IF THE WINNER IS ==
            }
}


TEST_CASE ("BAD CASE"){

    

}
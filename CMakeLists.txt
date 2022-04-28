cmake_minimum_required(VERSION 3.16)
project(coup_a)

set(CMAKE_CXX_STANDARD 14)

add_executable(coup_a main.cpp Demo.cpp Player.hpp Duke.cpp Duke.hpp Assassin.cpp Assassin.hpp Captain.cpp Captain.hpp Contessa.cpp Contessa.hpp Game.cpp Game.hpp Ambassador.cpp Ambassador.hpp Player.cpp Test.cpp Test.hpp)

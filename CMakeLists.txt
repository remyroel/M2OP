cmake_minimum_required(VERSION 3.29)
project(Advanced_Programming)

set(CMAKE_CXX_STANDARD 20)

add_executable(Advanced_Programming
        main.cpp
        Pokemon.h
        Pokemon.cpp
        FirePokemon.h
        FirePokemon.cpp
        WaterPokemon.h
        WaterPokemon.cpp
        GrassPokemon.cpp
        GrassPokemon.h
)

add_executable(Advanced_Programming_Testing
        testing.cpp
        Pokemon.h
        Pokemon.cpp
        FirePokemon.h
        FirePokemon.cpp
        WaterPokemon.h
        WaterPokemon.cpp
        GrassPokemon.cpp
        GrassPokemon.h
)
#include <iostream>
#include "FirePokemon.h"
#include "WaterPokemon.h"
#include "GrassPokemon.h"

bool testPokemon() {
    bool test = true;
    FirePokemon charmander("Charmander", 50);
    WaterPokemon squirtle("Squirtle", 50);
    GrassPokemon bulbasaur("Bulbasaur", 50);
    if(charmander.getHealth() != 50) {
        test = false;
        std::cout << "FAILED FIRE POKEMON TEST" << std::endl;
    }
    if(squirtle.getHealth() != 50) {
        test = false;
        std::cout << "FAILED WATER POKEMON TEST" << std::endl;
    }
    if(bulbasaur.getHealth() != 50) {
        test = false;
        std::cout << "FAILED GRASS POKEMON TEST" << std::endl;
    }
    return test;
}

void testBasicAttack() {
    FirePokemon charmander("Charmander", 50);
    WaterPokemon squirtle("Squirtle", 50);
    charmander.basicAttack(squirtle);
    if(squirtle.getHealth() != 40) {
        std::cout << "FAILED BASIC ATTACK TEST" << std::endl;
    }
    else {
        std::cout << "BASIC ATTACK TEST PASSED\n";
    }
}

void testSpecialAttack() {
    FirePokemon charmander("Charmander", 50);
    WaterPokemon squirtle("Squirtle", 50);
    charmander.specialAttack(squirtle);
    if(squirtle.getHealth() != 35) {
        std::cout << "FAILED SPECIAL ATTACK TEST" << std::endl;
    }
    else {
        std::cout << "SPECIAL ATTACK TEST PASSED\n";
    }
}


int main() {
    if (testPokemon()) {
        std::cout << "POKEMON CREATION PASSED" << std::endl;
    }
    testBasicAttack();
    testSpecialAttack();
    return 0;
}

#ifndef WATER_POKEMON_H
#define WATER_POKEMON_H
#include "Pokemon.h"

class WaterPokemon : public Pokemon {
public:
    WaterPokemon(std::string n, int h);

    //ovveride parent calss
    void basicAttack(Pokemon &opponent) override;
    void specialAttack(Pokemon &opponent) override;

    void display() const;
};

#endif
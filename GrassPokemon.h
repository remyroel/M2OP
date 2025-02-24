#ifndef GRASS_POKEMON_H
#define GRASS_POKEMON_H

#include "Pokemon.h"

class GrassPokemon : public Pokemon {
public:
    GrassPokemon(std::string n, int h);

    //override parent class
    void basicAttack(Pokemon &opponent) override;
    void specialAttack(Pokemon &opponent) override;

    void display() const;
};

#endif
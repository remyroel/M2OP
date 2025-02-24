#ifndef FIRE_POKEMON_H
#define FIRE_POKEMON_H

#include "Pokemon.h"

class FirePokemon : public Pokemon {
public:
    FirePokemon(std::string n, int h);

    // override Pokemon (parent class)
    void basicAttack(Pokemon &opponent) override;
    void specialAttack(Pokemon &opponent) override;

    void display() const;
};

#endif
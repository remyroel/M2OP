#include "GrassPokemon.h"

//constructor
GrassPokemon::GrassPokemon(std::string n, int h) : Pokemon(n, h) {}

// takes health off and says attack name
void GrassPokemon::basicAttack(Pokemon &opponent) {
    std::cout << name << " uses Razor Leaf on " << opponent.getName() << "!\n";
    opponent.setHealth(opponent.getHealth() - 10);
}
void GrassPokemon::specialAttack(Pokemon &opponent) {
    std::cout << name << " uses Energy Ball on " << opponent.getName() << "!\n";
    opponent.setHealth(opponent.getHealth() - 15);
}

// display current health
void GrassPokemon::display() const {
    std::cout << name << " : " << health << " HP.\n";
}

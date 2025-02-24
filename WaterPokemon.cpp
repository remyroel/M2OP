#include "WaterPokemon.h"

//constructor
WaterPokemon::WaterPokemon(std::string n, int h) : Pokemon(n, h) {}

//attacks, basic does 10, special does 15
void WaterPokemon::basicAttack(Pokemon &opponent) {
    std::cout << name << " uses Aqua jet on " << opponent.getName() << "!\n";
    opponent.setHealth(opponent.getHealth() - 10);
}
void WaterPokemon::specialAttack(Pokemon &opponent) {
    std::cout << name << " uses Hydro Pump on " << opponent.getName() << "!\n";
    opponent.setHealth(opponent.getHealth() - 15);
}

// display current health
void WaterPokemon::display() const {
    std::cout << name << " : " << health << " HP.\n";
}

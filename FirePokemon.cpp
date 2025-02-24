#include "FirePokemon.h"

// constructor
FirePokemon::FirePokemon(std::string n, int h) : Pokemon(n, h) {}

// takes health off and says attack name
void FirePokemon::basicAttack(Pokemon &opponent) {
    std::cout << name << " uses Fire Fang on " << opponent.getName() << "!\n";
    opponent.setHealth(opponent.getHealth() - 10);
}
void FirePokemon::specialAttack(Pokemon &opponent) {
    std::cout << name << " uses Ember on " << opponent.getName() << "!\n";
    opponent.setHealth(opponent.getHealth() - 15);
}

// shows current health
void FirePokemon::display() const {
    std::cout << name << " : " << health << " HP.\n";
}

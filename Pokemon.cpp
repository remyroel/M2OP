#include "Pokemon.h"

// constructor
Pokemon::Pokemon(std::string n, int h) : name(n), health(h) {}

// attacks, basic does 10 damage, special does 15 damage
void Pokemon::basicAttack(Pokemon &opponent) {
    std::cout << name << " attacks " << opponent.getName() << "!\n";
    opponent.setHealth(opponent.getHealth() - 10);
}
void Pokemon::specialAttack(Pokemon &opponent) {
    std::cout << name << " attacks " << opponent.getName() << "!\n";
    opponent.setHealth(opponent.getHealth() - 15);
}

// display current health
void Pokemon::display() const {
    std::cout << name << " : " << health << " HP.\n";
}

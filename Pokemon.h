#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>

class Pokemon {
protected:
    std::string name;
    int health;

public:
    // Constructor
    Pokemon(std::string n, int h);

    // virtual attack (to be overridden in child classes)
    virtual void basicAttack(Pokemon &opponent);
    virtual void specialAttack(Pokemon &opponent);

    void display() const;

    // getters
    int getHealth() const { return health; }
    std::string getName() const { return name; }

    // setter
    void setHealth(int h) { health = h; }

    // virtual destructor (cleanup)
    virtual ~Pokemon() = default;
};

#endif  // POKEMON_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "FirePokemon.h"
#include "WaterPokemon.h"
#include "GrassPokemon.h"

// user chooses and creates a pokemon
Pokemon* choosePokemon() {
    int choice;
    std::cout << "Choose your Pokémon:\n";
    std::cout << "1. Charmander (FIRE)\n";
    std::cout << "2. Squirtle (WATER)\n";
    std::cout << "3. Bulbasaur (GRASS)\n";
    std::cout << "Enter the number of your choice: ";
    std::cin >> choice;

    // input validation
    while (std::cin.fail() || choice < 1 || choice > 3) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Invalid choice. Please select 1, 2, or 3: ";
        std::cin >> choice;
    }

    switch (choice) {
        case 1: return new FirePokemon("Charmander", 50);
        case 2: return new WaterPokemon("Squirtle", 50);
        case 3: return new GrassPokemon("Bulbasaur", 50);
        default: return nullptr;
    }
}

// generates a random opponent
Pokemon* randomOpponent() {
    srand(time(nullptr));
    int randChoice = rand() % 3;

    switch (randChoice) {
        case 0: return new FirePokemon("Arcanine", 50);
        case 1: return new WaterPokemon("Starmie", 50);
        case 2: return new GrassPokemon("Cacturne", 50);
        default: return nullptr;
    }
}

// battle with cpu
void battle(Pokemon* player, Pokemon* opponent) {
    std::cout << "\nA wild " << opponent->getName() << " appeared!\n";

    //user turn
    while (player->getHealth() > 0 && opponent->getHealth() > 0) {
        int choice;
        std::cout << "\nChoose your attack:\n";
        std::cout << "1. Basic Attack\n";
        std::cout << "2. Special Attack\n";
        std::cout << "Enter attack number: ";
        std::cin >> choice;

        while (std::cin.fail() || choice < 1 || choice > 2) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Invalid choice! Please enter 1 or 2: ";
            std::cin >> choice;
        }

        std::cout << "\n" << player->getName() << " attacks!\n";

        switch (choice) {
            case 1: player->basicAttack(*opponent);
                    break;
            case 2: player->specialAttack(*opponent);
                    break;
            default: ;
        }
        opponent->display();

        if (opponent->getHealth() <= 0) {
            std::cout << "\n" << opponent->getName() << " fainted! You win!\n";
            break;
        }

        // opponent's turn
        std::cout << "\n" << opponent->getName() << " attacks!\n";
        srand(time(nullptr));
        int randChoice = rand() % 2;

        switch (randChoice) {
            case 0: opponent->basicAttack(*player);
                    break;
            case 1: opponent->specialAttack(*player);
                    break;
            default:;
        }
        player->display();

        if (player->getHealth() <= 0) {
            std::cout << "\n" << player->getName() << " fainted! You lost!\n";
        }
    }
}

int main() {
    std::cout << "Welcome to the Pokémon Battle!\n";
    Pokemon* player = choosePokemon();
    if (!player) return 1; //make sure player exist, otherwise exit

    // display chosen pokemon
    std::cout << "\nYou chose: ";
    player->display();

    Pokemon* opponent = randomOpponent(); // create random opponent Pokémon
    battle(player, opponent); //start battle

    return 0;
}

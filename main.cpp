#include <iostream>

#include "character.h"
#include "class.h"
#include "race.h"
#include "weapon.h"
#include "armor.h"
#include "enemy.h"
#include "stats.h"

using namespace std;

Character* createCharacter();

int main() {
    std::cout << "Welcome to the Final Adventure!\n";

    // Create character through the start menu
    Character* player = createCharacter();

    player->equipWeapon(new Staff());
    player->equipArmor(new Robe());

    std::cout << "Character Created: " << player->getDescription() << "\n";

    // Create an enemy
    Enemy darkWolf = DarkWolf();
    std::cout << "Enemy: " << darkWolf.getDescription() << "\n";

    // Start Combat Simulation (Basic)
    std::cout << "Combat starting between " << player->getName() << " and " << darkWolf.getName() << "\n";

    // Simulate player death
    std::cout << player->getName() << " died from " << darkWolf.getName() << "! \n!GAME OVER! (sad music plays...)\n";
    delete player;  // This triggers the death message in the destructor

    std::cout << "\nThank you for playing!\n";

    return 0;
}

Character* createCharacter() {
    std::string name;
    int raceChoice, classChoice;

    std::cout << "Enter your character's name: ";
    std::cin >> name;

    std::cout << "Choose your race:\n";
    std::cout << "1. Elf\n";
    std::cin >> raceChoice;

    Race* race = nullptr;
    if (raceChoice == 1) {
        race = new Elf();
    }

    std::cout << "Choose your class:\n";
    std::cout << "1. Wizard\n";
    std::cin >> classChoice;

    Character* character = nullptr;
    if (classChoice == 1) {
        character = new Wizard(race);
    }

    character->setName(name);
    return character;
}

#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include "stats.h"

// Forward declarations
class Weapon;
class Armor;

class Character {
protected:
    std::string name;
    Stats stats;
    Weapon* weapon;
    Armor* armor;

public:
    virtual ~Character() {}

    void setName(const std::string& playerName) { name = playerName; }
    std::string getName() { return name; }
    virtual std::string getDescription() = 0;
    virtual void equipWeapon(Weapon* w) { weapon = w; }
    virtual void equipArmor(Armor* a) { armor = a; }
    virtual Stats getStats() { return stats; }
};

#endif

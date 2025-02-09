#ifndef CLASS_H
#define CLASS_H

#include "character.h"
#include "weapon.h"
#include "armor.h"
#include "race.h"

class Wizard : public Character {
private:
    Weapon* weapon;
    Armor* armor;

public:
    Wizard(Race*race) {
        name = "Wizard";
        stats = race->getBaseStats();
        stats.MAG += 10; // Wizards are naturally more magical
    }

    void equipWeapon(Weapon* weapon) override {
        this->weapon = weapon;
    }

    void equipArmor(Armor* armor) override {
        this->armor = armor;
    }

    std::string getDescription() override {
        return "A wise Wizard.";
    }

    Stats getStats() override {
        return stats;
    }
};

#endif

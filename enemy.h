#ifndef ENEMY_H
#define ENEMY_H

#include "stats.h"
#include <string>

class Enemy {
protected:
    std::string name;
    Stats stats;

public:
    Enemy(std::string name, Stats stats) : name(name), stats(stats) {}
    virtual ~Enemy() {}

    std::string getName() { return name; }
    Stats getStats() { return stats; }
    std::string getDescription() { return "A ferocious " + name + "."; }
};

class DarkWolf : public Enemy {
public:
    DarkWolf() : Enemy("Dark Wolf", {7, 4, 2, 6, 5}) {}  // Example stats for the Dark Wolf
};

#endif

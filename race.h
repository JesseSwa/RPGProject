#ifndef RACE_H
#define RACE_H

#include "stats.h"

class Race {
public:
    virtual ~Race() {}
    virtual Stats getBaseStats() = 0;
    virtual std::string getRaceName() = 0;
};

class Elf : public Race {
public:
    Stats getBaseStats() override {
        Stats stats = {5, 3, 8, 6, 7};  // Example stats: STR, DEF, MAG, DEX, AGI
        return stats;
    }

    std::string getRaceName() override {
        return "Elf";
    }
};

#endif

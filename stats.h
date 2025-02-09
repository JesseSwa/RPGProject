#ifndef STATS_H
#define STATS_H

struct Stats {
    int ATK;  // Attack
    int DEF;  // Defense
    int MAG;  // Magic
    int DEX;  // Dexterity
    int AGI;  // Agility

    Stats(int atk = 0, int def = 0, int mag = 0, int dex = 0, int agi = 0)
        : ATK(atk), DEF(def), MAG(mag), DEX(dex), AGI(agi) {}
};

#endif

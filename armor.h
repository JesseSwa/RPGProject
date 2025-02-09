#ifndef ARMOR_H
#define ARMOR_H

#include <string>

class Armor {
protected:
    std::string name;
    int defense;

public:
    Armor(std::string name, int defense) : name(name), defense(defense) {}
    virtual ~Armor() {}

    int getDefense() { return defense; }
    std::string getName() { return name; }
};

class Robe : public Armor {
public:
    Robe() : Armor("Robe", 5) {}
};

#endif

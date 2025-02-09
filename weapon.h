#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
protected:
    std::string name;
    int power;

public:
    Weapon(std::string name, int power) : name(name), power(power) {}
    virtual ~Weapon() {}

    int getPower() { return power; }
    std::string getName() { return name; }
};

class Staff : public Weapon {
public:
    Staff() : Weapon("Staff", 10) {}
};

#endif

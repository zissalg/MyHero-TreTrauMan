#ifndef UNITTYPE_H
#define UNITTYPE_H

#include "Misc.h"

struct UnitType {
    std::string unitName;
    std::string texturePath;
    uint speed;
    uint attackDmg;
    uint attackSpeed;
};

#endif // UNITTYPE_H

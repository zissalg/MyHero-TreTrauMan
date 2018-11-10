#ifndef UNITTYPE_H
#define UNITTYPE_H

#include "Misc.h"

struct UnitType {
    uint typeId;
    std::string texturePath;
    float scale;
    uint speed;
    uint atkDmg;
    uint atkSpd;

    void readFromFile(std::string fileName);
};

#endif // UNITTYPE_H

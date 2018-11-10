#ifndef OBJECT_H
#define OBJECT_H

#include "Misc.h"

class Object {
public:
    Object();

    virtual ~Object() {}

    virtual void draw(sf::RenderWindow& window) = 0;
};

#endif // OBJECT_H

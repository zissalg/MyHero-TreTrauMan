#ifndef OBJECTMANAGER_H
#define OBJECTMANAGER_H

#include "Misc.h"
#include "Object.h"
#include "Window.h"
#include "Unit.h"

class ObjectManager {
public:
    ObjectManager(Window* window);

    ~ObjectManager();

    Unit* createUnit(UnitType type, sf::Vector2f pos = sf::Vector2f(0.f, 0.f));

    void removeUnit(Unit* unit);

    void draw();
private:

    sf::RenderWindow*  _window;

    std::list<Object*> _objects;

};

#endif // OBJECTMANAGER_H

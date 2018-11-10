#include "ObjectManager.h"

ObjectManager::ObjectManager(Window* window)
    : _window(window->window())
{

}

ObjectManager::~ObjectManager()
{
    for (auto obj : _objects)
        delete obj;
}

Unit* ObjectManager::createUnit(UnitType type, sf::Vector2f pos)
{
    Unit* unit = new Unit;

    unit->setUnitType(type);
    unit->setPosition(pos);

    _objects.push_back(unit);

    return unit;
}

void ObjectManager::removeUnit(Unit *unit)
{
    _objects.remove(unit);
    delete unit;
}

void ObjectManager::draw()
{
    for (auto obj : _objects)
        obj->draw(*_window);
}

#include "Window.h"
#include "Unit.h"
#include "ObjectManager.h"
#include "Terrain.h"

Window window(sf::Vector2i(800, 600));
Terrain terrain(&window, sf::Vector2i(16, 16));
ObjectManager objMan(&window);
Unit* myHero;
UnitType mainChar = {
    0,
    "textures/tretrauman.png",
    4.0f,
    1,
    1,
    1,
};

void rotateChar(sf::Event& event)
{
    myHero->setAngle();
}

int main()
{
    myHero = objMan.createUnit(mainChar, sf::Vector2f(50.f, 50.f));

    while (window.isOpen())
    {
        window.begin();

        terrain.draw();

        objMan.draw();

        window.end();
    }
    return 0;
}

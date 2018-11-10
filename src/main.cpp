#include "Window.h"
#include "Unit.h"

Window window(sf::Vector2i(800, 600));
Unit treTrauMan;
Unit monsterTest;
Unit bullet;

void hasClicked(sf::Event& event)
{

    if (event.type != sf::Event::MouseButtonPressed)
        return;

    auto pos = treTrauMan.position();

    pos.y -= 40;
    pos.x += 32 - 8;

    bullet.setPosition(pos);
}

int main()
{
    window.registerAct(hasClicked);

    bullet.setTexture("textures/bullet.png");
    bullet.setScale(2.0f);

    treTrauMan.setTexture("textures/tretrauman.png");
    treTrauMan.setPosition(sf::Vector2f(500, 300));

    monsterTest.setTexture("textures/tree01.png");
    monsterTest.setPosition(sf::Vector2f(300, 200));

    bullet.setTexture("textures/bullet.png");

    while (window.isOpen())
    {
        window.begin();

        sf::Vector2f bulletPos = bullet.position();

        bulletPos.y -= 1;

        bullet.setPosition(bulletPos);


        window.draw(treTrauMan);
        window.draw(monsterTest);
        window.draw(bullet);
        window.end();
    }
    return 0;
}

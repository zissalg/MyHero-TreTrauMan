#ifndef WINDOW_H
#define WINDOW_H

#include "Misc.h"
#include "Object.h"

class Window {
public:
    Window(sf::Vector2i size);

    ~Window();

    void begin();

    void end();

    bool isOpen();

    void registerAct(void (*func)(sf::Event&));

    sf::RenderWindow* window();

private:

    sf::RenderWindow _window;

    sf::Vector2f     _size;

    std::list<void(*)(sf::Event&)> _actions;
};

#endif // WINDOW_H

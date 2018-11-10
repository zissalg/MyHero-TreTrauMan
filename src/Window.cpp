#include "Window.h"

Window::Window(sf::Vector2i size)
    : _window(sf::VideoMode(size.x, size.y), "My Hero - The Tre Trau Man")
{
}

Window::~Window()
{

}

void Window::registerAct(void (*func)(sf::Event& event))
{
    _actions.push_back(func);
}

void Window::begin()
{
    sf::Event event;
    while (_window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            _window.close();

        for (auto act : _actions)
            if (act != nullptr)
                act(event);
    }

    _window.clear();
}

void Window::end()
{
    _window.display();
}

bool Window::isOpen()
{
    return _window.isOpen();
}

void Window::draw(Object &obj)
{
    obj.draw(_window);
}

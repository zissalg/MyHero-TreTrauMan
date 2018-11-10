#ifndef TERRAIN_H
#define TERRAIN_H

#include "Misc.h"
#include "Window.h"
#include "TextureManager.h"

class Terrain {
public:

    Terrain(Window* window, sf::Vector2i size);

    ~Terrain();

    void draw();

private:

    sf::RenderWindow*       _window;

    sf::Vector2i            _size;

    std::vector<sf::Sprite> _tiles;

};

#endif // TERRAIN_H

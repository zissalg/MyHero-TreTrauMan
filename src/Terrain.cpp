#include "Terrain.h"

Terrain::Terrain(Window* window, sf::Vector2i size)
    : _window(window->window())
    , _size(size)
{
    sf::Sprite sprite;
    sprite.setTexture(TextureManager::instance().find("textures/dust.png"));
    sprite.setScale(sf::Vector2f(4.0f, 4.0f));

    for (int i = 0; i < _size.y; ++i)
    {
        for (int j = 0; j < _size.x; ++j)
        {
            sprite.setPosition(64 * j, 64 * i);
            _tiles.push_back(sprite);
        }
    }
}

Terrain::~Terrain()
{
}

void Terrain::draw()
{
    for (auto tile : _tiles)
        _window->draw(tile);
}

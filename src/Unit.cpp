#include "Unit.h"

Unit::Unit()
{
    setScale(4.0f);
}

Unit::~Unit()
{

}

void Unit::setTexture(std::string texturePath)
{
    _sprite.setTexture(TextureManager::instance().find(texturePath));
}

void Unit::draw(sf::RenderWindow& window)
{
    window.draw(_sprite);
}

const sf::Vector2f& Unit::position()
{
    return _sprite.getPosition();
}

void Unit::setPosition(const sf::Vector2f &newPos)
{
    _sprite.setPosition(newPos);
}


float Unit::scale()
{
    return _sprite.getScale().x;
}

void Unit::setScale(float scl)
{
    _sprite.setScale(sf::Vector2f(scl, scl));
}

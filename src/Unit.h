#ifndef UNIT_H
#define UNIT_H

#include "Misc.h"
#include "Object.h"
#include "TextureManager.h"
#include "UnitType.h"

class Unit : public Object {
public:
    Unit();

    ~Unit();

    const sf::Vector2f& position();

    void setTexture(std::string texturePath);

    void setPosition(const sf::Vector2f& newPos);

    float scale();

    void setScale(float scl);

    void draw(sf::RenderWindow& window);

private:
    UnitType          _unitType;
    sf::Sprite        _sprite;
};

#endif // UNIT_H

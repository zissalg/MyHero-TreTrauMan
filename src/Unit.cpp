#include "Unit.h"

Unit::Unit()
{
    setScale(4.0f);
}

Unit::~Unit()
{

}

void Unit::setUnitType(UnitType unitType)
{
    _unitType = unitType;
    update();
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

void Unit::update()
{
    setTexture(_unitType.texturePath);
    setScale(_unitType.scale);
}

uint Unit::atkDmg()
{
    return _unitType.atkDmg;
}

void Unit::setAttackDmg(uint newAtkDmg)
{
    _unitType.atkDmg = newAtkDmg;
}

uint Unit::atkSpd()
{
    return _unitType.speed;
}

void Unit::setAttackSpeed(uint newAtkSpd)
{
    _unitType.atkSpd = newAtkSpd;
}

uint Unit::speed()
{
    return _unitType.speed;
}

void Unit::setSpeed(uint newSpd)
{
    _unitType.speed = newSpd;
}

void Unit::setAngle(float angle)
{
    _sprite.rotate(angle);
}

float Unit::angle()
{
    return _sprite.getRotation();
}

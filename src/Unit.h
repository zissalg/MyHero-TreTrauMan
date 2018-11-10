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

    uint atkDmg();

    void setAttackDmg(uint newAtkDmg);

    uint atkSpd();

    void setAttackSpeed(uint newAtkSpd);

    uint speed();

    void setSpeed(uint newSpd);

    void setUnitType(UnitType unitType);

    void setTexture(std::string texturePath);

    const sf::Vector2f& position();

    void setPosition(const sf::Vector2f& newPos);

    float angle();

    void setAngle(float angle);

    float scale();

    void setScale(float scl);

    void draw(sf::RenderWindow& window);

private:
    void update();

    UnitType          _unitType;
    sf::Sprite        _sprite;
};

#endif // UNIT_H

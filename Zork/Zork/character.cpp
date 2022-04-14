#include "Character.h"

Character::Character()
{
    this->description = "Default Character";
}

Character::Character(string description) {
	this->description = description;
    health = 100;
}

Character::~Character()
{

}

void Character::setHealth(int newHealth)
{
    this->health = newHealth;
}

int Character::getHealth()
{
    return this->health;
}



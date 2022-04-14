#include "weapon.h"

Weapon::Weapon(string description, int weightGrams, float value, int damage, int durability) : Item(description, weightGrams, value)
{
    this->damage = damage;
    this->durability = durability;
}

void Weapon::setDamage(int damage)
{
    this->damage = damage;
}

int Weapon::getDamage()
{
    return this->damage;
}

void Weapon::setDurability(int durability)
{
    this->durability = durability;
}

int Weapon::getDurability()
{
    return this->durability;
}


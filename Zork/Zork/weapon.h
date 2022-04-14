#ifndef WEAPON_H
#define WEAPON_H

#include "item.h"

class Weapon : public Item
{
public:
    Weapon(string description, int weightGrams, float value, int damage, int durability);
    int getDurability();
    void setDurability(int durability);
    int getDamage();
    void setDamage(int damage);

private:
    int damage;
    int durability;
};

#endif // WEAPON_H

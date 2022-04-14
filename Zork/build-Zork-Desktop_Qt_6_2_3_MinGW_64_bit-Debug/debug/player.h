#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"
class player : public Character
{
public:
    player(int damage, int armour, bool defeated);
    int attack(bool alert);
    int getDamage();
    void setDamage(int damage);
    int getArmour();
    void setArmour(int armour);
    virtual void setHealth(int newHealth);
    void isDefeated();
    bool defeatStatus();

private:
    int damage;
    int armour;
    bool defeated;
};

#endif // PLAYER_H

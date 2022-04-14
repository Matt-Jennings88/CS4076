#ifndef ENEMY_H
#define ENEMY_H
#include "Character.h"


class Enemy : public Character
{
public:
    Enemy(int damage, bool alert, bool defeated);
    int attack(bool alert);
    int getDamage();
    void setDamage(int damage);
    bool getStatus();
    void setStatus(bool status);
    virtual void setHealth(int newHealth);
    void isDefeated();
    bool defeatStatus();

private:
    int damage;
    bool status;
    bool defeated;
};

#endif // ENEMY_H

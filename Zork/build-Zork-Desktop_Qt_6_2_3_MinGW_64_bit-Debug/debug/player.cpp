#include "player.h"

player::player(int damage, int armour, bool defeated)
{
    this->damage = damage;
    this->armour = armour;
    this->defeated = false;
}

int player::getDamage()
{
    return this->damage;
}

void player::setDamage(int damage)
{
    this->damage = damage;
}

int player::getArmour()
{
    return this->armour;
}

void player::setArmour(int newArmour)
{
    this->armour = newArmour;
    if(this->armour <= 0)
    {
        this->armour = 0;
    }else if(this->armour > 50)
    {
        this->armour = 50;
    }
}

void player::setHealth(int newHealth)
{
    this->health = newHealth;
    if(this->health <= 0)
    {
        this->health = 0;
    }else if(this->health > 100)
    {
        this->health = 100;
    }
}

bool player::defeatStatus()
{
    return defeated;
}

void player::isDefeated()
{
    if(this->health == 0)
    {
        defeated = true;
    }

}


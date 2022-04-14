#include "enemy.h"

Enemy::Enemy(int damage, bool alert, bool defeated)
{
    this->damage = damage;
    this->status = alert;
    this->defeated = false;
}

int Enemy::attack(bool alert)
{
    if(alert)
    {
        return getDamage();
    }
}

int Enemy::getDamage()
{
    return this->damage;
}

void Enemy::setDamage(int damage)
{
    this->damage = damage;
}

bool Enemy::getStatus()
{
    return this->status;
}

void Enemy::setStatus(bool status)
{
    this->status = status;
}

void Enemy::setHealth(int newHealth)
{
    this->health = newHealth;
    if(this->health <= 0)
    {
        this->health = 0;
    }else if(this->health > 200)
    {
        this->health = 200;
    }
}

bool Enemy::defeatStatus()
{
    return defeated;
}

void Enemy::isDefeated()
{
    if(this->health == 0)
    {
        defeated = true;
    }

}

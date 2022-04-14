#include "ogre.h"

ogre::ogre(string description, int health, int damage, bool status) : Enemy(description, health, damage, status)
{
    this->description = "A Fierce Ogre, weak to blades";
    this->defeated = false;
}

ogre::~ogre()
{

}

void ogre::isDefeated(){
    if(this->health <= 0){
        defeated = true;
    }else{
        defeated =false;
    }
}

bool ogre::defeatStatus(){
    isDefeated();
    return defeated;
}

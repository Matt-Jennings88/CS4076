#ifndef OGRE_H
#define OGRE_H

#include "enemy.h"

class ogre
{
public:
    ogre(string description, int damage, int health, bool status);
    ~ogre();
    void isDefeated();
    bool defeatStatus();
private:
    bool defeated;
};

#endif // OGRE_H

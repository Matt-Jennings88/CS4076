#ifndef CHARACTER_H_
#define CHARACTER_H_

#include <string>
using namespace std;
#include <vector>
using std::vector;


class Character {
protected:
    string description;
    int health;
    virtual void setHealth(int newHealth) = 0;
    int getHealth();

public:
    Character();
    Character(string description);
    virtual ~Character();
    inline string getDescription()
    {
        return description;
    }

};

#endif

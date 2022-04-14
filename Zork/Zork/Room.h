#ifndef ROOM_H_
#define ROOM_H_

#include <map>
#include <string>
#include <vector>
#include "item.h"
#include "weapon.h"
#include "Character.h"
using namespace std;
using std::vector;

class Room {

private:
	string description;
	map<string, Room*> exits;
    string exitString();
    void setExits(Room *north, Room *east, Room *south, Room *west);
    void addItem(Item *inItem);
    void addCharacter(Character *character);
    int isItemInRoom(string inString);
    friend class ZorkUL;


public:
    inline
    int numberOfItems();
	Room(string description);
	string shortDescription();
	string longDescription();
	Room* nextRoom(string direction);
    string displayItem();
    void removeItemFromRoom(int location);
    bool hasExit(string exit);
    vector <Item> itemsInRoom;
};

#endif

#ifndef ZORKUL_H_
#define ZORKUL_H_

#include "Command.h"
#include "Parser.h"
#include "Room.h"
#include "item.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class ZorkUL {
private:
	Room *currentRoom;
    vector <Room> rooms;
	void createRooms();
    Room& curRoom = *currentRoom;
    bool processCommand(Command command);
    void goRoom(Command command);
    void createItems();
    void displayItems();

public:

	ZorkUL();
	void play();
    string printMap();
    string printHelp();
    string printWelcome();
	string go(string direction);
    Room getCurrentRoom();
    string teleport();
};

#endif /*ZORKUL_H_*/

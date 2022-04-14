#include <iostream>
#include "errors.h"

using namespace std;
#include "ZorkUL.h"

/*int main(int argc, char argv[]) {
	ZorkUL temp;
	temp.play();
	return 0;
}*/

string map;

ZorkUL::ZorkUL() {
	createRooms();
}

void ZorkUL::createRooms()  {
    Room *a, *b, *c, *d, *e, *f, *g, *h, *i, *j;

	a = new Room("a");
        a->addItem(new Item("x", 1, 11));
        a->addItem(new Item("y", 2, 22));
	b = new Room("b");
        b->addItem(new Item("xx", 3, 33));
        b->addItem(new Item("yy", 4, 44));
	c = new Room("c");
	d = new Room("d");
	e = new Room("e");
	f = new Room("f");
	g = new Room("g");
	h = new Room("h");
    i = new Room("i");
    j = new Room("j");

//             (N, E, S, W)
	a->setExits(f, b, d, c);
	b->setExits(NULL, NULL, NULL, a);
	c->setExits(NULL, a, NULL, NULL);
	d->setExits(a, e, NULL, i);
	e->setExits(NULL, NULL, NULL, d);
	f->setExits(NULL, g, a, h);
	g->setExits(NULL, NULL, NULL, f);
	h->setExits(NULL, f, NULL, NULL);
    i->setExits(NULL, d, NULL, j);
    j->setExits(NULL, i, NULL, NULL);

        currentRoom = a;
}


/** COMMANDS **/
string ZorkUL::printMap()
{
extern string map;
map = "Map:                        \n"
      "        [h] --- [f] --- [g] \n"
      "                 |          \n"
      "                 |          \n"
      "        [c] --- [a] --- [b] \n"
      "                 |          \n"
      "                 |          \n"
      "[j] --- [i] --- [d] --- [e] \n";
return map + "\n";
}

string ZorkUL::printWelcome() {
    return "\nWelcome to Zork.\n"
            "\nThe game allows you to move around the map by using buttons"
            "Feel free to mess around";
}

string ZorkUL::printHelp() {
    return "\nThe buttons as following do the current functions:"
            "\nNorth/East/South/West : Moves to the room in that direction."
            "\nTeleport : Teleports the character to a random room."
            "\nHelp : Prints what you're currently reading."
            "\nMap : Shows the map."
            "\nQuit : Self explanatory. Ends the game.";

}

void ZorkUL::goRoom(Command command) {
	if (!command.hasSecondWord()) {
		cout << "incomplete input"<< endl;
		return;
	}

	string direction = command.getSecondWord();

	// Try to leave current room.
	Room* nextRoom = currentRoom->nextRoom(direction);

	if (nextRoom == NULL)
		cout << "underdefined input"<< endl;
	else {
		currentRoom = nextRoom;
		cout << currentRoom->longDescription() << endl;
	}
}

string ZorkUL::go(string direction) {
    string output;
    try {
        Room* nextRoom = currentRoom->nextRoom(direction);
        if (nextRoom == NULL)
            throw RoomError();
        else
            {
                currentRoom = nextRoom;
                output = currentRoom->longDescription();
            }
        }catch (RoomError &NoRoomError) {
            output = NoRoomError.NoRoomError();
        }
        return output;
}

Room ZorkUL::getCurrentRoom()
{
    return curRoom;
}

string ZorkUL::teleport() {
    currentRoom = &rooms.at((int) rand() % rooms.size());
    return currentRoom->longDescription();
}

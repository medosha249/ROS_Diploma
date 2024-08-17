#include <iostream>

class Room
{
    int size;

public:
    Room(int size) : size(size) {}
};

class House
{
    Room *room;
    Room *bathRoom;

public:
    House() : room(new Room()), bathRoom(new Room()) {}
    ~House()
    {
        delete room;
        delete bathRoom;
    }
};
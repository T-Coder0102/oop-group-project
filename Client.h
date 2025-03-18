#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>

#include "RoomDirect/Room.h"
using namespace std;

class Client {
    public:
    Client(int name,int age);
private:
    int name;
    int age;
    int clientId;
    Room *room;
};
#endif //CLIENT_H

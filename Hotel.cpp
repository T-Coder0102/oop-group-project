#include "Hotel.h"
vector<Client *> Hotel::getClientsList() {
    return clients;
}
void Hotel::setClientsList(Client* client) {
    clients.push_back(client);
}
vector<Member*> Hotel::getMembersList() {
    return members;
}
void Hotel::setMembersList(Member* member) {
    members.push_back(member);
}
vector<Room *> Hotel::getFRoomsList() {
    return Freerooms;
}

void Hotel::addNewRoom(Room* room)
{
    Freerooms.push_back(room);
    for (int i = 0; i < NfreeRooms.size(); i++)
    {
        if (NfreeRooms[i] == room)
        {
            NfreeRooms.erase(NfreeRooms.begin() + i);
        }
    }
}
void Hotel::removeRoom(Room* room)
{
    NfreeRooms.push_back(room);
    for (int i = 0; i < Freerooms.size(); i++)
    {
        if (Freerooms[i] == room)
        {
            Freerooms.erase(Freerooms.begin() + i);
        }
    }
}
void Hotel::addMember(Member* member) {
    members.push_back(member);
}
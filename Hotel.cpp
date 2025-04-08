#include "Hotel.h"
vector<Client *> Hotel::getClientsList() {
    return clients;
}
void Hotel::addClientsToList(Client* client) {
    clients.push_back(client);
}

void Hotel::removeClient(Client& client)
{
    for(int i=0; i<clients.size(); i++)
    {
        if(clients.at(i)->getRoomID()==client.getRoomID())
        {
            clients.erase(clients.begin()+i);
        }
    }
}

vector<Member*> Hotel::getMembersList() {
    return members;
}
void Hotel::addMembersToList(Member* member) {
    members.push_back(member);
}
vector<Room *> Hotel::getFreeRoomsList() {
    return Freerooms;
}

vector<Room*> Hotel::getNFreeRoomsList()
{
    return NFreeRooms;
}

void Hotel::addNewRoom(Room* room)
{
    Freerooms.push_back(room);
    for (int i = 0; i < NFreeRooms.size(); i++)
    {
        if (NFreeRooms[i]->getRoomNum() == room->getRoomNum())
        {
            NFreeRooms.erase(NFreeRooms.begin() + i);
        }
    }
}
void Hotel::removeRoom(Room* room)
{
    NFreeRooms.push_back(room);
    for (int i = 0; i < Freerooms.size(); i++)
    {
        if (Freerooms[i]->getRoomNum() == room->getRoomNum())
        {
            Freerooms.erase(Freerooms.begin() + i);
        }
    }
}
void Hotel::addMember(Member* member) {
    members.push_back(member);
}
void Hotel::addTotalRevenue(double totalRevenue) {
    this->totalRevenue += totalRevenue;
}
double Hotel::getTotalRevenue() {
    return totalRevenue;
}

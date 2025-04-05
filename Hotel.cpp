#include "Hotel.h"
vector<Client *> Hotel::getClientsList() {
    return clients;
}
void Hotel::setClientsList(Client* client) {
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
void Hotel::setMembersList(Member* member) {
    members.push_back(member);
}
vector<Room *> Hotel::getFRoomsList() {
    return Freerooms;
}

vector<Room*> Hotel::getNFRoomsList()
{
    return NfreeRooms;
}

void Hotel::addNewRoom(Room* room)
{
    Freerooms.push_back(room);
    for (int i = 0; i < NfreeRooms.size(); i++)
    {
        if (NfreeRooms[i]->getRoomNum() == room->getRoomNum())
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
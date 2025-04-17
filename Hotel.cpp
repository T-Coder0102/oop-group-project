#include "Hotel.h"
using namespace std;
vector<Client *> Hotel::getClientsList() {
    return clients;
}
void Hotel::addClientsToList(Client* client) {
    clients.push_back(client);
}

void Hotel::setSalaryOfEmployee(double salaryOfEmployee, int ID){
        for (int i = 0; i < members.size(); i++)
        {
            if (members[i]->getID()==ID)
            {
                members[i]->setSalary(salaryOfEmployee);
            }
        }
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
void Hotel::removeMember(int ID) {
    for (int i = 0; i < members.size(); i++) {
        if (members[i]->getID()==ID) {
            members.erase(members.begin()+i);
        }
    }
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
vector<InternDef*> Hotel::getInternDefsList()
{
    return interns;
}
void Hotel::addInternDefs(InternDef* internDef)
{
    interns.push_back(internDef);
}
void Hotel::displayInternDefs()
{
    for(InternDef* a:interns)
    {
        a->getDetailsOfInterns();
        cout<<endl;
    }
}








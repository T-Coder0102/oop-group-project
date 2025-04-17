#ifndef HOTEL_H
#define HOTEL_H
#include <vector>
#include <iostream>
#include "Client.h"
#include "MemberDirect/Member.h"
#include "RoomDirect/Room.h"
#include "InternDirect/InternDef.h"
using namespace std;
class Hotel {
    public:

    vector<Client*> getClientsList();
    void addClientsToList(Client* client);
    vector<Member*> getMembersList();
    void addMembersToList(Member* member);
    vector<Room*> getFreeRoomsList();
    vector<Room*> getNFreeRoomsList();
    void addNewRoom(Room* room);
    void removeRoom(Room* room);
    void addMember(Member* member);
    void removeMember(int ID);
    void removeClient(Client &client);
    void addTotalRevenue(double totalRevenue);
    void setSalaryOfEmployee(double salaryOfEmployee,int ID);
    double getTotalRevenue();
    vector<InternDef*> getInternDefsList();
    void addInternDefs(InternDef* internDef);
    void displayInternDefs();
private:
    double totalRevenue=0;
    vector<Client*> clients;
    vector<Member*> members;
    vector<Room*> Freerooms;
    vector<Room*> NFreeRooms;
    vector<InternDef*> interns;

};
#endif //HOTEL_H

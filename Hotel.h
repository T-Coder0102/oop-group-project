#ifndef HOTEL_H
#define HOTEL_H
#include <vector>
#include <iostream>

#include "Client.h"
#include "MemberDirect/Member.h"
#include "RoomDirect/Room.h"
using namespace std;
class Hotel {
    public:

    vector<Client*> getClientsList();
    void setClientsList(Client* client);
    vector<Member*> getMembersList();
    void setMembersList(Member* member);
    vector<Room*> getFRoomsList();
    vector<Room*> getNFRoomsList();
    void addNewRoom(Room* room);
    void removeRoom(Room* room);
    void addMember(Member* member);
    void removeClient(Client &client);
    void addTotalRevenue(double totalRevenue);
    double getTotalRevenue();
private:
    double totalRevenue=0;
    vector<Client*> clients;
    vector<Member*> members;
    vector<Room*> Freerooms;
    vector<Room*> NfreeRooms;

};
#endif //HOTEL_H

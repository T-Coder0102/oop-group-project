#ifndef ROOMSERVICE_H
#define ROOMSERVICE_H
#include "Member.h"
#include "../Restaurant.h"
#include "../RoomDirect/Room.h"
#include "../Client.h"
class RoomService : public Member {
    public:
    RoomService(string name,int age,int yearsOfExperience,int ID,char gender,string status,double salary);
    void cleanRoom(int id);
    //newly added
    void serveFood(string meal,Restaurant &restaurant,Client &client);
    void giveMenu(Restaurant &res);
    //newly added
    vector<int>getRoomsToClean();
    void setRoomsToClean(int id);
private:
    //newly added
    vector<int> roomsToClean;

};

#endif //ROOMSERVICE_H

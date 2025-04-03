#ifndef ROOMSERVICE_H
#define ROOMSERVICE_H
#include "Member.h"
#include "../Restaurant.h"
#include "../RoomDirect/Room.h"
#include "../Client.h"
class RoomService : public Member {
    public:
    RoomService(string name,int age,int yearsOfExperience,int ID,char gender,string status);
    void cleanRoom(int id);
    void serveFood(string meal,Restaurant &restaurant);
    void giveMenu(Restaurant &res);

};

#endif //ROOMSERVICE_H

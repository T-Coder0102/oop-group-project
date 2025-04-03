#ifndef ROOMSERVICE_H
#define ROOMSERVICE_H
#include "Member.h"
#include "../Restaurant.h"
#include "../RoomDirect/Room.h"
class RoomService : public Member {
    public:
    RoomService(string name,int age,int yearsOfExperience,int ID,char gender);
    void cleanRoom(int id);
    void serveFood(string meal);
    void giveMenu(Restaurant &res);
};

#endif //ROOMSERVICE_H

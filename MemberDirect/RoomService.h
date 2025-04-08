#ifndef ROOMSERVICE_H
#define ROOMSERVICE_H
#include "Member.h"
#include "../Restaurant.h"
#include "../RoomDirect/Room.h"
#include "../Client.h"
#include "../Hotel.h"
class RoomService : public Member {
    public:
    RoomService(string name,int age,int yearsOfExperience,int ID,char gender,string status,double salary);
    void cleanRoom(int id,Hotel hotel);
    void serveFood(string meal,Restaurant &restaurant,Client &client);
    void giveMenu(Restaurant &res);
private:


};

#endif //ROOMSERVICE_H

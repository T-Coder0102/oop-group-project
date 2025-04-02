#ifndef ROOMSERVICE_H
#define ROOMSERVICE_H
#include "Member.h"
class RoomService : public Member {
    public:
    RoomService(string name,int age,int yearsOfExperience,int ID,char gender);
    void cleanRoom();
    void serveFood();
};

#endif //ROOMSERVICE_H

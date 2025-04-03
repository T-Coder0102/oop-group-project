#ifndef MANAGER_H
#define MANAGER_H
#include "Member.h"
#include "../Hotel.h"
class Manager : public Member {
public:
    Manager(string name,int age,int yearsOfExperience,int ID,char gender,string status,double salary);
    void displayClients(Hotel &hotel);
    void displayMembers(Hotel &hotel);
    void addMember(Member &member,Hotel &hotel);
private:
    Hotel hotel;
};

#endif //MANAGER_H

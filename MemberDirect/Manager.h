#ifndef MANAGER_H
#define MANAGER_H
#include "Member.h"
#include "../Hotel.h"
class Manager : public Member {
public:
    Manager(string name,int age,int yearsOfExperience,int ID,char gender,string status);
    void displayClients();
    void displayMembers();
private:
    Hotel hotel;
    string status;


};

#endif //MANAGER_H

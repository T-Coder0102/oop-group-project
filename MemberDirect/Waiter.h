#ifndef WAITER_H
#define WAITER_H
#include "Member.h"
#include "../Restaurant.h"
#include"../Client.h"
class Waiter : public Member {
    public:
    Waiter(string name,int age,int yearsOfExperience,int ID,string gender,string status,double salary);
    void giveMenu(Restaurant &res);
    void takeOrder(string meal,Client &client,Restaurant &res);
};

#endif //WAITER_H

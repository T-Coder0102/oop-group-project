#ifndef WAITER_H
#define WAITER_H
#include "Member.h"
#include "../Restaurant.h"
#include"../Client.h"
class Waiter : public Member {
    public:
    Waiter(string name,int age,int yearsOfExperience,int ID,char gender,string status,double salary);
    void giveMenu(Restaurant &res);
    //newly added
    void takeOrder(string meal,Client &client,Restaurant &res);
};

#endif //WAITER_H

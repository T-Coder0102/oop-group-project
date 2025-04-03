#ifndef WAITER_H
#define WAITER_H
#include "Member.h"
#include "../Restaurant.h"
class Waiter : public Member {
    public:
    Waiter(string name,int age,int yearsOfExperience,int ID,char gender,string status);
    void giveMenu(Restaurant &res);
    void bookOrder(string meal,Restaurant &res);
};

#endif //WAITER_H

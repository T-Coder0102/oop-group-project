#ifndef WAITER_H
#define WAITER_H
#include "Member.h"
class Waiter : public Member {
    public:
    Waiter(string name,int age,int yearsOfExperience,int ID,char gender);
    void giveMenu();
    void bookOrder(string meal);
};

#endif //WAITER_H

#ifndef CHEF_H
#define CHEF_H

#include <iostream>
#include "../Restaurant.h"
#include "Member.h"
using namespace std;

class Chef:public Member {
    public:
    Chef(string name,int age,int yearsOfExperience,int ID,string gender,string status,double salary);

    void addMeal(Meal* meal,Restaurant &restaurant);
    void removeMeal(string meal,Restaurant &restaurant);
};

#endif //CHEF_H

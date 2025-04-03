#ifndef CHEF_H
#define CHEF_H

#include <iostream>
#include "../Restaurant.h"
#include "Member.h"
using namespace std;

class Chef:public Member {
    public:
    Chef(string name,int age,int yearsOfExperience,int ID,char gender);

    void addMeal(string meal,Restaurant &restaurant);
    void removeMeal(string meal);
    private:

    // vector<string> menu;?


    // Restaurant res;

};

#endif //CHEF_H

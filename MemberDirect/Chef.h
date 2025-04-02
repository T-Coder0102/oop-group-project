#ifndef CHEF_H
#define CHEF_H

#include <iostream>
#include "../Restaurant.h"
#include "Member.h"
using namespace std;

class Chef:public Member {
    public:
    Chef(string name,int age,int yearsOfExperience,int ID,char gender,int people_capacity);

    void addMeal(string meal);
    void removeMeal(string meal);
    private:
    int people_capacity;

    // vector<string> menu;?


    // Restaurant res;

};

#endif //CHEF_H

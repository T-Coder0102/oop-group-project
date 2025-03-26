#ifndef CHEF_H
#define CHEF_H

#include <iostream>
#include "../Restaurant.h"
#include "Member.h"
using namespace std;

class Chef:public Member {
    public:
    Chef(string name,int age,int yearsOfExperience,int ID,char gender,vector<string> menu,int people_capacity);

    void addMeal(string meal);

    private:
    int people_capacity;
    vector<string> menu;
    Restaurant res(vector<string>menu,int people_capacity);
    // Restaurant res;

};

#endif //CHEF_H

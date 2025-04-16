#ifndef CHEF_H
#define CHEF_H

#include <iostream>
#include "../Restaurant.h"
#include "Member.h"
using namespace std;

class Chef:public Member {
    public:
    Chef(string name,int age,int yearsOfExperience,int ID,string gender,string status,double salary,string userName,string passWord);

    void addMeal(Meal* meal,Restaurant &restaurant);
    void removeMeal(string meal,Restaurant &restaurant);
    string getUserName();
    string getPassWord();
    void setUserName(string userName);
    void setPassWord(string passWord);
private:
    string userName;
    string passWord;
};

#endif //CHEF_H

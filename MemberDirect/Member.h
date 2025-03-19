#ifndef MEMBER_H
#define MEMBER_H

#include <iostream>
using namespace std;

class Member {
    public:
    Member(int name,int age,int yearsOfExperience,int ID,char gender);
    private:
    int name;
    int age;
    int yearsOfExperience;
    int ID;
    char gender;
};
#endif //MEMBER_H

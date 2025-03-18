#ifndef MEMBER_H
#define MEMBER_H

#include <iostream>
using namespace std;

class Member {
    public:
    Member(int name,int age,int yearsOfExperience);
    private:
    int name;
    int age;
    int yearsOfExperience;
};
#endif //MEMBER_H

#ifndef MEMBER_H
#define MEMBER_H

#include <iostream>
using namespace std;

class Member {
    public:
    Member(string name,int age,int yearsOfExperience,int ID,char gender,string status,double salary);
    string getName();
    void setName(string name);
    void setAge(int age);
    int getAge();
    int getYearsOfExperience();
    void setYearsOfExperience(int yearsOfExperience);
    int getID();
    double getSalary();
    void setSalary(double salary);
    void setID(int ID);
    char getGender();
    void setGender(char gender);
    void displayInfo();
    private:
    string name;
    int age;
    int yearsOfExperience;
    int ID;
    char gender;
    double salary;
    string status;
};
#endif //MEMBER_H

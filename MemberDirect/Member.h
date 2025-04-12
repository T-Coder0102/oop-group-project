#ifndef MEMBER_H
#define MEMBER_H

#include <iostream>
using namespace std;

class Member {
    public:
    Member(string name,int age,int yearsOfExperience,int ID,string gender,string status,double salary);
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
    void displayInfo();
    void setStatus(string status);
    string getStatus();
    string getGender();
    private:
    string name;
    int age;
    int yearsOfExperience;
    int ID;
    string gender;
    double salary;
    string status;
};
#endif //MEMBER_H

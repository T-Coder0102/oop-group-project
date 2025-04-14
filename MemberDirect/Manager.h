#ifndef MANAGER_H
#define MANAGER_H
#include "Member.h"
#include "../Hotel.h"
class Manager : public Member {
public:
    Manager(string name,int age,int yearsOfExperience,int ID,string gender,string status,double salary,string userName,string password);
    void displayClients(Hotel &hotel);
    void displayMembers(Hotel &hotel);
    void addMember(Member &member,Hotel &hotel);
    void removeMember(int ID,Hotel &hotel);
    void setSalary(Hotel &hotel,double newSalary,int ID);
    void setEmployeeSalary(double newSalary,int ID,Hotel &hotel);
    string getPassword();
    string getUserName();
    void setUserName(string userName);
    void setPassword(string password);
private:
    string password;
    string userName;

};

#endif //MANAGER_H

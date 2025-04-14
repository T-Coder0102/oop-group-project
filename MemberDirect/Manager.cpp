#include "../MemberDirect/Manager.h"
#include <iomanip>
Manager::Manager(string name, int age, int yearsOfExperience, int ID, string gender,string status,double salary,string userName,string password):Member(name,age,yearsOfExperience,ID,gender,status,salary)
{
    this->userName = userName;
    this->password = password;
}
void Manager::displayMembers(Hotel &hotel) {
    cout<<"The list of Hotel members:"<<endl;
    int total = hotel.getMembersList().size();

    for (int i = 0; i < total; i += 5) {
        int end = min(i + 5, total);
        cout<<"*---------------------*---------------*---------------*---------------*---------------*---------------*"<<endl;

        cout << "|Name:                |";
        for (int j = i; j < end; j++) {
            cout << left << setw(15) << (hotel.getMembersList()[j]->getName())<<"|";
        }
        cout<<endl;
        cout<<"*---------------------*---------------*---------------*---------------*---------------*---------------*"<<endl;
        cout << "|Age:                 |" ;
        for (int j = i; j < end; j++) {
            cout << left << setw(15) << (hotel.getMembersList()[j]->getAge())<<"|";
        }
        cout<<endl;
        cout<<"*---------------------*---------------*---------------*---------------*---------------*---------------*"<<endl;
        cout << "|Years of Experience: |";
        for (int j = i; j < end; j++) {
            cout << left << setw(15) << (hotel.getMembersList()[j]->getYearsOfExperience())<<"|";
        }
        cout<<endl;
        cout<<"*---------------------*---------------*---------------*---------------*---------------*---------------*"<<endl;
        cout << "|Gender:              |";
        for (int j = i; j < end; j++) {
            cout << left << setw(15) << (hotel.getMembersList()[j]->getGender())<<"|";
        }
        cout<<endl;
        cout<<"*---------------------*---------------*---------------*---------------*---------------*---------------*"<<endl;
        cout << "|ID:                  |";
        for (int j = i; j < end; j++) {
            cout << left << setw(15) << (hotel.getMembersList()[j]->getID())<<"|";
        }
        cout<<endl;
        cout<<"*---------------------*---------------*---------------*---------------*---------------*---------------*"<<endl;
        cout << "|Position:            |" ;
        for (int j = i; j < end; j++) {
            cout << left << setw(15) << (hotel.getMembersList()[j]->getStatus())<<"|";
        }
        cout<<endl;
        cout<<"*---------------------*---------------*---------------*---------------*---------------*---------------*"<<endl;
        cout << "|Salary:              |";
        for (int j = i; j < end; j++) {
            cout << left << setw(15) << ("$"+to_string(hotel.getMembersList()[j]->getSalary()))<<"|";
        }
        cout<<endl;
        cout<<"*---------------------*---------------*---------------*---------------*---------------*---------------*"<<endl;
        cout << endl; // Extra line for spacing between rows
    }

}
void Manager::displayClients(Hotel &hotel) {
    cout<<"The list of Clients:"<<endl;
    int total = hotel.getClientsList().size();
    if(total<1)
    {
        cout<<"We do not have clients at hotel at the moment."<<endl;
        return;
    }

    for (int i = 0; i < total; i += 5) {
        int end = min(i + 5, total);
        cout<<"*---------------------*---------------*---------------*---------------*---------------*---------------*"<<endl;

        cout << "|Name:                |";
        for (int j = i; j < end; j++) {
            cout << left << setw(15) << (hotel.getClientsList()[j]->getName())<<"|";
        }
        cout<<endl;
        cout<<"*---------------------*---------------*---------------*---------------*---------------*---------------*"<<endl;
        cout << "|Age:                 |" ;
        for (int j = i; j < end; j++) {
            cout << left << setw(15) << (hotel.getClientsList()[j]->getAge())<<"|";
        }
        cout<<endl;
        cout<<"*---------------------*---------------*---------------*---------------*---------------*---------------*"<<endl;
        cout << "|Client ID: |";
        for (int j = i; j < end; j++) {
            cout << left << setw(15) << (hotel.getClientsList()[j]->getClientID())<<"|";
        }
        cout<<endl;
        cout<<"*---------------------*---------------*---------------*---------------*---------------*---------------*"<<endl;
        cout << "|Room ID:              |";
        for (int j = i; j < end; j++) {
            cout << left << setw(15) << (hotel.getClientsList()[j]->getRoomID())<<"|";
        }
        cout<<endl;
        cout<<"*---------------------*---------------*---------------*---------------*---------------*---------------*"<<endl;
        cout << "|Total bill spent:              |";
        for (int j = i; j < end; j++) {
            cout << left << setw(15) << ("$"+to_string(hotel.getClientsList()[j]->getTotalbill()))<<"|";
        }
        cout<<endl;
        cout<<"*---------------------*---------------*---------------*---------------*---------------*---------------*"<<endl;
        cout << endl; // Extra line for spacing between rows
    }
};
void Manager::addMember(Member &member,Hotel &hotel) {
    hotel.addMember(&member);
}
void Manager::removeMember(int ID,Hotel &hotel) {
    hotel.removeMember(ID);
}
void Manager::setSalary(Hotel &hotel, double newSalary,int ID) {
    for (Member *member : hotel.getMembersList()) {
        if (member->getID() == ID) {
            member->setSalary(newSalary);
        }
    }
}
void Manager::setEmployeeSalary(double newSalary,int ID,Hotel &hotel) {
    hotel.setSalaryOfEmployee(newSalary,ID);
}
string Manager::getPassword()
{
    return password;
}
string Manager::getUserName()
{
    return userName;
}
void Manager::setUserName(string userName)
{
    this->userName = userName;
}
void Manager::setPassword(string password)
{
    this->password = password;
}




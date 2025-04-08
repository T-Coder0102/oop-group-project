#include "../MemberDirect/Manager.h"
Manager::Manager(string name, int age, int yearsOfExperience, int ID, char gender,string status,double salary):Member(name,age,yearsOfExperience,ID,gender,status,salary)
{
}
void Manager::displayMembers(Hotel &hotel) {
    cout<<"The list of Hotel members:"<<endl;
    for (int i=0;i<hotel.getMembersList().size();i++) {
        hotel.getMembersList()[i]->displayInfo();
        cout<<endl;
    }
}
void Manager::displayClients(Hotel &hotel) {
    cout<<"The list of Clients:"<<endl;
    for (int i=0;i<hotel.getClientsList().size();i++) {
        hotel.getClientsList()[i]->displayInfo();
    }
};
void Manager::addMember(Member &member,Hotel &hotel) {
    hotel.addMember(&member);
}
void Manager::setSalary(Hotel &hotel, double newSalary,int ID) {
    for (Member *member : hotel.getMembersList()) {
        if (member->getID() == ID) {
            member->setSalary(newSalary);
        }
    }
}


#include "../MemberDirect/Manager.h"

#include <regex>

Manager::Manager(string name, int age, int yearsOfExperience, int ID, char gender,string status):Member(name,age,yearsOfExperience,ID,gender,status)
{
}
void Manager::displayMembers(Hotel &hotel) {
    cout<<"The list of Hotel members:"<<endl;
    for (int i=0;i<hotel.getMembersList().size();i++) {
        hotel.getMembersList()[i]->displayinfo();
        cout<<endl;
    }
}
void Manager::displayClients(Hotel &hotel) {
    cout<<"The list of Clients:"<<endl;
    for (int i=0;i<hotel.getClientsList().size();i++) {
        hotel.getClientsList()[i]->displayinfo();
    }
};
void Manager::addMember(Member &member,Hotel &hotel) {
    hotel.addMember(&member);
}



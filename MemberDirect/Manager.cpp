#include "../MemberDirect/Manager.h"

Manager::Manager(string name, int age, int yearsOfExperience, int ID, char gender,string status):Member(name,age,yearsOfExperience,ID,gender)
{
this->status = status;
}
void Manager::displayMembers() {
    for (int i=0;i<hotel.getMembersList().size();i++) {
        hotel.getMembersList()[i]->displayinfo();
    }
}void Manager::displayClients() {
    for (int i=0;i<hotel.getClientsList().size();i++) {
        hotel.getClientsList()[i]->displayinfo();
    }
};



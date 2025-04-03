#include "Reception.h"

Reception::Reception(string name, int age, int yearsOfExperience, int ID, char gender,string status):Member(name,age,yearsOfExperience,ID,gender,status)
{
}


void Reception::AskInfo(Hotel &hotel) {
    string name;int age;char gender;
    cout<<"What is your name:"<<endl;
    cin>>name;
    cout<<"What is your age:"<<endl;
    cin>>age;
    cout<<"What is your gender:"<<endl;
    cin>>gender;
    Client *c=new Client(name,age,gender);
    hotel.setClientsList(c);
    cout<<"Thank you for your information"<<endl;


}
void Reception::GiveRoomInfo(Hotel &hotel) {
    cout<<"The list of free rooms:"<<endl;
    for (int i=0;i<hotel.getFRoomsList().size();i++) {
          hotel.getFRoomsList()[i]->giveDetails();
        cout<<endl;
    }
}
void Reception::bookRoom(string type) {

}





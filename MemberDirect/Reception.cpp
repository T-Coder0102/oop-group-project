#include "Reception.h"
Hotel *hotel;
Room *room;
Reception::Reception(string name, int age, int yearsOfExperience, int ID, char gender):Member(name,age,yearsOfExperience,ID,gender)
{
}
void Reception::AskInfo() {
    string name;int age;char gender;
    cout<<"What is your name:"<<endl;
    cin>>name;
    cout<<"What is your age:"<<endl;
    cin>>age;
    cout<<"What is your gender:"<<endl;
    cin>>gender;
    Client client(name,age,gender);
    hotel.setClientsList(&client);

}
void Reception::GiveRoomInfo() {
    for (int i=0;i<hotel.getFRoomsList().size();i++) {
          hotel.getFRoomsList()[i]->getDetails();
    }
}
void Reception::bookRoom(string type) {

}





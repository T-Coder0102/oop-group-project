#include "Reception.h"

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
    setClientsList(&client);

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





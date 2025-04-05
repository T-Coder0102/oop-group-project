#include "Reception.h"
#include <ctime>
#include <cstdlib>

Reception::Reception(string name, int age, int yearsOfExperience, int ID, char gender,string status,double salary):Member(name,age,yearsOfExperience,ID,gender,status,salary)
{
}

void Reception::AskInfo(Hotel &hotel) {
    srand(time(0));
    string name;int age;char gender;
    cout<<"What is your name:"<<endl;
    cin>>name;
    cout<<"What is your age:"<<endl;
    cin>>age;
    cout<<"What is your gender:"<<endl;
    cin>>gender;
    Client *c=new Client(name,age,gender,1000+rand()%1000);
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
void Reception::bookRoom(string type,Hotel &hotel,Client &client) {
    for (int i=0;i<hotel.getFRoomsList().size();i++) {
        if (hotel.getFRoomsList()[i]->getStatus()==type) {
            client.setRoomId(hotel.getFRoomsList()[i]->getRoomNum());
            client.setcalTotalbill(hotel.getFRoomsList()[i]->getPrice());
            hotel.removeRoom(hotel.getFRoomsList()[i]);
            return;
        }
    }
}

void Reception::CheckOut(Client &client,Hotel &hotel) {
   for (int i=0;i<hotel.getNFRoomsList().size();i++) {
       if (hotel.getNFRoomsList()[i]->getRoomNum()==client.getRoomID()) {
           hotel.addNewRoom(hotel.getNFRoomsList()[i]);
           hotel.removeClient(client);
       };
   }
   hotel.addTotalRevenue(client.getcalTotalbill());
}




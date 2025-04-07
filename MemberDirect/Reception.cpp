#include "Reception.h"
#include <ctime>
#include <cstdlib>

Reception::Reception(string name, int age, int yearsOfExperience, int ID, char gender,string status,double salary):Member(name,age,yearsOfExperience,ID,gender,status,salary)
{
}

Client * Reception::AskInfo(Hotel &hotel) {
    srand(time(0));
    string name;int age;char gender;
    cout<<"What is your name:"<<endl;
    cin>>name;
    cout<<"What is your age:"<<endl;
    cin>>age;
    cout<<"What is your gender:"<<endl;
    cin>>gender;
    Client *c = new Client(name,age,gender,1000+rand()%1000);
    hotel.setClientsList(c);
    cout<<"Thank you for your information"<<endl;
    return c;
}
void Reception::GiveRoomInfo(Hotel &hotel) {
    cout<<"The list of free rooms:"<<endl;
    int standart=0,lux=0,vip=0;
    for (int i=0;i<hotel.getFRoomsList().size();i++) {
          if (hotel.getFRoomsList()[i]->getPrice()==300) {
              standart++;
          }
        if (hotel.getFRoomsList()[i]->getPrice()==700) {
            lux++;
        }
        if (hotel.getFRoomsList()[i]->getPrice()==1000) {
            vip++;
        }
    }
    cout<<"The total number of standart rooms:"<<standart<<endl;
    cout<<"The price of standart room for a night is: "<<"$300"<<endl;
    cout<<"The total number of lux rooms:"<<lux<<endl;
    cout<<"The price of lux room for a night is $700"<<endl;
    cout<<"The total numbers of VIP rooms:"<<vip<<endl;
    cout<<"The price of VIP room for a night is $1000"<<endl;
}
void Reception::bookRoom(Hotel &hotel,Client &client) {
    string type;
    cout<<"What kind room are you looking for? (Standart, Lux, VIP)"<<endl;
    cin>>type;
    for (int i=0;i<hotel.getFRoomsList().size();i++) {
        if (hotel.getFRoomsList()[i]->getStatus()==type) {
            client.setRoomId(hotel.getFRoomsList()[i]->getRoomNum());
            client.setcalTotalbill(hotel.getFRoomsList()[i]->getPrice());
            hotel.removeRoom(hotel.getFRoomsList()[i]);
            cout<<"Your room number is: "<<hotel.getFRoomsList()[i]->getRoomNum()<<endl;
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




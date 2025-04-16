#include "Reception.h"
#include <ctime>
#include <cstdlib>

Reception::Reception(string name, int age, int yearsOfExperience, int ID, string gender,string status,double salary):Member(name,age,yearsOfExperience,ID,gender,status,salary)
{
}

Client * Reception::askInfo(Hotel &hotel) {
    srand(time(0));
    string name,userName,userPassword;int age;string gender;
    cout<<"What is your name:"<<endl;
    cin>>name;
    while (true) {
        cout << "How old are you?" << endl;
        cin >> age;
        if (cin.fail()) {
            cin.clear();
            cin.ignore();
            cout << "Invalid input for years of experience. Please enter a valid number." << endl;
        }
        else if (age < 18) {
            cout << "Guest must be at least 18 years old. Please enter again." << endl;
        }
        else {
            break;
        }
    }
    while(1)
    {
        cout<<"What is your gender(M or F):"<<endl;
        cin>>gender;
        if(gender=="M" || gender=="F" || gender=="m" || gender=="f")break;
        cout<<"Acceptable genders are only M or F"<<endl;
    }
    cout<<"Create an username for your account:"<<endl;
    cin>>userName;
    cout<<"Enter your password:"<<endl;
    cin>>userPassword;
    int id=1000+rand()%1000;
    Client *c = new Client(name,age,gender,id,userName,userPassword);
    hotel.addClientsToList(c);
    cout<<"Thank you for your information"<<endl;
    return c;
}
void Reception::giveRoomInfo(Hotel &hotel) {
    cout<<"The list of free rooms:"<<endl;
    int standart=0,lux=0,vip=0;
    for (int i=0;i<hotel.getFreeRoomsList().size();i++) {
          if (hotel.getFreeRoomsList()[i]->getPrice()==300) {
              standart++;
          }
        if (hotel.getFreeRoomsList()[i]->getPrice()==700) {
            lux++;
        }
        if (hotel.getFreeRoomsList()[i]->getPrice()==1000) {
            vip++;
        }
    }
    cout<<"The total number of standart rooms:"<<standart<<endl;
    cout<<"The price of standart room for a night is: "<<"$300"<<endl;
    cout<<endl;
    cout<<"The total number of lux rooms:"<<lux<<endl;
    cout<<"The price of lux room for a night is $700"<<endl;
    cout<<endl;
    cout<<"The total numbers of VIP rooms:"<<vip<<endl;
    cout<<"The price of VIP room for a night is $1000"<<endl;
    cout<<endl;
}
void Reception::bookRoom(Hotel &hotel,Client &client) {
    string type;
    int choice;
    while (true) {
        cout<<"What kind room are you looking for?"<<endl;
        cout<<"[1]-Standard"<<endl;
        cout<<"[2]-Lux"<<endl;
        cout<<"[3]-VIP"<<endl;
        cin>>choice;
        if(choice==1)
        {
            type="Standart";
        }else if(choice==2)
        {
            type="Lux";
        }
        else
        {
            type="VIP";
        }
        if (type=="Standart" || type=="Lux" || type=="VIP") {
            for (int i=0;i<hotel.getFreeRoomsList().size();i++) {
                if (hotel.getFreeRoomsList()[i]->getStatus()==type) {
                    client.setRoomId(hotel.getFreeRoomsList()[i]->getRoomNum());
                    client.setTotalbill(hotel.getFreeRoomsList()[i]->getPrice());
                    cout<<"Your room number is: "<<hotel.getFreeRoomsList()[i]->getRoomNum()<<endl;
                    hotel.removeRoom(hotel.getFreeRoomsList()[i]);
                    return;
                }
            }
        }
    }
}

void Reception::checkOut(Client &client,Hotel &hotel) {
   for (int i=0;i<hotel.getNFreeRoomsList().size();i++) {
       if (hotel.getNFreeRoomsList()[i]->getRoomNum()==client.getRoomID()) {
           hotel.addNewRoom(hotel.getNFreeRoomsList()[i]);
           hotel.removeClient(client);
       };
   }
   hotel.addTotalRevenue(client.getTotalbill());
}


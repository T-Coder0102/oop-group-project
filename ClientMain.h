#ifndef CLIENTMAIN_H
#define CLIENTMAIN_H
#include "MemberDirect/Reception.h"

void cmain(Reception reception, Hotel hotel,RoomService room_servicer,Restaurant res){
  Client *temp = reception.AskInfo(hotel);
  temp->askRoomInfo();
  reception.GiveRoomInfo(hotel);
  reception.bookRoom(hotel,*temp);
  cout<<"Thank you very much!!!"<<endl;
  while (true) {
    cout<<"Reception: What kind of service do you want?? (Cleaning room or Delivering food to your room)"<<endl;
    string choice;
    cin>>choice;
    if (choice == "clean") {
      room_servicer.cleanRoom(temp->getRoomID(),hotel);
    }else if(choice == "deliver"){
      room_servicer.giveMenu(res);
      cout<<"You can choose your wanted meal."<<endl;
      string meal;
      cin>>meal;
      room_servicer.serveFood(meal,res,*temp);
    }else {
      cout<<"Thank you very much!!!"<<endl;
    }
  }

}

#endif //CLIENTMAIN_H

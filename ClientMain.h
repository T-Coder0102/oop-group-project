#ifndef CLIENTMAIN_H
#define CLIENTMAIN_H
#include "MemberDirect/Reception.h"
#include "future"
void cmain(Reception reception, Hotel hotel,RoomService room_servicer,Restaurant res, Waiter waiter){
  Client *temp = reception.askInfo(hotel);
  temp->askRoomInfo();
  reception.giveRoomInfo(hotel);
  reception.bookRoom(hotel,*temp);
  cout<<"Thank you very much!!!"<<endl;
  while (true) {
    cout<<"Reception: What kind of service do you want?? (Cleaning room, Delivering food to your room or other )"<<endl;
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
    }

    else if(choice=="restaurant"){
        cout<<"Welcome to our Amazing Restaurant"<<endl;
        this_thread::sleep_for(chrono::seconds(1));
        cout<<"Do you want menu??  (Yes or No)"<<endl;
        string answer;
        cin>>answer;
        if(answer=="Yes"){
            waiter.giveMenu(res);
            cout<<"You can choose "<<endl;
            string meal;
            cin>>meal;
            waiter.takeOrder(meal, *temp, res);
            cout<<"Your order will be ready."<<endl;
            this_thread::sleep_for(chrono::seconds(3));
            cout<<"Here is your"<<" "<<meal<<endl;
            while(true){
                cout<<"Do you need something else (Yes or No)"<<endl;
                string some;
                cin>>some;
                if(some=="Yes"){
                    waiter.giveMenu(res);
                    cin>>meal;
                    waiter.takeOrder(meal, *temp, res);
                    cout<<"Your order will be ready."<<endl;
                    this_thread::sleep_for(chrono::seconds(3));
                    cout<<"Here is your"<<" "<<meal<<endl;
                }
                else{
                    cout<<"Thank for your Visit!!!"<<endl;
                    break;
                }
            }
        }
    }
    else {
      cout<<"Thank you very much!!!"<<endl;
        cout<<"Do you want to check out?? (Yes or No)"<<endl;
  string response;
  cin>>response;
  if(response=="Yes"){
      reception.checkOut(*temp,hotel);
      cout<<"Here is your total expenses during your stay in our hotel: $"<<temp->getTotalbill()<<endl;
      cout<<"Thank you for staying in our hotel!!!"<<endl;
      break;

  }else{
      cout<<"THK"<<endl;
  }
    }
  }

}
#endif //CLIENTMAIN_H

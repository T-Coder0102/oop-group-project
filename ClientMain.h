#ifndef CLIENTMAIN_H
#define CLIENTMAIN_H
#include "MemberDirect/Reception.h"
#include "future"
void cmain(Reception &reception, Hotel &hotel,RoomService &room_servicer,Restaurant &res, Waiter &waiter){
  while(1)
  {
    cout<<"1-Register"<<endl;
    cout<<"2-Login"<<endl;
    cout<<"3-Logout"<<endl;
    bool authenticated=false;
      Client* tempor;
    int ans;
    cin>>ans;
    if(ans==1)
    {
        Client *temp = reception.askInfo(hotel);
        reception.giveRoomInfo(hotel);
          reception.bookRoom(hotel,*temp);
          cout<<"Thank you!"<<endl;
        temp->getGender();
    }
    if(ans==2)
    {
      string userName;
      string passWord;
      cout<<"Enter your username:"<<endl;
      cin>>userName;
      cout<<"Enter your password:"<<endl;
      cin>>passWord;
      for(Client* a:hotel.getClientsList())
      {
        if(a->getUserName()==userName && a->getUserPassword()==passWord)
        {
          authenticated=true;
          cout<<"Your account is authenticated"<<endl;
            tempor=a;
          break;
        }
      }
      if(authenticated)
      {

          while (true) {
              cout<<"Reception: What kind of service do you want? (1-Cleaning the room,2-Deliver food to your room,3-Restaurant,4-Check out,5-Log out)"<<endl;
              int choice;
              cin>>choice;
              if (choice == 1) {
                  room_servicer.cleanRoom(tempor->getRoomID(),hotel);
              }
              else if(choice == 2){
                  room_servicer.giveMenu(res);
                  cout<<"You can choose your wanted meal."<<endl;
                  string meal;
                  cin>>meal;
                  room_servicer.serveFood(meal,res,*tempor);
              }
              else if(choice==3){
                  cout<<"Welcome to our Amazing Restaurant"<<endl;
                  this_thread::sleep_for(chrono::seconds(1));
                  cout<<"Do you want menu??  (1-Yes or 2-No)"<<endl;
                  int answer;
                  cin>>answer;
                  if(answer==1){
                      waiter.giveMenu(res);
                      cout<<"You can choose "<<endl;
                      string meal;
                      cin>>meal;
                      waiter.takeOrder(meal, *tempor, res);
                      cout<<"Your order will be ready."<<endl;
                      this_thread::sleep_for(chrono::seconds(3));
                      cout<<"Here is your"<<" "<<meal<<endl;
                      while(true){
                          cout<<"Do you need something else (1-Yes or 2-No)"<<endl;
                          int some;
                          cin>>some;
                          if(some==1){
                              waiter.giveMenu(res);
                              cin>>meal;
                              waiter.takeOrder(meal, *tempor, res);
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
              else if(choice==4){
                  reception.checkOut(*tempor,hotel);
                  cout<<"Here is your total expenses during your stay in our hotel: $"<<tempor->getTotalbill()<<endl;
                  cout<<"Thank you for staying in our hotel!!!"<<endl;
                  break;
              }else
                  {
                  break;
                  }
          }
      }
    }
      if(ans==3)
      {
          break;
      }
  }
}
#endif //CLIENTMAIN_H

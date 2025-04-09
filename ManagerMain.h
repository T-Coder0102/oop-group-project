#ifndef MANAGERMAIN_H
#define MANAGERMAIN_H
#include "Hotel.h"
#include "./MemberDirect/Reception.h"
#include"./MemberDirect/Chef.h"
#include "MemberDirect/RoomService.h"
#include "MemberDirect/Waiter.h"

#include "./MemberDirect/Member.h"
#include <cstdlib>
#include <ctime>
void managerMain(Hotel& hotel){
  srand(time(0));
    while(true){
        string name;
        int age;
        int yearsOfExperience;
        int ID;
        char gender;
        double salary;
        string status;

  cout<<"what is employees name?"<<endl;
  cin>>name;
  cout<<"what is employees age?"<<endl;
  cin>>age;
  cout<<"what is employees years of experience?"<<endl;
  cin>>yearsOfExperience;
  cout<<"what is employees gender?"<<endl;
  cin>>gender;
  cout<<"what is employees salary?"<<endl;
  cin>>salary;
  cout<<"what is employees status?"<<endl;
  cin>>status;
  int id=rand()%(age+yearsOfExperience)+1;
  if(status=="Reception"){
      Reception *reception = new Reception(name,age,yearsOfExperience,id,gender,status,salary);
  }else if(status=="Chef"){
       Chef *chef = new Chef(name,age,yearsOfExperience,id,gender,status,salary);
  }else if(status=="RoomServicer"){
    RoomService* roomservicer= new RoomService(name,age,yearsOfExperience,id,gender,status,salary);
  }else if(status=="Waiter"){
    Waiter *waiter= new Waiter(name,age,yearsOfExperience,id,gender,status,salary);
  }else{
    continue;
  }
  }


};
#endif //MANAGERMAIN_H

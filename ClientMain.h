#ifndef CLIENTMAIN_H
#define CLIENTMAIN_H
#include "MemberDirect/Reception.h"

void cmain(Reception reception, Hotel hotel){
  Client *temp = reception.AskInfo(hotel);
  cout<<temp->getAge()<<endl;
}

#endif //CLIENTMAIN_H

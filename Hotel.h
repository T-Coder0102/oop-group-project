#ifndef HOTEL_H
#define HOTEL_H
#include <vector>
#include <iostream>

#include "Client.h"
#include "MemberDirect/Member.h"
using namespace std;
class Hotel {
    public:
    Hotel();
private:
    vector<Client*> clients;
    vector<Member*> members;

};
#endif //HOTEL_H

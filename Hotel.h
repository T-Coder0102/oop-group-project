#ifndef HOTEL_H
#define HOTEL_H
#include <vector>
#include <iostream>

#include "Client.h"
#include "MemberDirect/Member.h"
using namespace std;
class Hotel {
    public:

    vector<Client*> getClientsList();
    void setClientsList(Client* client);
    vector<Member*> getMembersList();
    void setMembersList(Member* member);
private:
    vector<Client*> clients;
    vector<Member*> members;

};
#endif //HOTEL_H

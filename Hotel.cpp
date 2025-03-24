#include "Hotel.h"
vector<Client *> Hotel::getClientsList() {
    return clients;
}
void Hotel::setClientsList(Client* client) {
    clients.push_back(client);
}
vector<Member*> Hotel::getMembersList() {
    return members;
}
void Hotel::setMembersList(Member* member) {
    members.push_back(member);
}

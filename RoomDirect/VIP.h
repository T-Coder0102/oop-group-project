#ifndef VIP_H
#define VIP_H
#include <vector>
using namespace std;
#include "Room.h"
// adding getRoomType (), displayRoomDetails(), and vector ;

class VIP: public Room {
public:
    VIP(int roomNum,int price);
    string getRoomType();
    void display();
private:
    vector<string> facilities;
};
#endif //VIP_H

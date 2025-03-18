#ifndef ROOM_H
#define ROOM_H
#include <iostream>
using namespace std;

class Room {

private:
    int roomNum;
    int price;
    bool isBooked;
public:
    Room(int roomNum,int price);
    void setPrice(int price);
     void setIsBooked(bool isBooked);
    int getPrice();
    bool getIsBooked();
    int getRoomNum();
};
#endif //ROOM_H

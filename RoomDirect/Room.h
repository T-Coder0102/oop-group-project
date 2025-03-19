#ifndef ROOM_H
#define ROOM_H
#include <iostream>
using namespace std;

class Room {


public:
    Room(int roomNum,int price);
    void setPrice(int price);
     void setIsBooked(bool isBooked);
    int getPrice();
    bool getIsBooked();
    int getRoomNum();
    int getNumOfclient();
    int getNumOfroom();
    void setNumOfclient(int num);
private:
    int roomNum;
    int price;
    bool isBooked=false;
    int numberOfroom=2;
    int numOfclient=0;
};
#endif //ROOM_H

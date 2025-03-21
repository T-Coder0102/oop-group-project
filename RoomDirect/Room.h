#ifndef ROOM_H
#define ROOM_H
#include <iostream>
using namespace std;

class Room {


public:
    Room(int roomNum,double price);
    void setPrice(double price);
     void setIsBooked(bool isBooked);
    int getPrice();
    bool getIsBooked();
    int getRoomNum();
    int getNumOfclient();
    int getNumOfroom();
    void setNumOfclient(int num);
    virtual void displayInfo()=0;
private:
    int roomNum;
    double price;
    bool isBooked=false;
    int numberOfroom=2;
    int numOfclient=0;
};
#endif //ROOM_H

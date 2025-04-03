#ifndef ROOM_H
#define ROOM_H
#include <iostream>
using namespace std;

class Room {
public:
    Room(int roomNum,double price,string status);
    void setPrice(double price);
    void setIsBooked(bool isBooked);
    double getPrice();
    bool getIsBooked();
    int getRoomNum();
    int getNumOfclient();
    int getNumOfroom();
    void setNumOfclient(int num);
    string getStatus();
    // adding getDetails ()
    void giveDetails();
private:
    string status;
    int roomNum;
    double price;
    // price should be double
    // bool isBooked=false;
    // int numberOfroom=2;
    // int numOfclient=0;
};
#endif //ROOM_H

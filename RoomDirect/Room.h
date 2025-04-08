#ifndef ROOM_H
#define ROOM_H
#include <iostream>
using namespace std;

class Room {
public:
    Room(int roomNum,double price,string status);
    void setPrice(double price);
    double getPrice();
    int getRoomNum();
    string getStatus();
    // adding getDetails ()
    void giveDetails();
private:
    string status;
    int roomNum;
    double price;

};
#endif //ROOM_H

#include "Room.h"
using namespace std;


Room::Room(int roomNum, double price,string status) {
    this->roomNum = roomNum;
    this->price = price;
    this->status = status;
}
double Room::getPrice() {
    return price;
}
int Room::getRoomNum() {
    return roomNum;
}
void Room::setPrice(double price) {
    this->price = price;
}
// void Room::setNumOfclient(int numOfclient) {
//     this->numOfclient = numOfclient;
// }
string Room::getStatus(){
    return status;
}

// adding getDetails()
void Room::giveDetails() {
    cout<<"Room Number: "<<roomNum<<endl;
    cout<<"Price: $"<<price<<endl;
    cout<<"Status: "<<status<<endl;
}






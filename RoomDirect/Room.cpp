#include "Room.h"
using namespace std;


Room::Room(int roomNum, double price) {
    this->roomNum = roomNum;
    this->price = price;
}
double Room::getPrice() {
    return price;
}
int Room::getRoomNum() {
    return roomNum;
}
bool Room::getIsBooked() {
    return isBooked;
}
int Room::getNumOfclient() {
    return numOfclient;
}
int Room::getNumOfroom() {
    return numberOfroom;
}
void Room::setIsBooked(bool isBooked) {
    this->isBooked = isBooked;
}
void Room::setPrice(double price) {
    this->price = price;
}
void Room::setNumOfclient(int numOfclient) {
    this->numOfclient = numOfclient;
}

// adding getDetails()
void Room::getDetails() {
    cout<<"Room Number: "<<roomNum<<endl;
    cout<<"Price: $"<<price<<endl;
    cout<<"Status: "<<(isBooked?"Booked": "Not booked");
    cout<<"Number of client: "<<numOfclient<<endl;
}






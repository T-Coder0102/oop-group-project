#include "Room.h"


Room::Room(int roomNum, int price) {
    this->roomNum = roomNum;
    this->price = price;
}
int Room::getPrice() {
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
void Room::setPrice(int price) {
    this->price = price;
}
void Room::setNumOfclient(int numOfclient) {
    this->numOfclient = numOfclient;
}




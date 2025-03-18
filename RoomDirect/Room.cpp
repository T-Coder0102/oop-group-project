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
void Room::setIsBooked(bool isBooked) {
    this->isBooked = isBooked;
}
void Room::setPrice(int price) {
    this->price = price;
}




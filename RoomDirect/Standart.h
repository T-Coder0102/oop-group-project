#ifndef STANDART_H
#define STANDART_H
#include "Room.h"
#include <string>
#include <vector>

// adding getRoomType (), displayRoomDetails(), and vector ;

class Standart: public Room {
public:
    Standart(int roomNum,double price);
    void display();
    string getRoomType();
private:
    vector<string> facilities;
};
#endif //STANDART_H

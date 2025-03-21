#ifndef STANDART_H
#define STANDART_H
#include "Room.h"

class Standart: public Room {
public:
    Standart(int roomNum,double price);
    bool hasTV();

private:
    bool has_tv=true;


};
#endif //STANDART_H

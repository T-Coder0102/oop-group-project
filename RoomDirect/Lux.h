#ifndef LYUKS_H
#define LYUKS_H
#include "Room.h"
class Lux:public Room {
public:
  Lux(int roomNum,int price);
  bool hasBalcony();
  void displayInfo();

private:
  bool balcony=true;

};
#endif //LYUKS_H

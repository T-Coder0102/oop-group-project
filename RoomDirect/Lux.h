#ifndef LYUKS_H
#define LYUKS_H
#include "Room.h"
#include <string>
#include <vector>
// adding getRoomType (), displayRoomDetails(), and vector ;
class Lux:public Room {
public:
  Lux(int roomNum,int price);
  string getRoomType();
  void display();
private:
  vector<string> facilities;
};
#endif //LYUKS_H

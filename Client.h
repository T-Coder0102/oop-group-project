#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include<string>

#include "RoomDirect/Room.h"
using namespace std;

class Client {
    public:
    Client(string name,int age,char gender,int clientId,int roomId);
    const int getID();
    double getcalTotalbill();
    const string getName();
    const int getAge();
    const char getGender();
    int getroomID();
    void setroomID(int roomID);
    void setcalTotalbill(double bill);
private:
    string name;
    int age;
    char gender;
    int clientId;
    int roomId;
    double calTotalbill=0;

};
#endif //CLIENT_H

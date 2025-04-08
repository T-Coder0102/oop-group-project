#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include<string>

#include "RoomDirect/Room.h"
using namespace std;

class Client {
    public:
    Client(string name,int age,char gender,int clientId);
    const int getID();
    double getTotalbill();
    const string getName();
    const int getAge();
    const char getGender();
    int getRoomID();
    void setRoomId(int roomId);
    void setTotalbill(double bill);
    void displayInfo();
    //I have added only the clientId getters and setters
    int getClientID();
    void setClientID(int clientID);
    void askRoomInfo();
private:
    string name;
    int age;
    char gender;
    int clientId=0;
    int roomId;
    double calTotalbill=0;


};
#endif //CLIENT_H

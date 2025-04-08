#include "Client.h"

#include "MemberDirect/Member.h"

Client::Client(string name, int age,char gender,int clientId) {
    this->name = name;
    this->age = age;
    this->gender = gender;
    this->clientId = clientId;

}
 const int Client::getID() {
    return clientId;
}
double Client::getTotalbill() {
    return calTotalbill;
}
 int Client::getRoomID() {
    return roomId;
}
const char Client::getGender() {
    return gender;
}
const int Client::getAge() {
    return age;
}
const string Client::getName() {
    return name;
}
void Client::setRoomId(int roomId) {
    this->roomId = roomId;
}
void Client::setTotalbill(double bill) {
    this->calTotalbill += bill;
}
void Client::displayInfo() {
    cout << "Name: " << this->name << endl;
    cout << "Age: " << this->age << endl;
    cout << "Gender: " << this->gender << endl;
    cout<<"Client ID: "<< this->clientId << endl;
    cout << "Room ID: " << this->roomId << endl;
}
int Client::getClientID()
{
    return clientId;
}
void Client::setClientID(int clientId)
{
    this->clientId = clientId;
}
void Client::askRoomInfo() {
    cout<<"Could you tell what kind of rooms do you have right now??"<<endl;
}


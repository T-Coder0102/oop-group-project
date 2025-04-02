#include "Client.h"

#include "MemberDirect/Member.h"

Client::Client(string name, int age,char gender) {
    this->name = name;
    this->age = age;
    this->gender = gender;

}
 const int Client::getID() {
    return clientId;
}
double Client::getcalTotalbill() {
    return calTotalbill;
}
 int Client::getroomID() {
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
void Client::setroomID(int roomID) {
    this->roomId = roomId;
}
void Client::setcalTotalbill(double bill) {
    this->calTotalbill += bill;
}
void Client::displayinfo() {
    cout << "Name: " << this->name << endl;
    cout << "Age: " << this->age << endl;
    cout << "Gender: " << this->gender << endl;
    cout<<"Client ID"<< this->clientId << endl;
    cout << "Room ID: " << this->roomId << endl;

}




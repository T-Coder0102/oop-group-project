#include "Client.h"

#include "MemberDirect/Member.h"

Client::Client(string name, int age,char gender,int clientId,string userName,string userPassword) {
    this->name = name;
    this->age = age;
    this->gender = gender;
    this->clientId = clientId;
    this->userName = userName;
    this->userPassword = userPassword;

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
string Client::getUserName()
{
    return userName;
}
void Client::setUserName(string userName)
{
    this->userName = userName;
}
void Client::setUserPassword(string userPassword)
{
    this->userPassword = userPassword;
}
string Client::getUserPassword()
{
    return userPassword;
}





#include "InternDef.h"
InternDef::InternDef(string name, int age, int ID, string gender, string status) {
    this->name = name;
    this->age = age;
    this->ID = ID;
    this->gender = gender;
    this->status = status;
}
int InternDef::getAge() {
    return age;
}
string InternDef::getName() {
    return name;
}
int InternDef::getId() {
    return ID;
}
string InternDef::getGender() {
    return gender;
}
string InternDef::getStatus() {
    return status;
}
void InternDef::setName(string name) {
  this->name = name;
}
void InternDef::setAge(int age) {
  this->age = age;
}
void InternDef::setId(int ID) {
  this->ID = ID;
}
void InternDef::setGender(string gender) {
  this->gender = gender;
}
void InternDef::setStatus(string status) {
  this->status = status;
}
void InternDef::getDetailsOfInterns(){
  cout<<"Name: "<<this->name<<endl;
  cout<<"Age: "<<this->age<<endl;
  cout<<"ID: "<<this->ID<<endl;
  cout<<"Gender: "<<this->gender<<endl;
  cout<<"Status: "<<this->status<<endl;
}





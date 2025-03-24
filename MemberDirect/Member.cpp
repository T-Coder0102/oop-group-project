#include "Member.h"
Member::Member(string name, int age, int yearsOfExperience,int ID, char gender) {
    this->name = name;
    this->age = age;
    this->yearsOfExperience = yearsOfExperience;
    this->gender = gender;
    this->ID = ID;
}
string Member::getName() {
    return name;
}
void Member::setName(string name) {
    this->name=name;
}
int Member::getAge() {
    return age;
}
void Member::setAge(int age) {
    this->age=age;
}
int Member::getyearsOfExperience() {
    return yearsOfExperience;
}
void Member::setyearsOfExperience(int y) {
    this->yearsOfExperience=y;
}
int Member::getID() {
    return ID;
}
void Member::setID(int ID) {
    this->ID = ID;
}
char Member::getGender() {
    return gender;
}
void Member::setGender(char gender) {
    this->gender = gender;
}
double Member::getSalary() {
    return salary;
}
void Member::setSalary(double salary) {
    this->salary = salary;
}
void Member::displayinfo() {
    cout << "Name: " << this->name << "\n";
    cout << "Age: " << this->age << "\n";
    cout<<"experience"<<this->yearsOfExperience<<"\n";
    cout<<"gender"<<this->gender<<"\n";
    cout<<"ID: "<<this->ID<<"\n";
}



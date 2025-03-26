#include "Chef.h"
Chef::Chef(string name, int age, int yearsOfExperience, int ID, char gender,vector<string> menu,int people_capacity):Member(name,age,yearsOfExperience,ID,gender) {
    this->menu=menu;
    this->people_capacity=people_capacity;
}
void Chef::addMeal(string meal) {
    //getMen
}


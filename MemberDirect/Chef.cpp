#include "Chef.h"
#include "../Restaurant.h"
Restaurant *restaurant;
Chef::Chef(string name, int age, int yearsOfExperience, int ID, char gender,int people_capacity):Member(name,age,yearsOfExperience,ID,gender) {
    // this->menu=menu;
    this->people_capacity=people_capacity;
}
void Chef::addMeal(string meal) {
    restaurant->setMenu(meal,1);
}
void Chef::removeMeal(string meal) {
    restaurant->setMenu(meal,-1);
}


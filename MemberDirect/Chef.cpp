#include "Chef.h"
Chef::Chef(string name, int age, int yearsOfExperience, int ID, string gender,string status,double salary):Member(name,age,yearsOfExperience,ID,gender,status,salary) {
}
void Chef::addMeal(Meal*food,Restaurant &restaurant) {
    restaurant.addMealToMenu(food);
}
void Chef::removeMeal(string meal,Restaurant &restaurant) {
    restaurant.removeMealFromMenu(meal);
}



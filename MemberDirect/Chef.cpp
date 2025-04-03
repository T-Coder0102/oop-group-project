#include "Chef.h"
Chef::Chef(string name, int age, int yearsOfExperience, int ID, char gender,string status):Member(name,age,yearsOfExperience,ID,gender,status) {
}
void Chef::addMeal(string meal,Restaurant &restaurant) {
    restaurant.setMenu(meal,1);

}
void Chef::removeMeal(string meal,Restaurant &restaurant) {
    restaurant.setMenu(meal,-1);
}



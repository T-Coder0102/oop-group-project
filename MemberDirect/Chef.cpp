#include "Chef.h"
Chef::Chef(string name, int age, int yearsOfExperience, int ID, char gender):Member(name,age,yearsOfExperience,ID,gender) {
}
void Chef::addMeal(string meal,Restaurant &restaurant) {
    restaurant.setMenu(meal,1);

}


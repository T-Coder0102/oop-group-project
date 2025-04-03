#include "Chef.h"
Chef::Chef(string name, int age, int yearsOfExperience, int ID, char gender,int people_capacity):Member(name,age,yearsOfExperience,ID,gender) {
    this->people_capacity=people_capacity;
}

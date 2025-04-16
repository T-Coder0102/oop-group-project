#include "Chef.h"
Chef::Chef(string name, int age, int yearsOfExperience, int ID, string gender,string status,double salary,string userName,string passWord):Member(name,age,yearsOfExperience,ID,gender,status,salary) {
    this->userName = userName;
    this->passWord = passWord;
}
void Chef::addMeal(Meal*food,Restaurant &restaurant) {
    restaurant.addMealToMenu(food);
}
void Chef::removeMeal(string meal,Restaurant &restaurant) {
    restaurant.removeMealFromMenu(meal);
}
string Chef::getPassWord()
{
    return passWord;
}
string Chef::getUserName()
{
    return userName;
}
void Chef::setPassWord(string passWord)
{
    this->passWord = passWord;
}
void Chef::setUserName(string userName)
{
    this->userName = userName;
}




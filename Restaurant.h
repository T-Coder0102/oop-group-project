#ifndef RESTAURANT_H
#define RESTAURANT_H
#include <iostream>
#include <vector>
#include <string>
#include "./Meal.h"
using namespace std;
class Restaurant {
public:
    void addMealToMenu(Meal* meal);
    void removeMealFromMenu(string meal);
    vector<Meal*> getMenu();
private:
    vector<Meal*> menu;


};
#endif //RESTAURANT_H
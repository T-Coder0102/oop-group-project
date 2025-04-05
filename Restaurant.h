#ifndef RESTAURANT_H
#define RESTAURANT_H
#include <iostream>
#include <vector>
#include <string>
#include "./Meal.h"
using namespace std;
class Restaurant {
public:
    // Restaurant(vector<string> menu,int capacity);
    void addMealToMenu(Meal* meal);
    void removeMealFromMenu(string meal);
    vector<Meal*> getMenu();
    void calTotalCost();
private:
    vector<Meal*> menu;
    int capacity;

};
#endif //RESTAURANT_H
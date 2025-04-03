#ifndef RESTAURANT_H
#define RESTAURANT_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Restaurant {
public:
    // Restaurant(vector<string> menu,int capacity);
    void setMenu(string Food,int a);
    vector<string> getMenu();
    void TakeOrder();
    void calTotalCost();
private:
    vector<string> menu;
    int capacity;

};
#endif //RESTAURANT_H
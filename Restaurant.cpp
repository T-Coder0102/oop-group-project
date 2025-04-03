#include "Restaurant.h"
// Restaurant::Restaurant(vector<string> menu, int capacity) {
//     this->menu = menu;
//     this->capacity = capacity;
// }
vector<Meal*> Restaurant::getMenu() {
    return menu;
}
void Restaurant::addMealToMenu(Meal* meal)
{
}
void Restaurant::removeMealFromMenu(string meal)
{

}


void Restaurant::setMenu(Meal* food,int a) {
    if (a==-1) {
        for (int i=0;i<menu.size();i++) {
            if (menu[i]->getName()==food->getName()) {
                menu.erase(menu.begin()+i);
            }
        }
    }
    else {
        menu.push_back(food);
    }
}





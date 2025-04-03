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
    menu.push_back(meal);
}
void Restaurant::removeMealFromMenu(string meal)
{
    for(int i =0; i<menu.size();i++){
        if(meal==menu[i]->getName()){
            menu.erase(menu.begin()+i);
        }
    }
}






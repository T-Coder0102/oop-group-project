#include "Restaurant.h"
// Restaurant::Restaurant(vector<string> menu, int capacity) {
//     this->menu = menu;
//     this->capacity = capacity;
// }
vector<string> Restaurant::getMenu() {
    return menu;
}
void Restaurant::setMenu(string Food,int a) {
    if (a==-1) {
        for (int i=0;i<menu.size();i++) {
            if (menu[i]==Food) {
                menu.erase(menu.begin()+i);
            }
        }
    }
    else {
        menu.push_back(Food);
    }
}





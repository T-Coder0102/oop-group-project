#include "Restaurant.h"
Restaurant::Restaurant(vector<string> menu, int capacity) {
    this->menu = menu;
    this->capacity = capacity;
}
vector<string> Restaurant::getMenu() {
    return menu;
}




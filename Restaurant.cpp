#include "Restaurant.h"

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
        if(menu[i]->getName()==meal){
            menu.erase(menu.begin()+i);
            return;
        }
    }
    cout<<"No meal found"<<endl;
}






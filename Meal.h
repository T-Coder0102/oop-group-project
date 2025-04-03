#ifndef MEAL_H
#define MEAL_H
#include <iostream>
using namespace std;
class Meal
{
private:
    string name;
    double price;
    public:
    Meal(string name,double price)
    {
        this->name = name;
        this->price = price;
    };
    string getName()
    {
        return name;
    }
    double getPrice()
    {
        return price;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setPrice(double price)
    {
        this->price = price;
    }
    void getDetails()
    {
        cout<<"Name of meal: "<<name<<endl;
        cout<<"Price of meal: "<<price<<endl;
    }
};


#endif //MEAL_H

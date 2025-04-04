#include "Waiter.h"
#include "../Restaurant.h"
Waiter::Waiter(string name, int age, int yearsOfExperience, int ID, char gender,string status,double salary):Member(name,age,yearsOfExperience,ID,gender,status,salary)
{

}
void Waiter::takeOrder(string meal,Client &client,Restaurant &res)
{
        for(int i=0;i<res.getMenu().size();i++)
        {
                if(res.getMenu()[i]->getName()==meal)
                {
                        cout<<"You ordered the meal: "<<meal<<endl;
                        client.setcalTotalbill(res.getMenu()[i]->getPrice());
                        return;
                }
        }
        cout<<"We don't the meal you chose: "<<endl;

}
void Waiter::giveMenu(Restaurant &res)
{
        cout<<"The Menu:"<<endl;
        for(Meal* a:res.getMenu())
        {
                a->getDetails();
                cout<<endl;
        }
}





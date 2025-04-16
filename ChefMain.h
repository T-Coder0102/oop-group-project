#ifndef CHEFMAIN_H
#define CHEFMAIN_H
#include <iostream>

#include "Meal.h"
using namespace std;

void chefMain(Chef &chef,Restaurant &myRes)
{
    while(1)
    {
        bool authenticated=false;
        cout<<"Welcome to Chef Page"<<endl;
        string username, password;
        cout<<"Please enter your username:"<<endl;
        cin>>username;
        cout<<"Please enter your password:"<<endl;
        cin>>password;
        if(username==chef.getUserName() && password==chef.getPassWord())
        {
            authenticated=true;
            cout<<"Authenticated"<<endl;
        }
        if(authenticated)
        {
            while(1)
            {
                cout<<"Welcome to Chef Main Page"<<endl;
                cout<<"[1]-Add New Meal to Menu"<<endl;
                cout<<"[2]-Remove Meal from Menu"<<endl;
                cout<<"[3]-Display Menu"<<endl;
                cout<<"[4]-Change username and password"<<endl;
                cout<<"[5]-Exit"<<endl;
                int choice;
                cout<<"Enter your choice:"<<endl;
                cin>>choice;
                if(choice==1)
                {
                    string meal;double price;
                    cout<<"Enter the new meal:"<<endl;
                    cin>>meal;
                    cout<<"Enter the price of meal:"<<endl;
                    cin>>price;
                    Meal* newMeal = new Meal(meal,price);
                    chef.addMeal(newMeal,myRes);
                    cout<<"You added new meal called: "<<meal<<endl;
                }
                else if(choice==2)
                {
                    while(1)
                    {
                        int response;
                        cout<<"Do you need the menu??([1]-Yes,[2]-No)"<<endl;
                        if(response==1)
                        {
                            for(Meal* meal:myRes.getMenu())
                            {
                                meal->getDetails();
                                cout<<endl;
                            }
                            break;
                        }
                        break;
                    }
                    string meal;
                    cout<<"Enter the meal you want to remove"<<endl;
                    cin>>meal;
                    chef.removeMeal(meal,myRes);
                    cout<<"You removed meal called: "<<meal<<endl;
                }
                else if(choice==3)
                {
                    for(Meal* meal:myRes.getMenu())
                    {
                       meal->getDetails();
                        cout<<endl;
                    }
                }
                else if(choice==4)
                {
                    cout<<"Enter new username:"<<endl;
                    cin>>username;
                    cout<<"Enter new password:"<<endl;
                    cin>>password;
                    chef.setUserName(username);
                    chef.setPassWord(password);
                    cout<<"You changed username and password"<<endl;
                }
                else
                {
                    break;
                }

            }
        }
    }

};
#endif //CHEFMAIN_H

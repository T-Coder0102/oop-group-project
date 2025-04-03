#include "RoomService.h"

#include <chrono>
#include <thread>

#include "../Restaurant.h"
Restaurant *restaurant;
RoomService::RoomService(string name, int age, int yearsOfExperience, int ID, char gender):Member(name,age,yearsOfExperience,ID,gender)
{

}
void RoomService::cleanRoom(int id)
{
    cout<<"We are cleaning now!!"<<endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout<<"Room will be ready in a few minutes"<<endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout<<"Your room is ready"<<endl;
}
void RoomService::serveFood(string meal)
{
    for(string a:restaurant->getMenu())
    {
        if(a == meal)
        {
            cout<<"OK, your order will be delivered in a few minutes."<<endl;
            return;
        }
    }
    cout<<"No meal found"<<endl;


}
void RoomService::giveMenu(Restaurant &res) {
    cout<<"The list of meals in the menu: "<<endl;
    for(string a:res.getMenu()) {
        cout<<a<<endl;
    }
}




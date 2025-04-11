#include "RoomService.h"

#include <chrono>
#include <thread>

#include "../Restaurant.h"
RoomService::RoomService(string name, int age, int yearsOfExperience, int ID, string gender,string status,double salary):Member(name,age,yearsOfExperience,ID,gender,status,salary)
{

}


void RoomService::cleanRoom(int id,Hotel hotel)
{
    for(int i = 0; i < hotel.getNFreeRoomsList().size(); i++)
    {
        if(hotel.getNFreeRoomsList()[i]->getRoomNum() == id)
        {
            cout<<"We are cleaning now!!"<<endl;
            this_thread::sleep_for(chrono::seconds(3));
            cout<<"Room will be ready in a few minutes"<<endl;
            this_thread::sleep_for(chrono::seconds(2));
            cout<<"Your room is ready"<<endl;
        }
    }

}
void RoomService::serveFood(string meal, Restaurant &restaurant,Client &client)
{
    for(Meal* a:restaurant.getMenu())
    {
        if(a->getName()== meal)
        {
            cout<<"OK, your order will be delivered in a few minutes."<<endl;
            client.setTotalbill(a->getPrice());
            return;
        }
    }
    cout<<"No meal found"<<endl;


}
void RoomService::giveMenu(Restaurant &res) {
    cout<<"The list of meals in the menu: "<<endl;
    for(Meal* a:res.getMenu()) {
        a->getDetails();
    }
}




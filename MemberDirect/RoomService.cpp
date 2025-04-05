#include "RoomService.h"

#include <chrono>
#include <thread>

#include "../Restaurant.h"
RoomService::RoomService(string name, int age, int yearsOfExperience, int ID, char gender,string status,double salary):Member(name,age,yearsOfExperience,ID,gender,status,salary)
{

}
//newly added
void RoomService::setRoomsToClean(int id)
{
    roomsToClean.push_back(id);
}
//newly added
vector<int> RoomService::getRoomsToClean()
{
    return roomsToClean;
}
//newly added
void RoomService::cleanRoom(int id)
{
    for(int i = 0; i < roomsToClean.size(); i++)
    {
        if(roomsToClean[i] == id)
        {
            cout<<"We are cleaning now!!"<<endl;
            this_thread::sleep_for(chrono::seconds(3));
            cout<<"Room will be ready in a few minutes"<<endl;
            this_thread::sleep_for(chrono::seconds(2));
            cout<<"Your room is ready"<<endl;
        }
    }

}
//newly added
void RoomService::serveFood(string meal, Restaurant &restaurant,Client &client)
{
    for(Meal* a:restaurant.getMenu())
    {
        if(a->getName()== meal)
        {
            cout<<"OK, your order will be delivered in a few minutes."<<endl;
            client.setcalTotalbill(a->getPrice());
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




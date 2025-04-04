#include <iostream>

#include "MemberDirect/RoomService.h"
#include "Hotel.h"
#include "Client.h"
#include "MemberDirect/Chef.h"
#include "MemberDirect/Manager.h"
#include "MemberDirect/RoomService.h"
#include "MemberDirect/Waiter.h"
#include "MemberDirect/Reception.h"
#include "RoomDirect/Room.h"

using namespace std;

int main() {
   //  // Create a hotel instance
    Hotel myHotel;
    Restaurant myRes;
    Manager *boss=new Manager("Oybek",18,0,232,'M',"Manager",5000);

for(int i = 0; i < 50; i++)
{
    Room *room= new Room(100+i,300,"Standart");
    myHotel.addNewRoom(room);
}
    for(int i = 0; i < 35; i++)
    {
        Room *room= new Room(200+i,700,"Lux");
        myHotel.addNewRoom(room);
    }
    for(int i = 0; i < 15; i++) {
        Room *room= new Room(300+i,1000,"VIP");
        myHotel.addNewRoom(room);
    }
    RoomService *roomServicer= new RoomService("ASile",43,1,343,'M',"RoomServicer",1000);
    Reception *reception= new Reception("Mike",34,13,204,'M',"Reception",1500);
    Chef *chef= new Chef("Oybek",18,1,204,'M',"Chef",2000);
    Waiter *waiter=new Waiter("Og'abek",18,1,204,'M',"Waiter",1200);
    Meal* newMeal= new Meal("Desert",30);
    chef->addMeal(newMeal,myRes);
    boss->addMember(*roomServicer,myHotel);
    boss->addMember(*reception,myHotel);
    boss->addMember(*chef,myHotel);
    boss->addMember(*boss,myHotel);
    boss->addMember(*waiter,myHotel);
//    waiter->giveMenu(myRes);
     // reception->AskInfo(myHotel);
    boss->setSalary(myHotel,1800,204);
     boss->displayMembers(myHotel);
    // boss->displayClients(myHotel);

    // chef->addMeal("Desert",myRes);
    // reception->GiveRoomInfo(myHotel);















    return 0;
}

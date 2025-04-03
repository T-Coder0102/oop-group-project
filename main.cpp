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

    //Creating freeRooms for hotel
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
    RoomService *roomServicer= new RoomService("ASile",43,1,343,'M');
    Reception *reception= new Reception("Mike",34,13,204,'M');
    Chef *chef= new Chef("Oybek",18,1,204,'M');
    chef->addMeal("Desert",myRes);
    // reception->GiveRoomInfo(myHotel);
        roomServicer->cleanRoom();













    // Manager *boss=new Manager("Asilbek",45,10,200,'M',"boss");
    //
    // boss->displayClients();





    return 0;
}

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
#include "ClientMain.h"
#include "ManagerMain.h"
using namespace std;

int main() {
   //  // Create a hotel instance
    Hotel myHotel;
    Restaurant myRes;
    Manager *boss=new Manager("Oybek",18,0,232,'M',"Manager",5000);

for(int i = 1; i <= 50; i++)
{
    Room *room= new Room(100+i,300,"Standart");
    myHotel.addNewRoom(room);
}
    for(int i = 1; i <= 35; i++)
    {
        Room *room= new Room(200+i,700,"Lux");
        myHotel.addNewRoom(room);
    }
    for(int i = 1; i <=15; i++) {
        Room *room= new Room(300+i,1000,"VIP");
        myHotel.addNewRoom(room);
    }

    RoomService *roomServicer= new RoomService("ASile",43,1,343,'M',"RoomServicer",1000);
    Reception *reception= new Reception("Mike",34,13,204,'M',"Reception",1500);
    Chef *chef= new Chef("Oybek",18,1,204,'M',"Chef",2000);
    Waiter *waiter=new Waiter("Og'abek",18,1,204,'M',"Waiter",1200);
    Meal* newMeal= new Meal("Desert",30);
    Meal* newMeal1= new Meal("Desert1",40);
    Meal* newMeal2= new Meal("Desert2",50);
    Meal* newMeal3= new Meal("Desert3",60);
    Meal* newMeal4= new Meal("Desert4",30);
    Meal* newMeal5= new Meal("Desert5",50);
    Meal* newMeal6= new Meal("Desert6",40);


    chef->addMeal(newMeal,myRes);
    chef->addMeal(newMeal1,myRes);
    chef->addMeal(newMeal2,myRes);
    chef->addMeal(newMeal3,myRes);
    chef->addMeal(newMeal4,myRes);
    chef->addMeal(newMeal5,myRes);
    chef->addMeal(newMeal6,myRes);

    boss->addMember(*roomServicer,myHotel);
    boss->addMember(*reception,myHotel);
    boss->addMember(*chef,myHotel);
    boss->addMember(*boss,myHotel);
    boss->addMember(*waiter,myHotel);
    while (true) {
        cout << "\n==========================================" << endl;
        cout << "         WELCOME TO OUR SYSTEM            " << endl;
        cout << "==========================================" << endl;
        cout << "               MAIN MENU                  " << endl;
        cout << "------------------------------------------" << endl;
        cout << " Please select your position:             " << endl;
        cout << "                                          " << endl;
        cout << "   [1] Client                             " << endl;
        cout << "   [2] Manager                            " << endl;
        cout << "   [Any other keys to Exit]               " << endl;
        cout << "------------------------------------------" << endl;
        cout << " Enter the number of your choice: ";

        int input;
        cin >> input;

        cout << "------------------------------------------" << endl;

        if (input == 1) {
            cout << "\nYou selected: Client" << endl;
            cmain(*reception, myHotel, *roomServicer, myRes, *waiter);
        }
        else if (input == 2) {
            cout << "\nYou selected: Manager" << endl;
            managerMain(myHotel, *boss);
        }
        else {
            cout << "\nExiting the system. Goodbye!" << endl;
            break;
        }
    }




    return 0;
}

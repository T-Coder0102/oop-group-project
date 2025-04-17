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
#include "ChefMain.h"
#include "InternDirect/InternChef.h"
#include "InternDirect/InternDef.h"
#include "InternDirect/InternWaiter.h"
#include "InternDirect/InternRoomService.h"
#include "InternDirect/InternReception.h"
#include "InternDirect/InternManager.h"
using namespace std;

int main() {
   //  // Create a hotel instance
    Hotel myHotel;
    Restaurant myRes;
    Manager *boss=new Manager("Oybek",18,0,232,"M","Manager",5000,"boss","boss2025");

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

    RoomService *roomServicer= new RoomService("ASile",43,1,343,"M","RoomServicer",1000);
    Reception *reception= new Reception("Mike",34,13,204,"M","Reception",1500);
    Chef *chef= new Chef("Oybek",18,1,204,"M","Chef",2000,"chef","chef2025");
    Waiter *waiter=new Waiter("Og'abek",18,1,204,"M","Waiter",1200);

    InternChef* chef_intern=new InternChef("Aziz",19,205,"M","InternChef");
    InternReception* reception_intern=new InternReception("Islom",20,206,"M","InternReception");
    InternWaiter* waiter_intern=new InternWaiter("Bakhtiyor",21,207,"M","InternWaiter");
    InternRoomService* room_service_intern=new InternRoomService("Zilola",18,208,"F","InternRoomService");
    InternManager* manager_intern=new InternManager("Asal",22,209,"F","InternManager");

    myHotel.addInternDefs(chef_intern);
    myHotel.addInternDefs(reception_intern);
    myHotel.addInternDefs(waiter_intern);
    myHotel.addInternDefs(room_service_intern);
    myHotel.addInternDefs(manager_intern);

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
        cout << "\n";
        this_thread::sleep_for(chrono::milliseconds(250));
        cout << "==========================================" << endl;
        cout << "         WELCOME TO OUR SYSTEM            " << endl;
        this_thread::sleep_for(chrono::milliseconds(250));
    while (true) {

        cout << "==========================================" << endl;
        this_thread::sleep_for(chrono::milliseconds(250));
        cout << "               MAIN MENU                  " << endl;
        this_thread::sleep_for(chrono::milliseconds(250));
        cout << "------------------------------------------" << endl;
        cout << " Please select your position:             " << endl;
        this_thread::sleep_for(chrono::milliseconds(250));
        cout << "                                          " << endl;
        cout << "   [1] Client                             " << endl;
        cout << "   [2] Manager                            " << endl;
        cout << "   [3] Chef                            " << endl;
        cout << "------------------------------------------" << endl;
        this_thread::sleep_for(chrono::milliseconds(250));

        int input;
        while (true) {
             cout << " Enter the number of your choice: ";
            cin >> input;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << " Please enter a valid number." << endl;
            }
            else {
                break;
            }
        }

        cout << "------------------------------------------" << endl;

        if (input == 1) {
            cout << "\nYou selected: Client" << endl;
            cmain(*reception, myHotel, *roomServicer, myRes, *waiter);
        }
        if (input == 2) {
            cout << "\nYou selected: Manager" << endl;
            managerMain(myHotel, *boss);
        }
        if(input==3)
        {
            cout << "\nYou selected: Chef" << endl;
            chefMain(*chef,myRes);

        }
        if (input==123456789) {
            break;
        }
    }
    return 0;
}

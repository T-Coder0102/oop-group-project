#include <iostream>


#include "Hotel.h"
#include "Client.h"
#include "MemberDirect/Manager.h"
#include "MemberDirect/RoomService.h"
#include "MemberDirect/Waiter.h"
#include "MemberDirect/Reception.h"

using namespace std;

int main() {
    // Create a hotel instance
    Hotel myHotel;
    for (int i=0;i<50;)

    // Creating 5 Clients
    Client* client1 = new Client("Alice", 28, 'F');
    Client* client2 = new Client("Bob", 35, 'M');
    Client* client3 = new Client("Charlie", 40, 'M');
    Client* client4 = new Client("Diana", 22, 'F');
    Client* client5 = new Client("Eve", 30, 'F');

    // Adding clients to the hotel
    myHotel.setClientsList(client1);
    myHotel.setClientsList(client2);
    myHotel.setClientsList(client3);
    myHotel.setClientsList(client4);
    myHotel.setClientsList(client5);

    // Creating specific hotel staff
    Manager* manager = new Manager("John", 45, 20, 201, 'M',"boss");
    RoomService* roomService = new RoomService("Sarah", 38, 15, 202, 'F');
    Waiter* waiter = new Waiter("Michael", 50, 25, 203, 'M');
    Reception* reception = new Reception("Emma", 29, 8, 204, 'F');
    RoomService* roomService2 = new RoomService("Tom", 33, 10, 205, 'M');

    // Adding members to the hote§l
    myHotel.setMembersList(manager);
    myHotel.setMembersList(roomService);
    myHotel.setMembersList(waiter);
    myHotel.setMembersList(reception);
    myHotel.setMembersList(roomService2);

    // Display Clients Info
   for (int i=0;i<myHotel.getClientsList().size();i++) {
       myHotel.getClientsList()[i]->displayinfo();
   }
    cout << endl;
    for (int i=0;i<myHotel.getMembersList().size();i++) {
        myHotel.getMembersList()[i]->displayinfo();
    }
    // Clean up allocated memory
    delete client1;
    delete client2;
    delete client3;
    delete client4;
    delete client5;
    delete manager;
    delete roomService;
    delete waiter;
    delete reception;
    delete roomService2;

    return 0;
}

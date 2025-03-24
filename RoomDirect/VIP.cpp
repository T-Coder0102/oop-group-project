#include "VIP.h"
using namespace std;


VIP::VIP(int roomNum, double price):Room(roomNum,price){
    facilities = {"Private balcony", "Voice control system", "..."};
}

string VIP::getRoomType() {
    cout<<"VIP"<<endl;
}
void VIP::display() {
    cout << "Room Type: " << getRoomType() << endl;
    cout << "Room Number: " << getRoomNum() << endl;
    cout << "Price: $" << getPrice() << endl;
    cout << "Status: " << (getIsBooked() ? "Booked" : "Available") << endl;
    cout << "Facilities: ";
    for (string &facility : facilities) {
        cout << facility << ", ";
    }
}




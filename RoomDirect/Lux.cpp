#include "Lux.h"
using namespace std;

Lux::Lux(int roomNum,int price):Room(roomNum,price){
    facilities = {"Sea view", "Smart TV", "..."};
}

string Lux::getRoomType() {
    return "Lux";
}

void Lux::display() {
    cout << "Room Type: " << getRoomType() << endl;
    cout << "Room Number: " << getRoomNum() << endl;
    cout << "Price: $" << getPrice() << endl;
    cout << "Status: " << (getIsBooked() ? "Booked" : "Not booked") << endl;
    cout << "Facilities: ";
    for (const string &facility : facilities) {
        cout << facility << ", ";
    }
}


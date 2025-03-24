#include "Standart.h"
using namespace std;

Standart::Standart(int roomNum, double price):Room(roomNum,price)
{
    facilities = {"TV", "Free WiFi", "Air Conditioning"};
}

string Standart::getRoomType() {
    return "Standart";
}

void Standart::display() {
    cout << "Room Type: " << getRoomType() << endl;
    cout << "Room Number: " << getRoomNum() << endl;
    cout << "Status: " << (getIsBooked() ? "Booked" : "Not booked") << endl;
    cout << "Facilities: ";
    for (const string &facil : facilities) {
        cout << facil << ", ";
    }
}






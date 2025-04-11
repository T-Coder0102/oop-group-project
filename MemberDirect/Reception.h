 #ifndef RECEPTION_H
#define RECEPTION_H
#include "Member.h"
#include "../Hotel.h"
#include "../Client.h"
#include "../RoomDirect/Room.h"
class Reception : public Member {
private:
    public:
    Reception(string name,int age,int yearsOfExperience,int ID,string gender,string status,double salary );
    void giveRoomInfo(Hotel &hotel);
    Client * askInfo(Hotel &hotel);
    void checkOut(Client &client,Hotel &hotel);
    void bookRoom(Hotel &hotel,Client&client);
};
#endif //RECEPTION_H

 #ifndef RECEPTION_H
#define RECEPTION_H
#include "Member.h"
#include "../Hotel.h"
#include "../Client.h"
#include "../RoomDirect/Room.h"
class Reception : public Member {
private:
    public:
    Reception(string name,int age,int yearsOfExperience,int ID,char gender,string status,double salary );
    // Reception(Hotel *hotel);
    void GiveRoomInfo(Hotel &hotel);
    void AskInfo(Hotel &hotel);
    void CheckOut();
    void bookRoom(string type);
};


#endif //RECEPTION_H

 #ifndef RECEPTION_H
#define RECEPTION_H
#include "Member.h"
#include "../Hotel.h"
#include "../RoomDirect/Room.h"
class Reception : public Member {
private:
    public:
    Reception(string name,int age,int yearsOfExperience,int ID,char gender );
    // Reception(Hotel *hotel);
    void GiveRoomInfo(Hotel &hotel);
    void AskInfo();
    void CheckOut();
    void bookRoom(string type);
};


#endif //RECEPTION_H

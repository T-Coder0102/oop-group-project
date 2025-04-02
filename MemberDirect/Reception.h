 #ifndef RECEPTION_H
#define RECEPTION_H
#include "Member.h"
#include "../Hotel.h"
#include "../RoomDirect/Room.h"
class Reception : public Member {
    private:
    Hotel hotel;

    public:
    Reception(string name,int age,int yearsOfExperience,int ID,char gender );
    void GiveRoomInfo();
    void AskInfo();
    void CheckOut();
    void bookRoom(string type);
};


#endif //RECEPTION_H

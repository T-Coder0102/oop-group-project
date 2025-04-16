
#ifndef INTERNROOMSERVICE_H
#define INTERNROOMSERVICE_H
#include <iostream>
#include"InternDef.h"
#include<string>
using namespace std;
class InternRoomService:public InternDef {
public:
    InternRoomService(string name, int age, int ID, string gender, string status);
    void DoIntern() override;
};
#endif //INTERNROOMSERVICE_H

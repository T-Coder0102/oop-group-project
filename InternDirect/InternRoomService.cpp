//
// Created by OYBEK ABDIRAHMONOV on 16/04/25.
//

#include "InternRoomService.h"
InternRoomService::InternRoomService(string name, int age, int ID, string gender, string status):InternDef(name,age,  ID,  gender,  status) {
}
void InternRoomService::DoIntern() {
    cout<<"I am doing internship for being Roomservicer "<<endl;
}

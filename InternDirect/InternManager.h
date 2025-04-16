#ifndef INTERNMANAGER_H
#define INTERNMANAGER_H
#include <iostream>
#include"InternDef.h"
#include<string>
using namespace std;
class InternManager:public InternDef {
public:
    InternManager(string name, int age, int ID, string gender, string status);
    void doIntern() override;
};

#endif //INTERNMANAGER_H

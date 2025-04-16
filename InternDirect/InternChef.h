#ifndef INTERNCHEF_H
#define INTERNCHEF_H
#include <iostream>
#include"InternDef.h"
#include<string>
using namespace std;
class InternChef:public InternDef {
public:
    InternChef(string name, int age, int ID, string gender, string status);
    void DoIntern() override;
};

#endif //INTERNCHEF_H

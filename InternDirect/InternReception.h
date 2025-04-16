#ifndef INTERNRECEPTION_H
#define INTERNRECEPTION_H
#include <iostream>
#include"InternDef.h"
#include<string>
using namespace std;
class InternReception:public InternDef {
public:
    InternReception(string name, int age, int ID, string gender, string status);
    void doIntern() override;
};
#endif //INTERNRECEPTION_H

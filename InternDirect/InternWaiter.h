

#ifndef INTERNWAITER_H
#define INTERNWAITER_H
#include <iostream>
#include"InternDef.h"
#include<string>
using namespace std;
class InternWaiter:public InternDef {
public:
    InternWaiter(string name, int age, int ID, string gender, string status);
    void DoIntern() override;
};
#endif //INTERNWAITER_H

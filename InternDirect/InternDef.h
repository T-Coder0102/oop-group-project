#ifndef INTERNDEF_H
#define INTERNDEF_H
#include <iostream>
#include<string>
using namespace std;
class InternDef {
private:
    string name;
    int age;
    int ID;
    string gender;
    string status;
public:
    InternDef(string name,int age,int ID,string gender,string status);
    virtual void DoIntern()=0;
    string GetName();
    int GetAge();
    int GetId();
    string GetGender();
    string GetStatus();
    void SetName(string name);
    void SetAge(int age);
    void SetId(int ID);
    void SetGender(string gender);
    void SetStatus(string status);

};
#endif //INTERNDEF_H

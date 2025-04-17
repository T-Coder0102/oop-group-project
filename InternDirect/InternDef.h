#ifndef INTERNDEF_H
#define INTERNDEF_H
#include <iostream>
#include<string>
using namespace std;
class InternDef {

public:
    InternDef(string name,int age,int ID,string gender,string status);
    virtual void doIntern()=0;
    string getName();
    int getAge();
    int getId();
    string getGender();
    string getStatus();
    void setName(string name);
    void setAge(int age);
    void setId(int ID);
    void setGender(string gender);
    void setStatus(string status);
    void getDetailsOfInterns();
private:
    string name;
    int age;
    int ID;
    string gender;
    string status;
};
#endif //INTERNDEF_H

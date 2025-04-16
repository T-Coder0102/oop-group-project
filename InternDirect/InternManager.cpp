

#include "InternManager.h"

InternManager::InternManager(string name, int age, int ID, string gender, string status):InternDef(name,age,  ID,  gender,  status) {
}
void InternManager::doIntern() {
    cout<<"I am doing internship for being Manager "<<endl;
}

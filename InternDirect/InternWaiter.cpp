

#include "InternWaiter.h"
InternWaiter::InternWaiter(string name, int age, int ID, string gender, string status):InternDef(name,age,  ID,  gender,  status) {
}
void InternWaiter::doIntern() {
    cout<<"I am doing internship for being Waiter "<<endl;
}

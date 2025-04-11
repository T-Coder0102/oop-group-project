#ifndef MANAGERMAIN_H
#define MANAGERMAIN_H
#include "Hotel.h"
#include "./MemberDirect/Reception.h"
#include"./MemberDirect/Chef.h"
#include "MemberDirect/RoomService.h"
#include "MemberDirect/Waiter.h"

#include "./MemberDirect/Member.h"
#include <cstdlib>
#include <ctime>
void managerMain(Hotel& hotel,Manager &boss)
{
    string defaultUsername="boss",defaultPassword="boss2025";
    bool authenticated=false;
    string userName;
    string passWord;
    while(1)
    {
        cout<<"Please enter your username:"<<endl;
        cin>>userName;
        cout<<"Please enter your password:"<<endl;
        cin>>passWord;
        if(defaultPassword==passWord && defaultUsername==userName)
        {
            authenticated=true;
            cout<<"Welcome to the Manager Menu"<<endl;
            break;
        }
        cout<<"Wrong password"<<endl;

    }
    srand(time(0));
    if(authenticated==true)
    {
        while(true){
            string name;
            int age;
            int yearsOfExperience;
            char gender;
            double salary;
            string status;
            cout<<"What do you want to do?? (1-Hire employee, 2-Fire employee,3-List all the employees,4-Change the salaries of employees',5-Log out)"<<endl;
            int choice;
            cin>>choice;
            if(choice==1) {
                cout<<"what is employee's name?"<<endl;
                cin>>name;
                cout<<"what is employee's age?"<<endl;
                cin>>age;
                cout<<"what is employee's years of experience?"<<endl;
                cin>>yearsOfExperience;
                cout<<"what is employee's gender?"<<endl;
                cin>>gender;
                cout<<"what is employee's salary?"<<endl;
                cin>>salary;
                cout<<"what is employee's status?"<<endl;
                cin>>status;
                int id=rand()%(age+yearsOfExperience)+1;
                if(status=="Reception"){
                    Reception *reception = new Reception(name,age,yearsOfExperience,id,gender,status,salary);
                    boss.addMember(*reception,hotel);
                }if(status=="Chef"){
                    Chef *chef = new Chef(name,age,yearsOfExperience,id,gender,status,salary);
                    boss.addMember(*chef,hotel);
                }if(status=="RoomServicer"){
                    RoomService* roomservicer= new RoomService(name,age,yearsOfExperience,id,gender,status,salary);
                    boss.addMember(*roomservicer,hotel);
                } if(status=="Waiter"){
                    Waiter *waiter= new Waiter(name,age,yearsOfExperience,id,gender,status,salary);
                    boss.addMember(*waiter,hotel);
                }
            }
            if (choice==2) {
                int job;
                cout<<"Which type of employee do you want fire??(1-Reception,2-RoomServicer,3-Chef,4-Waiter)"<<endl;
                cin>>job;
                if(job==1) {
                    int count=0;
                    for (int i=0;i<hotel.getMembersList().size();i++) {
                        if (hotel.getMembersList()[i]->getStatus()=="Reception") {
                            cout<<"Name of employee: "<<hotel.getMembersList()[i]->getName()<<endl;
                            cout<<"Id of employee: "<<hotel.getMembersList()[i]->getID()<<endl;
                            cout<<endl;
                            count++;
                        }
                    }
                    cout<<"Which employee do you want to fire??(Enter the ID of employee)"<<endl;
                    int Id;
                    cin>>Id;
                    if(count<2)
                    {
                        cout<<"You cannot fire anyone unless you have replacement for that position!!!"<<endl;
                    }else
                    {
                        for(int i=0;i<hotel.getMembersList().size();i++) {
                            if (hotel.getMembersList()[i]->getID()==Id) {
                                boss.removeMember(Id,hotel);
                                cout<<"You removed the employee with the ID:"<<Id<<endl;
                            }
                        }
                    }

                }
                if (job==2) {
                    int count=0;
                    for (int i=0;i<hotel.getMembersList().size();i++) {
                        if (hotel.getMembersList()[i]->getStatus()=="RoomServicer") {
                            cout<<"Name of employee: "<<hotel.getMembersList()[i]->getName()<<endl;
                            cout<<"Id of employee: "<<hotel.getMembersList()[i]->getID()<<endl;
                            cout<<endl;
                            count++;
                        }
                    }
                    cout<<"Which employee do you want to fire??(Enter the ID of employee)"<<endl;
                    int Id;
                    cin>>Id;
                    if(count<2)
                    {
                        cout<<"You cannot fire anyone unless you have replacement for that position!!!"<<endl;
                    }else
                    {
                        for(int i=0;i<hotel.getMembersList().size();i++) {
                            if (hotel.getMembersList()[i]->getID()==Id) {
                                boss.removeMember(Id,hotel);
                                cout<<"You removed the employee with the ID:"<<Id<<endl;
                            }
                        }
                    }
                }
                if (job==3) {
                    int count=0;
                    for (int i=0;i<hotel.getMembersList().size();i++) {
                        if (hotel.getMembersList()[i]->getStatus()=="Chef") {
                            cout<<"Name of employee: "<<hotel.getMembersList()[i]->getName()<<endl;
                            cout<<"Id of employee: "<<hotel.getMembersList()[i]->getID()<<endl;
                            cout<<endl;
                            count++;
                        }
                    }
                    cout<<"Which employee do you want to fire??(Enter the ID of employee)"<<endl;
                    int Id;
                    cin>>Id;
                    if(count<2)
                    {
                        cout<<"You cannot fire anyone unless you have replacement for that position!!!"<<endl;
                    }else
                    {
                        for(int i=0;i<hotel.getMembersList().size();i++) {
                            if (hotel.getMembersList()[i]->getID()==Id) {
                                boss.removeMember(Id,hotel);
                                cout<<"You removed the employee with the ID:"<<Id<<endl;
                            }
                        }
                    }
                }
                if (job==4) {
                    int count=0;
                    for (int i=0;i<hotel.getMembersList().size();i++) {
                        if (hotel.getMembersList()[i]->getStatus()=="Waiter") {
                            cout<<"Name of employee: "<<hotel.getMembersList()[i]->getName()<<endl;
                            cout<<"Id of employee: "<<hotel.getMembersList()[i]->getID()<<endl;
                            cout<<endl;
                            count++;
                        }
                    }
                    cout<<"Which employee do you want to fire??(Enter the ID of employee)"<<endl;
                    int Id;
                    cin>>Id;
                    if(count<2)
                    {
                        cout<<"You cannot fire anyone unless you have replacement for that position!!!"<<endl;
                    }else
                    {
                        for(int i=0;i<hotel.getMembersList().size();i++) {
                            if (hotel.getMembersList()[i]->getID()==Id) {
                                boss.removeMember(Id,hotel);
                                cout<<"You removed the employee with the ID:"<<Id<<endl;
                            }
                        }
                    }
                }
            }
            if (choice==3) {
                boss.displayMembers(hotel);
            }
            if(choice==4)
            {
                cout<<"Which type of employee do you want to change the salaries of ??(1-Reception,2-RoomServicer,3-Chef,4-Waiter)"<<endl;
                int type;
                cin>>type;
                if(type==1)
                {
                    for(int i=0;i<hotel.getMembersList().size();i++)
                    {
                        if (hotel.getMembersList()[i]->getStatus()=="Reception") {
                            cout<<"The name of employee: "<<hotel.getMembersList()[i]->getName()<<endl;
                            cout<<"The ID of employee: "<<hotel.getMembersList()[i]->getID()<<endl;
                            cout<<"The current salary of employee: $"<<hotel.getMembersList()[i]->getSalary()<<endl;
                            cout<<endl;
                        }
                    }
                    cout<<"Which employee do you want to change the salary of??(Write the ID of employee)"<<endl;
                    int Id;
                    cin>>Id;
                    cout<<"To what amount do you want to change the salary??"<<endl;
                    double newSalary;
                    cin>>newSalary;
                    cout<<"You have changed the salary of employee to : $"<<newSalary<<endl;
                    boss.setEmployeeSalary(newSalary,Id,hotel);

                }
                if(type==2)
                {
                    for(int i=0;i<hotel.getMembersList().size();i++)
                    {
                        if (hotel.getMembersList()[i]->getStatus()=="RoomServicer") {
                            cout<<"The name of employee: "<<hotel.getMembersList()[i]->getName()<<endl;
                            cout<<"The ID of employee: "<<hotel.getMembersList()[i]->getID()<<endl;
                            cout<<"The current salary of employee: $"<<hotel.getMembersList()[i]->getSalary()<<endl;
                            cout<<endl;
                        }
                    }
                    cout<<"Which employee do you want to change the salary of??(Write the ID of employee)"<<endl;
                    int Id;
                    cin>>Id;
                    cout<<"To what amount do you want to change the salary??"<<endl;
                    double newSalary;
                    cin>>newSalary;
                    cout<<"You have changed the salary of employee to : $"<<newSalary<<endl;
                    boss.setEmployeeSalary(newSalary,Id,hotel);
                }
                if(type==3)
                {
                    for(int i=0;i<hotel.getMembersList().size();i++)
                    {
                        if (hotel.getMembersList()[i]->getStatus()=="Chef") {
                            cout<<"The name of employee: "<<hotel.getMembersList()[i]->getName()<<endl;
                            cout<<"The ID of employee: "<<hotel.getMembersList()[i]->getID()<<endl;
                            cout<<"The current salary of employee: $"<<hotel.getMembersList()[i]->getSalary()<<endl;
                            cout<<endl;
                        }
                    }
                    cout<<"Which employee do you want to change the salary of??(Write the ID of employee)"<<endl;
                    int Id;
                    cin>>Id;
                    cout<<"To what amount do you want to change the salary??"<<endl;
                    double newSalary;
                    cin>>newSalary;
                    cout<<"You have changed the salary of employee to : $"<<newSalary<<endl;
                    boss.setEmployeeSalary(newSalary,Id,hotel);
                }
                if(type==4)
                {
                    for(int i=0;i<hotel.getMembersList().size();i++)
                    {
                        if (hotel.getMembersList()[i]->getStatus()=="Waiter") {
                            cout<<"The name of employee: "<<hotel.getMembersList()[i]->getName()<<endl;
                            cout<<"The ID of employee: "<<hotel.getMembersList()[i]->getID()<<endl;
                            cout<<"The current salary of employee: $"<<hotel.getMembersList()[i]->getSalary()<<endl;
                            cout<<endl;
                        }
                    }
                    cout<<"Which employee do you want to change the salary of??(Write the ID of employee)"<<endl;
                    int Id;
                    cin>>Id;
                    cout<<"To what amount do you want to change the salary??"<<endl;
                    double newSalary;
                    cin>>newSalary;
                    cout<<"You have changed the salary of employee to : $"<<newSalary<<endl;
                    boss.setEmployeeSalary(newSalary,Id,hotel);
                }
            }
            if(choice==5)
            {
                break;
            }


        }
    }
};
#endif //MANAGERMAIN_H

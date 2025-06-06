#ifndef MANAGERMAIN_H
#define MANAGERMAIN_H
#include "Hotel.h"
#include "./MemberDirect/Reception.h"
#include"./MemberDirect/Chef.h"
#include "MemberDirect/RoomService.h"
#include "MemberDirect/Waiter.h"
#include "InternDirect/InternChef.h"
#include "InternDirect/InternDef.h"
#include "InternDirect/InternWaiter.h"
#include "InternDirect/InternRoomService.h"
#include "InternDirect/InternReception.h"
#include "InternDirect/InternManager.h"

#include "./MemberDirect/Member.h"
#include <cstdlib>
#include <ctime>
using namespace std;
void managerMain(Hotel& hotel,Manager &boss)
{
    string defaultUsername=boss.getUserName();
    string defaultPassword=boss.getPassword();
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
            cout << "\n==============================" << endl;
            cout << "     Welcome to Manager Page  " << endl;
            cout << "==============================" << endl;
            break;
        }
        cout<<"Wrong password!"<<endl;

    }
    srand(time(0));
    if(authenticated)
    {
        while(true){
            string name;
            int age;
            int yearsOfExperience;
            string gender;
            double salary;
            int status;
            string stat[4]={"Reception","Chef","RoomServicer","Waiter"};
            cout << "\n========= MANAGER OPTIONS =========" << endl;
            cout << " What would you like to do?" << endl;
            cout << " [1] Hire Employee" << endl;
            cout << " [2] Fire Employee" << endl;
            cout << " [3] List All Employees" << endl;
            cout << " [4] List All Clients" << endl;
            cout << " [5] Change Employee Salaries" << endl;
            cout << " [6] Manage Interns" << endl;
            cout << " [7] Change password" << endl;
            cout << " [8] Log Out" << endl;
            cout << "-----------------------------------" << endl;
            cout << "\nEnter your choice: ";
            int choice;
            cin>>choice;
            if(choice==1) {
                cout << "\n========= Hiring =========" << endl;
                cout<<"What is employee's name?"<<endl;
                cin>>name;
                while (true) {
                    cout << "What is employee's age?" << endl;
                    cin >> age;
                     if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "Invalid input for years of experience. Please enter a valid number." << endl;
                    }
                    else if (age < 18) {
                        cout << "Employee must be at least 18 years old. Please enter again." << endl;
                    }
                    else {
                        break;
                    }
                }
                while (true) {
                    cout<<"What is employee's years of experience?"<<endl;
                    cin >> yearsOfExperience;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "Invalid input for years of experience. Please enter a valid number." << endl;
                    } else {
                        break;
                    }
                }
                while (true) {
                    cout << "What is your gender (M or F):" << endl;
                    cin >> gender;
                    if (gender == "M" || gender == "F") {
                        break;
                    }
                        cout << "Invalid gender input. Please enter 'M' or 'F'." << endl;

                }
                while (true) {
                    cout<<"What is employee's salary?"<<endl;
                    cin>>salary;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "Invalid input for years of experience. Please enter a valid number." << endl;
                    } else {
                        break;
                    }
                }
                cout<<"What is employee's status?"<<endl;
                cout<<"[1]Reception"<<endl;
                cout<<"[2]Chef"<<endl;
                cout<<"[3]RoomService"<<endl;
                cout<<"[4]Waiter"<<endl;
                cin>>status;
                int id=rand()%(age+yearsOfExperience)+1;
                if(status==1){
                    Reception *reception = new Reception(name,age,yearsOfExperience,id,gender,stat[status-1],salary);
                    boss.addMember(*reception,hotel);
                    age=0;
                }if(status==2){
                    Chef *chef = new Chef(name,age,yearsOfExperience,id,gender,stat[status-1],salary,"chef","chef2025");
                    boss.addMember(*chef,hotel);
                    age=0;
                }if(status==3){
                    RoomService* roomservicer= new RoomService(name,age,yearsOfExperience,id,gender,stat[status-1],salary);
                    boss.addMember(*roomservicer,hotel);
                    age=0;
                } if(status==4){
                    Waiter *waiter= new Waiter(name,age,yearsOfExperience,id,gender,stat[status-1],salary);
                    boss.addMember(*waiter,hotel);
                    age=0;
                }
                cout << "-----------------------------------" << endl;
            }
            if (choice==2) {
                int job;
                cout << "\n====== EMPLOYEE TERMINATION MENU ======" << endl;
                cout << " Select the type of employee to fire:" << endl;
                cout << " [1] Receptionist" << endl;
                cout << " [2] Room Servicer" << endl;
                cout << " [3] Chef" << endl;
                cout << " [4] Waiter" << endl;
                cout << " [5] Changed-mind" << endl;
                cout << "---------------------------------------" << endl;
                cout << "\nEnter your choice: ";
                cin>>job;
                if(job==1) {
                    int count=0;
                    for (int i=0;i<hotel.getMembersList().size();i++) {
                        if (hotel.getMembersList()[i]->getStatus()=="Reception") {
                            cout<<"Name of employee: "<<hotel.getMembersList()[i]->getName()<<endl;
                            cout<<"ID of employee: "<<hotel.getMembersList()[i]->getID()<<endl;
                            cout<<"Salary of employee: "<<hotel.getMembersList()[i]->getSalary()<<endl;
                            cout<<endl;
                            count++;
                        }
                    }
                    cout<<"Which employee do you want to fire? (Enter the ID of employee)"<<endl;
                    int Id;
                    cin>>Id;
                    if(count<2)
                    {
                        cout<<"You cannot fire anyone unless you have replacement for that position!"<<endl;
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
                            cout<<"ID of employee: "<<hotel.getMembersList()[i]->getID()<<endl;
                            cout<<"Salary of employee: "<<hotel.getMembersList()[i]->getSalary()<<endl;
                            cout<<endl;
                            count++;
                        }
                    }
                    cout<<"Which employee do you want to fire? (Enter the ID of employee): "<<endl;
                    int Id;
                    cin>>Id;
                    if(count<2)
                    {
                        cout<<"You cannot fire anyone unless you have replacement for that position!"<<endl;
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
                            cout<<"ID of employee: "<<hotel.getMembersList()[i]->getID()<<endl;
                            cout<<"Salary of employee: "<<hotel.getMembersList()[i]->getSalary()<<endl;
                            cout<<endl;
                            count++;
                        }
                    }
                    cout<<"Which employee do you want to fire ?(Enter the ID of employee): "<<endl;
                    int Id;
                    cin>>Id;
                    if(count<2)
                    {
                        cout<<"You cannot fire anyone unless you have replacement for that position!"<<endl;
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
                            cout<<"ID of employee: "<<hotel.getMembersList()[i]->getID()<<endl;
                            cout<<"Salary of employee: "<<hotel.getMembersList()[i]->getSalary()<<endl;
                            cout<<endl;
                            count++;
                        }
                    }
                    cout<<"Which employee do you want to fire ?(Enter the ID of employee)"<<endl;
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
                if (job==5) {
                    continue;
                }
            }
            if (choice==3) {
                cout << "\n====== EMPLOYEE  MENU ======" << endl;
                boss.displayMembers(hotel);
                cout<<"---------------------------------------" << endl;
            }
            if(choice==4)
            {
                cout << "\n====== CLIENTS  MENU ======" << endl;
                boss.displayClients(hotel);
                cout<<"----------------------------------------" << endl;
            }
            if(choice==5)
            {
                cout << "\n====== SALARY CHANGING ======" << endl;
                cout<<"Which type of employee do you want to change the salaries of ?(1-Reception,2-RoomServicer,3-Chef,4-Waiter)"<<endl;
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
                    cout << " Enter the ID of the employee whose salary you want to change:" << endl;
                    int Id;
                    cin>>Id;
                    cout<<"To what amount do you want to change the salary??"<<endl;
                    double newSalary;
                    cin>>newSalary;
                    if (newSalary > 0) {
                        cout<<"You have changed the salary of employee to : $"<<newSalary<<endl;
                        boss.setEmployeeSalary(newSalary,Id,hotel);
                    } else {
                        cout<<"Invalid Input"<<endl;
                    }

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
                    cout << " Enter the ID of the employee whose salary you want to change:" << endl;                    int Id;
                    cin>>Id;
                    cout<<"To what amount do you want to change the salary??"<<endl;
                    double newSalary;
                    cin>>newSalary;
                    if (newSalary > 0) {
                        cout<<"You have changed the salary of employee to : $"<<newSalary<<endl;
                        boss.setEmployeeSalary(newSalary,Id,hotel);
                    } else {
                        cout<<"Invalid Input"<<endl;
                    }
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
                    cout << " Enter the ID of the employee whose salary you want to change:" << endl;                    int Id;
                    cin>>Id;
                    cout<<"To what amount do you want to change the salary??"<<endl;
                    double newSalary;
                    cin>>newSalary;
                    if (newSalary > 0) {
                        cout<<"You have changed the salary of employee to : $"<<newSalary<<endl;
                        boss.setEmployeeSalary(newSalary,Id,hotel);
                    } else {
                        cout<<"Invalid Input"<<endl;
                    }
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
                    cout << " Enter the ID of the employee whose salary you want to change:" << endl;                    int Id;
                    cin>>Id;
                    cout<<"To what amount do you want to change the salary??"<<endl;
                    double newSalary;
                    cin>>newSalary;
                    if (newSalary>0) {
                        cout<<"You have changed the salary of employee to : $"<<newSalary<<endl;
                        boss.setEmployeeSalary(newSalary,Id,hotel);
                    }else {
                        cout<<"Invalid Input"<<endl;
                    }
                }
                cout<<"---------------------------------------" << endl;
            }
            if(choice==6)
            {
                while(true)
                {
                    cout<<"What do you want to do with interns"<<endl;
                    cout<<"[1]-Add a new intern"<<endl;
                    cout<<"[2]-Display all interns"<<endl;
                    cout<<"[3]-Test the interns"<<endl;
                    cout<<"[4]-Back"<<endl;
                    int choice;
                    while (true) {
                        cout << "Enter your choice" << endl;
                        cin >> choice;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cout << "Please enter a valid number." << endl;
                        }
                        else {
                            break;
                        }
                    }
                    if(choice==1) {
                        string stat[5]={"Reception","Chef","RoomServicer","Waiter","Manager"};
                        cout << "\n========= Hiring =========" << endl;
                        cout<<"What is intern's name?"<<endl;
                        cin>>name;
                        while (true) {
                            cout << "What is intern's age?" << endl;
                            cin >> age;
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cout << "Please enter a valid number." << endl;
                            }
                            else {
                                break;
                            }
                        }
                        while (true) {
                            cout << "What is your gender (M or F):" << endl;
                            cin >> gender;
                            if (gender == "M" || gender == "F") {
                                break;
                            }
                            cout << "Invalid gender input. Please enter 'M' or 'F'." << endl;

                        }

                        cout<<"What is employee's status?"<<endl;
                        cout<<"[1]Reception"<<endl;
                        cout<<"[2]Chef"<<endl;
                        cout<<"[3]RoomService"<<endl;
                        cout<<"[4]Waiter"<<endl;
                        cout<<"[5]Manager"<<endl;
                        cin>>status;
                        int id=rand()%(age+yearsOfExperience)+1;
                        if(status==1){
                            InternReception *intern_reception = new InternReception(name,age,id,gender,stat[status-1]);
                            hotel.addInternDefs(intern_reception);
                            age=0;
                        }if(status==2){
                            InternChef *chef = new InternChef(name,age,id,gender,stat[status-1]);
                            hotel.addInternDefs(chef);
                            age=0;
                        }if(status==3){
                            InternRoomService* roomservicer= new InternRoomService(name,age,id,gender,stat[status-1]);
                            hotel.addInternDefs(roomservicer);
                            age=0;
                        } if(status==4){
                            InternWaiter *waiter= new InternWaiter(name,age,id,gender,stat[status-1]);
                            hotel.addInternDefs(waiter);
                            age=0;
                        }if(status==5){
                            InternManager *intern_manager= new InternManager(name,age,id,gender,stat[status-1]);
                            hotel.addInternDefs(intern_manager);
                            age=0;
                        }
                        cout << "-----------------------------------" << endl;
                    }
                    if(choice==2)
                    {
                        cout<<"Interns in the Hotel"<<endl;
                        hotel.displayInternDefs();
                    }
                    if(choice==3)
                    {
                        for(InternDef* a:hotel.getInternDefsList())
                        {
                            a->doIntern();
                            cout<<endl;
                        }
                    }
                    if(choice==4)
                    {
                        break;
                    }
                }
            }
            if (choice==7)
            {
                string newPass;string newUser;
                cout<<"Enter new username:"<<endl;
                cin>>newUser;
                cout<<"Enter new password:"<<endl;
                cin>>newPass;
                boss.setUserName(newUser);
                boss.setPassword(newPass);
            }
            if(choice==8)
            {
                break;
            }
        }
    }
};
#endif //MANAGERMAIN_H

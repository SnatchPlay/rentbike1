#include "command.h"
#include "Factory.h"
#include"customer.h"
#include"place.h"
#include<fstream>
#include<iostream>
#include <algorithm>
using namespace std;

void command::AddCall()
{
    string name, surname;
    int stag, calls;
    cout << "Type name:"; cin >> name;
    cout << "Type surname:"; cin >> surname;
    cout << "Type stag:"; cin >> stag;
    calls = 0;

    Call* call1;
    call1 = new Call(name, surname, stag, calls);

    callRepository.Add(*call1);
}
void command::AddTech()
{
    string name, surname;
    int rating, reports;
    cout << "Type name:"; cin >> name;
    cout << "Type surname:"; cin >> surname;
    rating = 0;
    reports = 0;

    Technic* tech;
    tech = new Technic(name, surname, rating, reports);

    techRepository.Add(*tech);

}
void command::BOTECH()
{
    Technic* t;
    Factory* factory = new OmgPers;
    int borate,count=0; int f = 0;
    borate = techRepository.entity[f].getrate();
    for (int i = 1; i < techRepository.GetEntity().size(); i++) {
        count++;
        if ((techRepository.entity[i].getrate()) > borate) {
            borate = techRepository.entity[i].getrate();
             f = count;
        }
    }
    string name, surname; int rate, stag, rep;
    name = techRepository.entity[f].getName();
    surname = techRepository.entity[f].getSurname();
    stag = techRepository.entity[f].getstag();
    rep = techRepository.entity[f].getcr();
    rate = techRepository.entity[f].getrate();
    t = factory->Tech(name, surname, stag, rep, rate);
    ofstream str;
    str.open("C:/Users/Ûלרפוכש/source/repos/Project1/BOTECH.txt");
    str<<t->getName() << " " << t->getSurname() << " " << t->getstag() << " " << t->getrate() << " " << t->getcr() << endl;

    str.close();


}
void command::BOCALL()
{
    Call* c;
    Factory* factory = new OmgPers;
    int borate,count=0; int f = 0;
    borate = (callRepository.GetEntity()[0]).getcalls();
    for (int i = 1; i < callRepository.GetEntity().size(); i++) {
        count++;
        if (((callRepository.GetEntity()[i]).getcalls()) > borate) {
            borate = (callRepository.GetEntity()[i]).getcalls();
            f = count;
        }
    }
    string name, surname; int  stag, call;
    name = (callRepository.GetEntity()[f]).getName();
    surname = (callRepository.GetEntity()[f]).getSurname();
    stag = (callRepository.GetEntity()[f]).getstag();
    call = (callRepository.GetEntity()[f]).getcalls();
    c = factory->Caller(name, surname, stag, call);
    ofstream str;
    str.open("C:/Users/Ûלרפוכש/source/repos/Project1/BOCALL.txt");
    str << c->getName() << " " << c->getSurname() << " " << c->getstag() << " " << c->getcalls()  << endl;

    str.close();
}
void command::showbest()
{
    ifstream  str1;
    str1.open("C:/Users/Ûלרפוכש/source/repos/Project1/BOCALL.txt");
    string name, surname; int stag, calls,rate,cor;
    while (str1) {

        if (str1 >> name >> surname >> stag >> calls)
        {
            Call* call1;

            Factory* factory = new OmgPers;

            call1 = factory->Caller(name, surname, stag, calls);
            cout << "Best call: " << call1->getName() << " " << call1->getSurname() << " " << call1->getcalls() << endl;
        }
        
    }

    str1.close();
    str1.open("C:/Users/Ûלרפוכש/source/repos/Project1/BOTECH.txt");
    while (str1) {

        if (str1 >> name >> surname >> stag >> rate >> cor)
        {

            Technic* th;
            Factory* factory = new StndPers;
            th = factory->Tech(name, surname, stag, rate, cor);
            cout<< "Best tech: " << th->getName() << " " << th->getSurname() << " " << th->getrate() << endl;
        }
    }
    str1.close();
}
void command::clearfile()
{
    ofstream str;
    str.open("C:/Users/Ûלרפוכש/source/repos/Project1/RepList.txt",  ios::out);
    

    str.close();
}
void command::rewritecallfile()
{
    callRepository.WriteToStorage();

}
void command::rewritetechfile()
{
    techRepository.WriteToStorage();
}
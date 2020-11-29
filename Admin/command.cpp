#include "command.h"
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
void command::clearfile()
{
    ofstream str;
    str.open("C:/Users/Ûלרפוכש/source/repos/ןנמךאע/RepList.txt", ios::out);


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
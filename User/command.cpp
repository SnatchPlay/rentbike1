#include "command.h"
#include"customer.h"
#include"place.h"
#include<fstream>
#include<iostream>
#include <algorithm>
using namespace std;

bool command::avalbystr(string street) {//all zaynato= true
    int k = 0;
    for (int i = 0; i < placerep.GetEntity().size(); i++) {

        if ((street == (((place*)placerep.GetEntity()[i])->getstreet())) and ((((place*)placerep.GetEntity()[i])->avall()) == true)) {
            k++;
        }
    }
    if (3 == k) {
        return true;
    }
    else {
        return false;
    }
}
bool command::avalsom(string street) {
    for (int i = 0; i < placerep.GetEntity().size(); i++) {
        if ((street == (((place*)placerep.GetEntity()[i])->getstreet())) and ((((place*)placerep.GetEntity()[i])->avall()) == true)) {
            return true;//ye bike
        }

    }
    return false;
}



void command::showjustaval(string street) {
    for (int i = 0; i < placerep.GetEntity().size(); i++) {
        if ((street == (((place*)placerep.GetEntity()[i])->getstreet())) and ((((place*)placerep.GetEntity()[i])->avall()) == true)) {
            ((place*)placerep.GetEntity()[i])->Writejustbike();

        }
    }

}

void command::streets() {//вулиці
    for (int i = 0; i < placerep.GetEntity().size(); i++) {
        difstreet.push_back((((place*)placerep.GetEntity()[i])->getstreet()));
    }
    sort(difstreet.begin(), difstreet.end());
    difstreet.erase(unique(difstreet.begin(), difstreet.end()), difstreet.end());
    for (int k = 0; k < difstreet.size(); k++) {
        cout << difstreet[k] << endl;
    }
}

void command::showbystreet(string streeet) {//пошук за вулицею
    for (int i = 0; i < placerep.GetEntity().size(); i++) {
        if (streeet == (((place*)placerep.GetEntity()[i])->getstreet())) {

            ((place*)placerep.GetEntity()[i])->Writejustbike();
        }
        else {
            continue;
        }
    }
}
void command::rent(int s) {//
    Customer cs;
    ofstream str;
    str.open("C:/Users/Ымшфелщ/source/repos/прокат/cus.txt", ios_base::app);
    for (int i = 0; i < placerep.GetEntity().size(); i++) {
        if (s == ((place*)placerep.GetEntity()[i])->sr()) {
            ((place*)placerep.GetEntity()[i])->seta(false);
        }

    }
    str << s << " " << custcommand.back().getname() << " " << custcommand.back().getsurname() << " " << custcommand.back().getnumber() << endl;

    str.close();

}

void command::shownotavlbystr(string stret, int sr) {
    int f = 1;

    for (int i = 0; i < placerep.GetEntity().size(); i++) {
        if ((stret == (((place*)placerep.GetEntity()[i])->getstreet())) and ((((place*)placerep.GetEntity()[i])->avall()) == false)) {
            if (f > 1) {
                break;
            }
            ((place*)placerep.GetEntity()[i])->seta(true);
            ((place*)placerep.GetEntity()[i])->setsr(sr);
            f++;
        }
    }
}


void command::rewrite() {
    placerep.WriteToStorage();
}

void command::returnb(int ar)
{
    vector<int> serials;
    vector<string> cust;
    int serial, phone; string strr, name, surname;

    ifstream cs1; ofstream cs;
    cs1.open("C:/Users/Ымшфелщ/source/repos/прокат/cus.txt");

    while (cs1) {
        cs1 >> serial >> name >> surname >> phone;
        serials.push_back(serial);

    }
    serials.pop_back();
    cs1.close();
    cs1.open("C:/Users/Ымшфелщ/source/repos/прокат/cus.txt");
    while (cs1) {
        getline(cs1, strr);
        cust.push_back(strr);
    }
    cust.pop_back();
    for (int i = 0; i < serials.size(); i++) {
        if (ar == serials[i]) {
            cust.erase(cust.begin() + i);
        }
    }
    cs.open("C:/Users/Ымшфелщ/source/repos/прокат/cus.txt");
    for (int i = 0; i < cust.size(); i++) {
        cs << cust[i] << endl;
    }
    cs.close();
}
void command::readcust() {
    Customer css;
    string name, surname; int phone;
    cout << "Please type info about you:" << endl;
    cout << "Name:"; cin >> name;
    cout << "Surname:"; cin >> surname;
    cout << "Phone:"; cin >> phone;
    css = Customer(name, surname, phone);
    custcommand.push_back(css);
}
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
void command::rewritetechfile()
{
    techRepository.WriteToStorage();
}
void command::setratetech(string name, int newrate)
{
    for (int i = 0; i < techRepository.GetEntity().size(); i++) {
        if (name == (((Technic*)techRepository.GetEntity()[i])->getName())) {
            ((Technic*)techRepository.GetEntity()[i])->setrate(newrate);

        }
    }
}
void command::repplus(string name)
{

    for (int i = 0; i < techRepository.GetEntity().size(); i++) {
        if (name == (((Technic*)techRepository.GetEntity()[i])->getName())) {
            ((Technic*)techRepository.GetEntity()[i])->setcr((((Technic*)techRepository.GetEntity()[i])->getcr() + 1));

        }
    }
}
void command::showtech()
{
    for (int i = 0; i < techRepository.GetEntity().size(); i++) {
        (techRepository.GetEntity()[i])->Write();

    }
}
//////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
void command::writerep(string report)
{
    ofstream str;
    str.open("C:/Users/Ымшфелщ/source/repos/прокат/RepList.txt", ios_base::app);
    str << report << endl;

    str.close();
}
void command::rewritecallfile()
{
    callRepository.WriteToStorage();

}
void command::showcaller()
{
    for (int i = 0; i < callRepository.GetEntity().size(); i++) {
        (callRepository.GetEntity()[i])->Write();

    }
}

void command::callplus(string name)
{
    for (int i = 0; i < callRepository.GetEntity().size(); i++) {
        if (name == (((Call*)callRepository.GetEntity()[i])->getName())) {
            ((Call*)callRepository.GetEntity()[i])->setcall((((Call*)callRepository.GetEntity()[i])->getcalls() + 1));

        }
    }
}
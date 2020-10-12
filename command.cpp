#include "command.h"
#include"customer.h"
#include"place.h"
#include<fstream>
#include<iostream>
#include <algorithm>
using namespace std;
void command::readbikefile() {
    ifstream  str1;
    string street1; int ser; int price; bool aval;
    str1.open("str1.txt");
    if (!str1)
    {
        cout << ("Can't open a file ");
        exit(1);
    }

    while (str1) {
        if (str1 >> street1 >> ser >> price >> aval)
        {
            place pl;
            Bike bik;
            bik.Bikeinfo(ser, price, aval);
            pl.placeinfo(bik, street1);
            bikecommand.push_back(bik);
            placecommand.push_back(pl);
        }
    }
    str1.close();
}
bool command::avalbystr(string street) {//all zaynato= true
    place fff;
    int k = 0;
    for (int i = 0; i < placecommand.size(); i++) {
        if ((street == placecommand[i].getstreet()) and (placecommand[i].avall() == true)) {
            k++;
        }
    }
    if (fff.getcount() == k) {
        return true;
    }
    else {
        return false;
    }
}
bool command::avalsom(string street) {
    for (int i = 0; i < placecommand.size(); i++) {
        if ((street == placecommand[i].getstreet()) and (placecommand[i].avall() == true)) {
            return true;//ye bike
        }
        /*else {
            continue;
        }*/
    }
    return false;
}
void command::readcallfile()
{
    ifstream  str1;
    string name, surname; int stag, calls;
    str1.open("call.txt");
    if (!str1)
    {
        cout << ("Can't open a file ");
        exit(1);
    }

    while (str1) {

        if (str1 >> name >> surname >> stag >> calls)
        {
            Call cl;
            cl.CallWrite(name, surname, stag, calls);
            callcommand.push_back(cl);
           
        }


    }
    str1.close();
}
void command::readtechfile()
{
    ifstream  str1;
    string name, surname; int stag,  rate,cor;
    str1.open("Tech.txt");
    if (!str1)
    {
        cout << ("Can't open a file ");
        exit(1);
    }

    while (str1) {

        if (str1 >> name >> surname >> stag >> rate>>cor)
        {
            Technic* th;
            th= new Technic(name, surname, stag, rate, cor);
           // th.TechWrite(name, surname, stag, rate,cor);
            techcommand.push_back(th);

        }


    }
    str1.close();
}
void command::rewritetechfile()
{
    ofstream str;
    str.open("Tech.txt");
    for (int i = 0; i < techcommand.size(); i++) {

        str << techcommand[i]->getName() << " " << techcommand[i]->getSurname() << " " << techcommand[i]->getstag() << " " << techcommand[i]->getrate()<<" "<<techcommand[i]->getcr() << endl;
    }
    str.close();
}
void command::setratetech(string name, int newrate)
{
    for (int i = 0; i < techcommand.size(); i++) {
        if (name == techcommand[i]->getName()) {
            techcommand[i]->setrate(newrate);
        }
    }
}
void command::repplus(string name)
{

    for (int i = 0; i < techcommand.size(); i++) {
        if (name == techcommand[i]->getName()) {
            techcommand[i]->setcr((techcommand[i]->getcr() + 1));
        }
    }
}
void command::showtech()
{
    for (int i = 0; i < techcommand.size(); i++) {
        techcommand[i]->Write();
       
    }
}
void command::writerep(string report)
{
    ofstream str;
    str.open("RepList.txt",ios_base::app);
    str << report<<endl;
    
    str.close();
}
void command::rewritecallfile()
{
    ofstream str;
    str.open("call.txt");
    for (int i = 0; i < callcommand.size(); i++) {

        str << callcommand[i].getName() << " " << callcommand[i].getSurname() << " " << callcommand[i].getstag() << " " << callcommand[i].getcalls() << endl;
    }
    str.close();

}
void command::showcaller()
{
    for (int i = 0; i < callcommand.size(); i++) {
        callcommand[i].Write();
    }
}

void command::callplus(string name)
{
    for (int i = 0; i < callcommand.size(); i++) {
        if (name == callcommand[i].getName()) {
            callcommand[i].setcall((callcommand[i].getcalls() + 1));
        }
    }
}

void command::showjustaval(string street) {
    for (int i = 0; i < placecommand.size(); i++) {
        if ((street == placecommand[i].getstreet()) and (placecommand[i].avall() == true)) {
            placecommand[i].Writejustbike();
        }
    }

}
void command::showbike() {//всі мопеди
	for (int i = 0; i < bikecommand.size(); i++) {
		bikecommand[i].Write();
	}
}
void command::showavalaible() {//всі доступні мопеди
    for (int i = 0; i < bikecommand.size(); i++) {
        if (bikecommand[i].aval() == true) {
            bikecommand[i].Write();
        }
        else {
            continue;
        }
    }
}
void command::streets() {//вулиці
    for (int i = 0; i < placecommand.size(); i++) {
        difstreet.push_back(placecommand[i].getstreet());
    }
    sort(difstreet.begin(), difstreet.end());
    difstreet.erase(unique(difstreet.begin(), difstreet.end()),difstreet.end());
    for (int k = 0; k < difstreet.size(); k++) {
        cout << difstreet[k]<<endl;
    }
}
int command::countstr() {
    return difstreet.size();
}
void command::showbystreet(string streeet) {//пошук за вулицею
    for (int i = 0; i < placecommand.size(); i++) {
        if (streeet == placecommand[i].getstreet()) {
       
            placecommand[i].Writejustbike();
        }
        else {
            continue;
        }
    }
}
void command::rent(int s) {//
    Customer cs;
    ofstream str;
    str.open("cus.txt", ios_base::app);
    for (int i = 0; i < placecommand.size(); i++) {
        if (s == placecommand[i].sr()) {
            placecommand[i].seta(false);
        }
       
    }
   str<<s<<" "<< custcommand.back().getname()<<" "<< custcommand.back().getsurname()<<" "<< custcommand.back().getnumber()<<endl;
  //  string name, surname; int number;
  //  name = cs.getname(); surname = cs.getsurname(); number = cs.getnumber();
//    str <<s<<" " <<name << " " <<surname  << " " <<number  <<endl;

    str.close();

}

void command::shownotavlbystr(string stret, int sr) {
    int f = 1;
   
        for (int i = 0; i < placecommand.size(); i++) {
            if ((stret == placecommand[i].getstreet()) and (placecommand[i].avall() == false)) {
                if (f > 1) {
                    break;
                }
                placecommand[i].seta(true);
                placecommand[i].setsr(sr);
                f++;
            }
        }
    }


void command::rewrite() {
    ofstream str;
    str.open("str1.txt");
    for (int i = 0; i < placecommand.size(); i++) {
        
        str << placecommand[i].getstreet()<< " " << placecommand[i].sr() <<" " << placecommand[i].pri()<<" " <<placecommand[i].avall()<<endl;
    }
    str.close();
}

void command::returnb(int ar)
{
    vector<int> serials;
    vector<string> cust;
    int serial,phone; string strr,name,surname;
    //1.видалити з файлу кастомера
    //3, користувач передає де залишає мопед
    //4. перевірка чи є місце
    //5. пошук недоступного мопеда і заміна його серійного і буля
    //6. перезапис файлу
    ifstream cs1; ofstream cs;
    cs1.open("cus.txt");
    
    while (cs1) {
        cs1 >> serial>>name>>surname>>phone;
        serials.push_back(serial);
      //  getline(cs1, strr);
       // cust.push_back(strr);
    }

   // cust.erase(cust.begin(), cust.begin());
    cs1.close();
    cs1.open("cus.txt");
    while (cs1) {
        getline(cs1, strr);
        cust.push_back(strr);
    }
    for (int i = 0; i < serials.size(); i++) {
        if (ar == serials[i]) {
            cust.erase(cust.begin() + i);
        }
    }
    cs.open("cus.txt");
    for (int i = 0; i < cust.size(); i++) {
        cs << cust[i] << endl;
    }
    cs.close();
}
void command::readcust() {
    Customer css;
    string name, surname;int phone;
    cout << "Please type info about you:" << endl;
    cout << "Name:"; cin >> name;
    cout << "Surname:"; cin >> surname;
    cout << "Phone:"; cin >> phone;
    css.Customerwrite(name, surname, phone);
    custcommand.push_back(css);
}




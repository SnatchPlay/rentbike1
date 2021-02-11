#include "TechRepository.h"
#include"Factory.h"
#include <fstream>
#include <iostream>
using namespace std;

TechRepository::TechRepository(bool sync) : Repository(sync)
{
    ReadFromStorage();
}

TechRepository::~TechRepository()
{

}


bool TechRepository::Add(Technic& tech) {
    return Repository::Add(tech);
}

void TechRepository::ReadFromStorage()
{
    ifstream  str1;
    string name, surname; int stag, rate, cor;
    str1.open("C:/Users/Ûלרפוכש/source/repos/Project1/Tech.txt");
    if (!str1)
    {
        cout << ("Can't open a file ");
        exit(1);
    }

    while (str1) {

        if (str1 >> name >> surname >> stag >> rate >> cor)
        {
            
            Technic* th;
            Factory* factory = new StndPers;
            th = factory->Tech(name, surname, stag, rate,cor);
           // th = new Technic(name, surname, stag, rate, cor);
           Add(*th);
        }
    }
    str1.close();
}

void TechRepository::WriteToStorage()
{
    ofstream str;
    str.open("C:/Users/Ûלרפוכש/source/repos/Project1/Tech.txt");
    int tmp = entity.size();
    for (int i = 0; i < tmp; i++) {

        str << entity[i].getName() << " " << entity[i].getSurname() << " " << entity[i].getstag() << " " << entity[i].getrate() << " " << entity[i].getcr()<<endl;

    }
    str.close();
}

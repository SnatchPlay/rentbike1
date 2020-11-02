#include "TechRepository.h"
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
    return Repository::Add(&tech);
}

void TechRepository::ReadFromStorage()
{
    ifstream  str1;
    string name, surname; int stag, rate, cor;
    str1.open("C:/Users/Ûלרפוכש/source/repos/ןנמךאע/Tech.txt");
    if (!str1)
    {
        cout << ("Can't open a file ");
        exit(1);
    }

    while (str1) {

        if (str1 >> name >> surname >> stag >> rate >> cor)
        {
            Technic* th;
            th = new Technic(name, surname, stag, rate, cor);
           Add(*th);
        }
    }
    str1.close();
}

void TechRepository::WriteToStorage()
{
    ofstream str;
    str.open("C:/Users/Ûלרפוכש/source/repos/ןנמךאע/Tech.txt");
    int tmp = entity.size();
    for (int i = 0; i < tmp; i++) {

        str << ((Technic*)entity[i])->getName() << " " << ((Technic*)entity[i])->getSurname() << " " << ((Technic*)entity[i])->getstag() << " " << ((Technic*)entity[i])->getrate() << " " << ((Technic*)entity[i])->getcr() << endl;
    }
    str.close();
}

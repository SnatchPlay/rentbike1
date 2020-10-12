#include "PlaceRep.h"
#include <fstream>
#include <iostream>
using namespace std;

PlaceRep::PlaceRep(bool sync) : Repository(sync)
{
    ReadFromStorage();
}

PlaceRep::~PlaceRep()
{

}


bool PlaceRep::Add(place& pl) {
    return Repository::Add(&pl);
}

void PlaceRep::ReadFromStorage()
{
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

            place* pla;
            pla = new place(street1, 3, ser, price, aval);


            Add(*pla);
        }
    }
    str1.close();
}

void PlaceRep::WriteToStorage()
{
    ofstream str;
    str.open("str1.txt");
    int tmp = entity.size();
    for (int i = 0; i < tmp; i++) {

        str << ((place*)entity[i])->getstreet() << " " << ((place*)entity[i])->sr() << " " << ((place*)entity[i])->pri() << " " << ((place*)entity[i])->avall() << endl;
    }
    str.close();
}


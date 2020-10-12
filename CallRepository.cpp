#include "CallRepository.h"
#include <fstream>
#include <iostream>
using namespace std;

CallRepository::CallRepository(bool sync) : Repository(sync)
{
    ReadFromStorage();
}

CallRepository::~CallRepository()
{

}


bool CallRepository::Add(Call& call) {
    return Repository::Add(&call);
}

void CallRepository::ReadFromStorage()
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
            Call* call1;
            call1 = new Call(name, surname, stag, calls);
            
            Add(*call1);

        }


    }
    str1.close();
}

void CallRepository::WriteToStorage()
{
    ofstream str;
    str.open("call.txt");
    int tmp = entity.size();
    for (int i = 0; i < tmp; i++) {

        str << ((Call*)entity[i])->getName() << " " << ((Call*)entity[i])->getSurname() << " " << ((Call*)entity[i])->getstag() << " " << ((Call*)entity[i])->getcalls() << endl;
    }
    str.close();
}

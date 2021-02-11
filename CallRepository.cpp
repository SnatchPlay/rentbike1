#include "CallRepository.h"
#include"Factory.h"
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

CallRepository::CallRepository(bool sync) : Repository(sync)
{
    ReadFromStorage();
}

CallRepository::~CallRepository()
{

}


bool CallRepository::Add(Call& call) {
    return Repository::Add(call);
}

void CallRepository::ReadFromStorage()
{
    ifstream  str1;
    string name, surname; int stag, calls;
    str1.open("C:/Users/Ûלרפוכש/source/repos/Project1/call.txt");
    if (!str1)
    {
        cout << ("Can't open a file ");
        exit(1);
    }
  
    while (str1) {

        if (str1 >> name >> surname >> stag >> calls)
        {
            Call* call1;
            
            Factory* factory = new StndPers;
           
            call1 = factory->Caller(name, surname, stag, calls);
          
            
            Add(*call1);

        }


    }
    str1.close();
}

void CallRepository::WriteToStorage()
{
    ofstream str;
    str.open("C:/Users/Ûלרפוכש/source/repos/Project1/call.txt");
    int tmp = entity.size();
    for (int i = 0; i < tmp; i++) {

        str << (entity[i]).getName() << " " << (entity[i]).getSurname() << " " << (entity[i]).getstag() << " " << (entity[i]).getcalls() << endl;
    }
    str.close();
}

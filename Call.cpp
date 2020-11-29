#include "Call.h"
#include<iostream>
#include <string>
using namespace std;
void Call::Write()
{
	cout << "Call" << " " << Name << " " << SurName << " " << stag << endl;
}

Call::Call(string Name, string SurName, int stag, int calls)
{
	PersonWrite(Name, SurName);
	this->stag = stag;
	this->calls = calls;
}

string Call::getName()
{
	return Name;
}

string Call::getSurname()
{
	return SurName;
}

int Call::getstag()
{
	return stag;
}

int Call::getcalls()
{
	return calls;
}

void Call::setcall(int calls)
{
	this->calls = calls;
}

ifstream& operator>>(ifstream& fin, Call& call)
{
	string name, surname;
	int stag, calls;
	fin >> name >> surname >> stag >> calls;
	call.Name = name;
	call.SurName = surname;
	call.stag = stag;
	call.calls = calls;
	return fin;

}

ofstream& operator<<(ofstream& fout, Call& call)
{
	fout << call.getName() << " " << call.getSurname() << " " << call.getstag() << " " << call.getcalls();
	return fout;
}

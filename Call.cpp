#include "Call.h"
#include<iostream>
using namespace std;
void Call::Write()
{
	cout<<"Call" << " " << Name << " " << SurName << " " << stag << endl;
}

 Call::Call(string Name, string SurName, int stag,int calls)
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

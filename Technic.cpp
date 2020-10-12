#include "Technic.h"
#include<iostream>


void Technic::Write()
{
	cout << "Tech" << " " << Name << " " << SurName << " " << stag <<" "<<rate<<" "<<cr <<endl;
}

Technic::Technic(string Name, string SurName, int stag,int rate,int cr)
{
	PersonWrite(Name, SurName);
	this->stag = stag;
	this->rate = rate;
	this->cr = cr;
}

string Technic::getName()
{
	return Name;
}

string Technic::getSurname()
{
	return SurName;
}

int Technic::getstag()
{
	return stag;
}

int Technic::getrate()
{
	return rate;
}

void Technic::setrate(int rate)
{
	this->rate = rate;
}

void Technic::setcr(int cr)
{
	this->cr = cr;
}

int Technic::getcr()
{
	return cr;
}

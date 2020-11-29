#include "Technic.h"
#include<iostream>


void Technic::Write()
{
	cout << "Tech" << " " << Name << " " << SurName << " " << stag << " " << rate << " " << cr << endl;
}

Technic::Technic(string Name, string SurName, int stag, int rate, int cr)
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

ifstream& operator>>(ifstream& fin, Technic& tech)
{
	string name, surname; int stag, rate, cor;
	fin >> name >> surname >> stag >> rate >> cor;
	tech.Name = name;
	tech.SurName = surname;
	tech.stag = stag;
	tech.rate = rate;
	tech.cr = cor;
	return fin;
}

ofstream& operator<<(ofstream& fout, Technic& tech)
{
	fout << tech.getName() << " " << tech.getSurname() << " " << tech.getstag() << " " << tech.getrate() << " " << tech.getcr();
	return fout;
}

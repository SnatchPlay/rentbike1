#ifndef TECHNIC_H
#define TECHNIC_H
#include "Person.h"
#include<string>
#include <fstream>
using namespace std;
class Technic :public Person {
private:
	int stag;
	int rate;
	int cr;
public:
	void Write();
	Technic(string = "", string = "", int = 0, int = 0, int = 0);
	string getName();
	string getSurname();
	int getstag();
	int getrate();
	void setrate(int);
	void setcr(int);
	int getcr();

	string GetStorageName() {
		return "C:/Users/Ûלרפוכש/source/repos/ןנמךאע/Tech.txt";
	}
	string GetStorageOutName() {
		return "C:/Users/Ûלרפוכש/source/repos/ןנמךאע/Tech.txt";
	}
	friend ifstream& operator>>(ifstream& fin, Technic& tech);
	friend ofstream& operator<<(ofstream& fout, Technic& tech);
};
#endif // !TECHNIC_H
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
#include"Person.h"
using namespace std;

class Customer:public Person {
private:
	//string Name;
	//string SurName;
	int number;
public:
	void Customerwrite(string = "", string = "", int = 0000000);
	void Write();
	string getname();
	string getsurname();
	int getnumber();
};
#endif // !CUSTOMER_H


#include "customer.h"
#include <iostream>
#include<string>
using namespace std;
Customer::Customer(string Name, string SurName, int number) {
	PersonWrite(Name, SurName);
	this->number = number;
}
void Customer::Write() {
	cout << "Customer info:" << endl << Name << " " << SurName << endl << "Phone:" << number << endl;
}
string Customer::getname() {
	return Name;
}
string Customer::getsurname() {
	return SurName;
}
int Customer::getnumber() {
	return number;
}
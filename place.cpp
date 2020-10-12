#include"place.h"
#include<iostream>
using namespace std;
void place::placeinfo(Bike& bike,string street,int count) {
	this->bike = bike;
	this->street = street;
	this->count = count;
	
}
string place::getstreet() {
	return street;
}
void place::Writejustbike() {
	bike.Write();
}
void place::Write() {
	cout << "Street:" << street << endl << "Count of avalaible:" << count << endl;
	bike.Write();
}
void place::showaval() {
	if (bike.aval() == true) {
		return bike.Write();
	}
}
bool place::avall() {
	 return bike.aval();
}
int place::pri() {
	return bike.pr();
}
int place::sr() {
	return bike.sern();
}
void place::seta(bool a) {
	bike.setaval(a);
}
void place::setsr(int a) {
	bike.setser(a);
}
int place::getcount() {
	return count;
}
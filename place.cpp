#include"place.h"
#include<iostream>
using namespace std;

place::place(string street,int count, int serialnumb, int price, bool available )
{
	this->street = street;
	this->count = count;
	this->serialnumb = serialnumb;
	this->price = price;
	this->available = available;

}
string place::getstreet() {
	return street;
}
void place::Writejustbike() {
	cout << "Bicycle info:" << serialnumb << " " << price << "$ " << available << endl;
}
void place::Write() {
	cout << "Street:" << street << endl << "Count of avalaible:" << count << endl;
	cout << "Bicycle info:" << serialnumb << " " << price << "$ " << available << endl;
}
void place::showaval() {
	if (available == true) {
		return Writejustbike();
	}
}
bool place::avall() {
	 return available;
}
int place::pri() {
	return price;
}
int place::sr() {
	return serialnumb;
}
void place::seta(bool a) {
	this->available = a;
}
void place::setsr(int a) {
	this->serialnumb=a;
}
int place::getcount() {
	return count;
}
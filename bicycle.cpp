#include "bicycle.h"
#include <iostream>
using namespace std;

void Bike::Bikeinfo(int serialnumb, int price, bool available) {
	this->serialnumb=serialnumb;
	this->price = price;
	this->available = available;

}
void Bike::Write() {
	cout << "Bicycle info:" << serialnumb << " " << price << "$ " << available << endl;
}
bool Bike::aval() {
	return available;
}
int Bike::sern() {
	return serialnumb;
}
int Bike::pr() {
	return price;
}
void Bike::setaval(bool a) {
	this->available = a;
}
void Bike::setser(int ser) {
	this->serialnumb = ser;
}

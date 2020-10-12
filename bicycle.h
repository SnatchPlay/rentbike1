#ifndef BICYCLE_H
#define BICYCLE_H
#include <string>
using namespace std;

class Bike {
private:
	int serialnumb;
	int price;
	bool available;
public:
	void Bikeinfo(int = 0, int = 50, bool = 1);
	void Write();
	bool aval();
	int sern();
	int pr();
	void setaval(bool);
	void setser(int);
};

#endif // !BICYCLE_H


#ifndef PLACE_H
#define PLACE_H
#include <string>
#include"bicycle.h"
class place {
private:
	string street;
	int count;
	Bike bike;
public:
	void placeinfo(Bike& ,string = "", int = 3);
	string getstreet();
	int getcount();
	void Write();
	void showaval();
	void Writejustbike();
	int sr();
	void seta(bool a);
	int pri();
	bool avall();
	
	void setsr(int a);
};
#endif // !PLACE_H


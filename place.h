#ifndef PLACE_H
#define PLACE_H
#include <string>
#include"Entity.h"
using namespace std;
class place {
private:
	string street;
	int count;
	int serialnumb;
	int price;
	bool available;
public:
	place(string, int = 3, int = 0, int = 50, bool = 1);
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


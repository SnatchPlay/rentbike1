#ifndef PERSON_H
#define PERSON_H
#include "Entity.h"
#include <string>
using namespace std;
class Person:public Entity {
protected:
	string Name;
	string SurName;
public:
	//Person(string = "", string = "");
	virtual void Write();
	void PersonWrite(string = "", string = "");
};
#endif // !PERSON_H


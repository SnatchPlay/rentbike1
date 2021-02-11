#ifndef PERSON_H
#define PERSON_H
#include "Entity.h"
#include <string>
using namespace std;
class Person {
protected:
	string Name;
	string SurName;
public:
	//Person(string = "", string = "");
	virtual void Write()=0;
	//void PersonWrite(string = "", string = "");
};
#endif // !PERSON_H


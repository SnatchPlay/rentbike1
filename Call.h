#ifndef CALL_H
#define CALL_H
#include "Person.h"
#include<string>
class Call :public Person {
private:
	int stag;
	int calls;
public:
	void Write();
	void CallWrite(string = "", string = "", int = 0,int =0);
	string getName();
	string getSurname();
	int getstag();
	int getcalls();
	void setcall(int);

};
#endif // !CALL_H

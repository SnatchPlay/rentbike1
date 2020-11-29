#ifndef CALL_H
#define CALL_H
#include "Person.h"
#include<string>
#include <fstream>
class Call :public Person {
private:
	int stag;
	int calls;
public:
	void Write();
	Call(string = "", string = "", int = 0, int = 0);
	string getName();
	string getSurname();
	int getstag();
	int getcalls();
	void setcall(int);

	string GetStorageName() {
		return "C:/Users/Ûלרפוכש/source/repos/ןנמךאע/call.txt";
	}
	string GetStorageOutName() {
		return "C:/Users/Ûלרפוכש/source/repos/ןנמךאע/call.txt";
	}
	friend ifstream& operator>>(ifstream& fin, Call& call);
	friend ofstream& operator<<(ofstream& fout, Call& call);


};
#endif // !CALL_H

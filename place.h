#ifndef PLACE_H
#define PLACE_H
#include <string>
#include <fstream>
using namespace std;
class place {
private:
	string street;
	int count;
	int serialnumb;
	int price;

public:
	bool available;

	place(string = "", int = 3, int = 0, int = 50, bool = 1);
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

	string GetStorageName() {
		return "C:/Users/Ûלרפוכש/source/repos/ןנמךאע/str1.txt";
	}
	string GetStorageOutName() {
		return "C:/Users/Ûלרפוכש/source/repos/ןנמךאע/str1.txt";
	}

	friend ifstream& operator>>(ifstream& fin, place& pl);
	friend ofstream& operator<<(ofstream& fout, place& pl);
	place& operator= (const place& pla);

};
#endif // !PLACE_H


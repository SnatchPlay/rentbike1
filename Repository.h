#ifndef REPOSITORY_H
#define REPOSITORY_H
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

template<class T>
class Repository
{
protected:
	bool sync;
public:
	vector <T> entity;
	bool Add(T);
	string GetStorageName() {
		T t;
		return t.GetStorageName();
	}
	string GetStorageOutName() {
		T t;
		return t.GetStorageOutName();
	}
	void ReadFromStorage();
	void WriteToStorage();

	vector <T> GetEntity() {
		return entity;
	}

	Repository(bool sync = false);
	~Repository();
};
template<class T>
Repository<T>::Repository(bool sync)
{
	this->sync = sync;

	ReadFromStorage();
}
template<class T>
Repository<T>::Repository::~Repository()
{
	WriteToStorage();
}
template<class T>
bool Repository<T>::Add(T ent) {
	entity.push_back(ent);
	if (sync) {
		WriteToStorage();
	}
	return true;
}
template<class T>
void Repository<T>::ReadFromStorage() {
	ifstream fin(GetStorageName());
	if (!fin)
	{
		cout << ("Can't open a file ");
		exit(1);
	}
	T tx;
	while (fin >> tx) {
		Add(tx);
	}
	fin.close();
}
template<class T>
void Repository<T>::WriteToStorage()
{
	ofstream fout(GetStorageOutName());
	int tmp = entity.size();
	for (int i = 0; i < tmp; i++)
	{
		fout << entity[i];
		fout << endl;
	}
	fout.close();
}
#endif
#ifndef TECHREPOSITORY_H
#define TECHREPOSITORY_H
#include"Repository.h"
#include "Technic.h"
class TechRepository :public Repository {
public:

	TechRepository(bool sync = false);
	~TechRepository();
	bool Add(Technic&);
	void ReadFromStorage();
	void WriteToStorage();
};

#endif TECHREPOSITORY_H

#ifndef REPOSITORY_H
#define REPOSITORY_H
#include <fstream>

#include "Entity.h"
using namespace std;
#include <vector>
class Repository
{
protected:


	vector <Entity*> entity;

	bool sync;

	bool Add(Entity*);

public:

	virtual void ReadFromStorage() {}
	virtual void WriteToStorage() {}

	vector <Entity*> GetEntity() {
		return entity;
	}

	
	Repository(bool sync = false);
	~Repository();
};
#endif

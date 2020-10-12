#ifndef REPOSITORY_H
#define REPOSITORY_H

#include "Entity.h"
#include<vector>
using namespace std;
class Repository
{
protected:
	//Entity** data;
	vector<Entity> data;
	
	int maxSize;
	int current;
	bool sync;

	bool Add();
	virtual void ReadFromStorage() {}
	virtual void WriteToStorage() {}

public:
	Repository(bool sync = false);
	~Repository();
};
#endif 
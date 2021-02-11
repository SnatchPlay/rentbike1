#ifndef CALLREPOSITORY_H
#define CALLREPOSITORY_H
#include"Repository.h"
#include "Call.h"
class CallRepository :public Repository<Call> {
public:

	CallRepository(bool sync = false);
	~CallRepository();
	bool Add(Call&);

	void ReadFromStorage();
	void WriteToStorage();
};

#endif CALLREPOSITORY_H

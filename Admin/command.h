#ifndef COMMAND_H
#define COMMAND_H
#include"place.h"
#include<vector>
#include"customer.h"
#include"Call.h"
#include"Technic.h"
#include"Person.h"
#include"Repository.h"
using namespace std;
class command {

public:

	Repository<Technic> techRepository = Repository<Technic>(true);
	Repository<Call> callRepository = Repository<Call>(true);
	void AddTech();
	void AddCall();
	void rewritecallfile();
	void rewritetechfile();

	void clearfile();
};
#endif // !COMMAND_H




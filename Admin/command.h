#ifndef COMMAND_H
#define COMMAND_H
#include"place.h"
#include<vector>
#include"customer.h"
#include"Call.h"
#include"Technic.h"
#include"Person.h"
#include "CallRepository.h"
#include "TechRepository.h"
#include"PlaceRep.h"


using namespace std;
class command {
	
public:

	TechRepository techRepository = TechRepository(true);
	CallRepository callRepository = CallRepository(true);
	void AddTech();
	void AddCall();
	void rewritecallfile();
	void rewritetechfile();

	void clearfile();
};
#endif // !COMMAND_H




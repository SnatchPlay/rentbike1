#include"Person.h"
#include"Call.h"
#include"Technic.h"
#include "Repository.h"
using namespace std;
class Factory {
public:
	virtual Person* Tech() = 0;
	virtual Person* Caller() = 0;
};
class StndPers :Factory {
public:
	Person* Tech() {
		return new Technic;
	}
	Person* Caller() {
		return new Call;
	}
};
class OmgPers :Factory {
public:
	Person* Tech() {
		return new Technic;
	}
	Person* Caller() {
		return new Call;
	}
};
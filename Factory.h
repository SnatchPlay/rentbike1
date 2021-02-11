#include "CallRepository.h"
#include "PlaceRep.h"
#include "TechRepository.h"
#include"Person.h"

using namespace std;
class Factory {
public:
	virtual Technic* Tech(string name, string surname, int stag, int reports, int rating) = 0;
	virtual Call* Caller(string name, string surname, int stag, int calls) = 0;
};
class StndPers :public Factory {
public:
	Technic* Tech(string name, string surname, int stag, int reports, int rating) {
		return new Technic(name, surname, stag, rating, reports);
	}
	Call* Caller(string name, string surname, int stag, int calls) {
		return new Call(name, surname, stag, calls);
	}
};
class OmgPers :public Factory {
public:
	Technic* Tech(string name,string surname,int stag,int reports,int rating) {
		return new Technic(name,surname,stag,rating,reports);
	}
	Call* Caller(string name, string surname, int stag, int calls) {
		return new Call(name,surname,stag,calls);
	}
};
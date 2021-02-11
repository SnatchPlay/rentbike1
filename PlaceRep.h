#ifndef PLACEREP_H
#define PLACEREP_H
#include "Repository.h"
#include"place.h"
using namespace std;
class PlaceRep :public Repository<place> {
public:
	PlaceRep(bool sync = false);
	~PlaceRep();
	bool Add(place&);
	void ReadFromStorage();
	void WriteToStorage();
};
#endif PLACEREP_H
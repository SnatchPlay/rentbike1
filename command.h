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
	vector<string> difstreet;
	vector<Customer> custcommand;
public:
	
	TechRepository techRepository = TechRepository(true);
	CallRepository callRepository = CallRepository(true);
	PlaceRep placerep = PlaceRep(true);

	void showjustaval(string);
	void readcust();
	void streets();
	void showbystreet(string);
	void rent(int );
	void rewrite();
	void returnb(int);
	void shownotavlbystr(string,int);
	bool avalbystr(string);
	bool avalsom(string);
	//TECH-COMMAND/////////////
	void rewritetechfile();
	void setratetech(string,int);
	void repplus(string);
	void showtech();


	//////////////////////////////////
	//Call-centre command
	void writerep(string);
	void rewritecallfile();
	void showcaller();
	void callplus(string);
};
#endif // !COMMAND_H


#ifndef COMMAND_H
#define COMMAND_H
#include "bicycle.h"
#include"place.h"
#include<vector>
#include"customer.h"
#include"Call.h"
#include"Technic.h"
#include"Person.h"
using namespace std;
class command {
	vector<Bike> bikecommand;
	vector<place> placecommand;
	vector<string> difstreet;
	vector<Customer> custcommand;
	vector<Call> callcommand;
	vector<Technic*> techcommand;
public:
	void showjustaval(string);
	void readcust();
	void showbike();
	void readbikefile();
	void showavalaible();
	void streets();
	void showbystreet(string );
	void rent(int );
	void rewrite();
	void returnb(int);
	void shownotavlbystr(string,int);
	bool avalbystr(string);
	int countstr();
	bool avalsom(string);
	//TECH-COMMAND/////////////
	void readtechfile();
	void rewritetechfile();
	void setratetech(string,int);
	void repplus(string);
	void showtech();


	//////////////////////////////////
	//Call-centre command
	void readcallfile();
	void writerep(string);
	void rewritecallfile();
	void showcaller();
	void callplus(string);
};
#endif // !COMMAND_H


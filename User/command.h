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
	vector<string> difstreet;
	vector<Customer> custcommand;
public:

	Repository<Technic> techRepository = Repository<Technic>(true);
	Repository<Call> callRepository = Repository<Call>(true);
	Repository<place> placerep = Repository<place>(true);

	void showjustaval(string);
	void readcust();
	void streets();
	void showbystreet(string);
	void rent(int);
	void rewrite();
	void returnb(int);
	void shownotavlbystr(string, int);
	bool avalbystr(string);
	bool avalsom(string);
	//TECH-COMMAND/////////////
	void rewritetechfile();
	void setratetech(string, int);
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



//прокат велосипедів

#include"command.h"
#include"customer.h"
#include"place.h"

#include <algorithm>
#include <iostream>
#include <fstream>
#include<vector>
#include <clocale>
using namespace std;
void showmenu() {
	command com; int sr, phone; string name, surname,rname;
	Customer customer;
	string street;
	while (true) {
		cout << "         LET'S GO!         " << endl;
		cout << "Choose option:" << endl;
		cout << "1.Rent a bike" << endl;
		cout << "2.Return the bicycle" << endl;
		cout << "3.Write a report" << endl;
		cout << "4.Call a technic" << endl;
		cout << "5.Exit"<<endl;
		char user;
		try {
			cin >> user;
			if (!isdigit(user)) {
				throw "You are fool?";
			}
		}
		catch (const char* a) {
			cout << "Error:" << a << endl;
		}
		if (user == '1') {
			com.readcust();
			
			cout << "Our points:"<<endl;
			com.streets();
			cout << "Choose a street:"; cin >> street;
				if (com.avalsom(street) == false) {
					cout << "Choose another street.";
				}
				else {
					com.showjustaval(street);
					cout << "Choose the bike." << endl;
					cout << "Type serial number:"; cin >> sr;
					com.rent(sr);
					com.rewrite();
					
				}
			}
		
		else if (user == '2') {
			cout << "Where do you want to leave your bike?" << endl;
			cout << "Our points:";
			com.streets();
			cout << "Choose a street:"; cin >> street;
			
				if (com.avalbystr(street) == true) {
					cout << "Choose another street.";
				}
				else {
					cout << "Please type serial number:"; cin >> sr;
					com.shownotavlbystr(street, sr);
					com.returnb(sr);
					com.rewrite();
					
				}
			}
		else if (user == '3') {
			string call,report;
			
			com.showcaller();
			cout << "Choose a caller and type a name." << endl;
			cin >> call;
			cout << "Write a report:"; cin >> report; cout << endl;
			com.writerep(report);
			com.callplus(call);
			com.rewritecallfile();
			cout << "Wait for answer." << endl;

		}
		else if (user == '4') {
			string tech; int user1,nr;
			cout << "Choose a tech and type a name." << endl;
			com.showtech();
			cin >> tech;
			cout << "Wait for a tech." << endl;
			cout << "Available option:" << endl << "1.Set a rating" << endl << "2.Make a report"<<endl<<"3.Main menu" << endl;
			cin >> user;
			while (true) {
				if (user == '1') {
					cout << "Type a new rating:"; cin >> nr;
					com.setratetech(tech, nr);
					com.rewritetechfile();
					break;
				}
				else if (user == '2') {
					cout << "Thank you for a report" << endl;
					com.repplus(tech);
					com.rewritetechfile();
					break;
				}
				else {
					cout << "Wow." << endl;
					break;
				}
			}
		}
		else {
			break;
		}

	}
}


int main() {
	showmenu();
	
	

}
	

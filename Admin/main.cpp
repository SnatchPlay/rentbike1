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
	command com;
	while (true) {
		cout << "         Welcome to admin menu.         " << endl;
		cout << "Choose option:" << endl;
		cout << "1.Add tech" << endl;
		cout << "2.Add caller" << endl;
		cout << "3.Clear report list" << endl;
		cout << "4.Exit" << endl;
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
			com.AddTech();
		}

		else if (user == '2') {
			com.AddCall();
		}
		else if (user == '3') {
			
			com.clearfile();
			cout << "File is clear" << endl;
		}
		
		else {
			break;
		}

	}
}


int main() {
	showmenu();



}


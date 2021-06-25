#ifndef _ACCOUNT_H
#define _ACCOUNT_H

#include <string>

using namespace std;

class Account {
public:
	Account(string, string, double);
	void deposit(double);
	void withdraw(double);
	string to_string();

private:
	string id;
	string name;
	double balance;
};

#endif

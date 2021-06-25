#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

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

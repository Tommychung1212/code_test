#include <iostream>
#include <string>
#include "account.h"

using namespace std;

Account::Account(string id, string name, double balance)
{
	this->id = id;
	this->name = name;
	this->balance = balance;
}

string Account::to_string()
{
	return string("Account(")+
		this->id + ", " +
		this->name + ", "+
		std::to_string(this->balance) + ")";
}

void Account::deposit(double amount)
{
	if (amount <= 0) {
		cout << "Positive amount is needed to deposit!" << endl;
		return;
	} else
		this->balance += amount;
}

void Account::withdraw(double amount)
{
	if (amount <= 0){
		cout << "Positive amount is needed to withdraw!" << endl;
		return;
	} else if (amount > this->balance){
		cout << "Insufficient balance!" <<endl;
		return;
	} else
		this->balance -= amount;
}


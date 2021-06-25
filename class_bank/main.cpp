#include <iostream>
#include <string>
#include "account.h"

using namespace std;

int main()
{
	Account acct = {
		"123-456-789",
		"Tommy Chung",
		1000,
	};
	cout << acct.to_string() << endl;

	acct.deposit(500);
	cout << acct.to_string() << endl;

	acct.withdraw(700);
	cout << acct.to_string() << endl;

	return 0;
}

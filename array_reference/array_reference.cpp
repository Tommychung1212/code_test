#include <iostream>
using namespace std;

void print_array(char (&)[12], char (&)[15]);

int main()
{
	char str1[] = "Hello World";
	char str2[] = "Welcome to C++";
	print_array(str1, str2);

	return 0;
}

void print_array(char (&strref1)[12], char (&strref2)[15])
{
	for (int i = 0; i < 12; i++)
		cout << strref1[i];
	cout << endl;
	
	for (int i = 0; i < 15; i++)
		cout << strref2[i];
	cout << endl;
}

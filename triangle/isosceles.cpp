#include <iostream>

#define LENGTH 20

using namespace std;

int main()
{
	int a, b;

	for (b = 1; b < LENGTH; b++) {
		for (a = 1; a < LENGTH; a++) {
			if (2 * a <= b)
				continue;
			if (a == b)
				continue;
			cout << "(" << a << ","
			     << a << "," << b
			     << ")" << endl;
		}
	}

	return 0;
}

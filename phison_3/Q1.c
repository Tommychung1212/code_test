#include "stdio.h"

void function(int *arr, int size)
{
	for (int i = 0; i <= 500; i++) {
		if (i == *arr)
			arr++;
		else
			printf("%d\n", i);
	}
}

int main()
{
	int a[20] = {
		2, 4, 6, 9, 11, 15, 17, 25, 29, 34, 38,
		45, 47, 49, 53, 58, 100, 256, 324, 446
	};

	function(a, 20);

	return 0;
}

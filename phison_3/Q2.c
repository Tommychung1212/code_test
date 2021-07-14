#include "stdio.h"

void function(int *arr, int size, int b)
{
	while (*arr < 100 * b)
		arr++;
	for (int i = 100 * b; i <= 100 * b + 99; i++) {
		if (i == *arr)
			arr++;
		else
			printf("%d\n", i);
	}
}

int main()
{
	int a[20] = {
		5, 16, 29, 38, 44, 59, 67, 75, 100, 166, 199,
		256, 289, 299, 328, 369, 446, 498, 500, 565
	};

	printf("When b = 0:\n");
	function(a, 20, 0);

	printf("When b = 1:\n");
        function(a, 20, 1);

	printf("When b = 2:\n");
        function(a, 20, 2);

	printf("When b = 3:\n");
        function(a, 20, 3);

	printf("When b = 4:\n");
        function(a, 20, 4);

	return 0;
}

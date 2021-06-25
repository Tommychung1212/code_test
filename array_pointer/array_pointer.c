#include <stdio.h>

void test(int *);

int main()
{
	int a[5] = {0, 1, 2, 3, 4};

	test(a);

	return 0;
}

void test(int *ptr)
{
	for (int i = 0; i < 5; i++)
		printf("%d\n", *(ptr+i));
	
}

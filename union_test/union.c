#include <stdio.h>

typedef union ABC {
	char a;
	int b;
}ABC;

int main()
{
	ABC abc;
	abc.a = 1;
	printf("value of abc.a = %d\n", abc.a);
	abc.b = 56;
	printf("value of abc.b = %d\n", abc.b);
	printf("value of abc.a = %d\n", abc.a);

	return 0;
}

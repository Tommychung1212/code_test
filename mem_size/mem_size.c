#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("type\t\tsize (bytes)\n");
	printf("char\t\t%ld\n", sizeof(char));
	printf("short\t\t%ld\n", sizeof(short));
	printf("int\t\t%ld\n", sizeof(int));
	printf("long\t\t%ld\n", sizeof(long));
	printf("float\t\t%ld\n", sizeof(float));
	printf("double\t\t%ld\n", sizeof(double));

	return 0;
}

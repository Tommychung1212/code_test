#include <stdio.h>

void swap(char **x, char **y)
{
	char *temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	char *str1 = "Hello";
	char *str2 = "World";

	swap(&str1, &str2);

	printf("After swap: str1 = %s, str2 = %s\n", str1, str2);

	return 0;
}

#include <stdio.h>

int plus(int, int);
int minus(int, int);
int multiply(int, int);
int divide(int, int);

int main()
{
	int a = 246;
	int b = 123;
	int result = 0;
	int (*calculate) (int, int );

	calculate = plus;
	result = calculate(a, b);
	printf("a + b = %d\n", result);

	calculate = minus;
        result = calculate(a, b);
        printf("a - b = %d\n", result);

	calculate = multiply;
        result = calculate(a, b);
        printf("a * b = %d\n", result);

	calculate = divide;
        result = calculate(a, b);
        printf("a / b = %d\n", result);

	return 0;
}

int plus(int a, int b)
{
	return a + b;
}

int minus(int a, int b)
{
	return a - b;
}

int multiply(int a, int b)
{
	return a * b;
}

int divide(int a, int b)
{
	return a / b;
}

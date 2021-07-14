#include <stdio.h>

#define	NUM	100

int main()
{
	for (int i = 1; i <= NUM; i++) {
		for (int j = 1; j <= NUM - i; j++) {
			printf(" ");
		}

		for (int k = 1; k <= 2 * i -1; k++) {
			printf("*");
		}

		printf("\n");
	}

	for (int i = 1; i <= NUM - 1; i++) {
		for (int j = 1; j <= i; j++) {
			printf(" ");
		}

		for (int k = 1; k <= 2 * (NUM - i) - 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

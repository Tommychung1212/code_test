#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char name[10][10] = {
		"Mary", "John", "Michael", "Helen", "Stephen",
		"Kelly", "Deep", "Bush", "Cherry", "Andy"
	};
	char *name1[10], *temp;
	int i, j;

	puts("Array before sorting:");

	for (i = 0; i < 10; i++){
		printf("%s ", name[i]);
		name1[i] = name[i];
	}

	for (i = 0; i < 9; i++){
		for (j = i+1; j < 10; j++){
			if (strcmp(name1[i], name1[j])){

				temp = name1[j];
				name1[j] = name1[i];
				name1[i] = temp;
			}
		}
	}
	
	puts("\nArray after sorting:");
	for (i = 0; i < 10; i++)
		printf("%s ", name1[i]);
	printf("\n");

	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NUM_CHAR 256*sizeof(char)

int main()
{
	char *str = malloc(MAX_NUM_CHAR);
	const char *stand_str = "Hello World!";
	
	printf("Enter a string:\n");
	fgets(str, MAX_NUM_CHAR, stdin);

	if (strlen(str) > 0 && str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';
	
	printf("Entered string:\n%s\n", str);
	printf("Standard string:\n%s\n", stand_str);
	//printf("str: %p\n", str);	
	printf("Compare result:\n%s\n", (!strcmp(str, stand_str)) ? "true" : "false");

	free(str);

	return 0;
}

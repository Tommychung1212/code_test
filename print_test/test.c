#include <stdio.h>

int main()
{
	printf("%s\n", __TIME__);
	printf("%s\n", __DATE__);
	printf("%s\n", __func__);

	return 0;
}

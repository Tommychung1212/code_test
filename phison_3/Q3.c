#include "stdio.h"

struct ListStruct {
	unsigned int DataH;
	unsigned int DataL;
	unsigned int NextPtr;
};

struct ListStruct ListArray[1000];

#define NULL	0xFFFF

unsigned int ListHead = 0;

void function(unsigned int Data_A, unsigned int Data_B)
{
	int Entry = ListHead;

	while (Entry != NULL) {
		if (ListArray[Entry].DataH == Data_A && ListArray[Entry].DataL == Data_B)
			printf("found it at Entry : %d\n", Entry);

		Entry = ListArray[Entry].NextPtr;
	}

	printf("no fount");
}

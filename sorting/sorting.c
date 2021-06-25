#include <stdio.h>

void swap(int *, int *);
void sort(int , int *);

int main()
{
	int n = 0;
	int *array;

	printf("Enter the size of sorting array:\n");
	scanf("%d", &n);
	printf("Enter the members of sorting array:\n");

	for (int i = 0; i < n; i++)
		scanf("%d", array + i);

	/*
	printf("Entered array for sorting");
	for (int i = 0; i < n; i++)
                printf("%d\n", *(array + i));

	*/

	sort(n, array);

	printf("Sorting the array in ascending order:\n");
	for (int i = 0; i < n; i++)
		printf("%d ", *(array + i));
	printf("\n");

	return 0;
}

void swap(int *a, int *b)
{	
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int n, int *array)
{
	 for (int i = 0; i < n - 1; i++){
                for (int j = 0; j < n - i - 1; j++){
                        if (*(array + j) > *(array + j + 1))
                                swap(array + j, array + j + 1);

                }
        }
}

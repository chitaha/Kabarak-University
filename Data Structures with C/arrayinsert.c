#include <stdio.h>

#define MAX 10

int main()
{
	int array[MAX] = {234, 456, 892, 837, 445, 233, 788};
	int i;
	int n = 7; // number of elements

	printf("\n\nBefore insertion: \n");
	for (i = 0; i < n; i++)
		printf("%d - %d\n", i, array[i]);

	if (n == MAX)
		printf("No more space\n");
	else
	{
		for (i = n; i >= 0; i--)
			array[i + 1] = array[i];
	}

	array[0] = 111;
	n++;

	printf("\n\nAfter insertion: \n");
	for (i = 0; i < n; i++)
		printf("%d - %d\n", i, array[i]);


	return 0;
}
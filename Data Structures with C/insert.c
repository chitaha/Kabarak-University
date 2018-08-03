/**********************************************************
 * Program to insert an element at the beginning of an array
 * 
 * Name       ----> Sarah Chebet Chitaha
 * Reg No     ----> CS/M/0352/05/17
 * Unit title ----> Data Structures with C
 * Unit code  ----> Comp 214
 * 
 **********************************************************/

#include <stdio.h>

#define MAX 10

int main()
{
	int array[MAX];
	int i;
	int n = 7; // number of elements

	printf("Enter 7 elements: \n");
	for (i = 0; i < n; i++)
		scanf("%d", &array[i]);

	printf("\n\nBefore insertion: \n");
	for (i = 0; i < n; i++)
		printf("%d - %d\n", i, array[i]);

	if (n == MAX)
		printf("No more space\n");
	else
	{
		for (i = n; i >= 0; i--) // shifts elements downwards
			array[i + 1] = array[i];
	}

	printf("\n\nEnter the element to add: \n");
	scanf("%d", &array[0]);
	n++; // reflects the new number of elements

	printf("\n\nAfter insertion: \n");
	for (i = 0; i < n; i++)
		printf("%d - %d\n", i, array[i]);


	return 0;
}
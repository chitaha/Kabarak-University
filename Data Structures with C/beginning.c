#include <stdio.h>
#define MAX 5

int main()
{
	int array[MAX] = {2,3,4,5};
	int N = 4; // number of elements in the array
	int i = 0; // loop variable
	int value = 1; // new data element to be stored in the array

	// print array before insertion
	printf("Printing array before insertion: \n");

	for (i = 0; i < N; i++)
		printf("array[%d] = %d\n", i, array[i]);

	//shifting the rest of the elements downwards
	for (i = N; i >= 0; i--)
		array[i+1] = array[i];

	//add a new element in the first position
	array[0] = value;

	//increase N to reflect the number of elements
	N++;

	//print to confirm
	printf("Printing array after insertion: \n");

	for (i = 0; i < N; i++)
		printf("array[%d] = %d\n", i, array[i]);


	return 0;
}
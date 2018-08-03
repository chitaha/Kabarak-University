#include <stdio.h>

int main()
{
	// LA --> name of array
	// item --> the new item to be inserted
	// k --> position to insert the new item
	// n --> number of items in the array
	int LA[] = {1,3,5,7,8};
	int item = 10, k = 3, n = 5;
	int i = 0, j = n;

	printf("The original array elements are: \n");

	// printing all the items in the array
	for (i = 0; i < n; i++)
		printf("LA[%d] = %d\n",i, LA[i]);

	printf("%d\n", n);
	n = n + 1;
	printf("%d\n", n);

	while (j>=k)
	{
		// e.g LA[5] = LA[4] (8) 
		// LA[5] will contain LA[4]
		LA[j+1] = LA[j];
		j = j-1;
	}

	LA[k] = item;

	printf("The array elements after insertion: \n");

	// printing all the otems in the array after insertion
	for (i = 0; i < n; i++)
		printf("LA[%d]= %d\n", i, LA[i]);

	return 0;
}
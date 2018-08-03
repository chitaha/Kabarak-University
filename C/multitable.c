/**
 * Program that prints out a multiplication table
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int size;

	printf("Enter the size of your math table: ");
	scanf("%d", &size);

	for (int i=1; i<=size; i++)
	{
		for (int j=1; j<=size; j++)
		{
			printf("%d\t", i*j);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
/* Write a program that calculates the
 sum of even numbers between 100 and 400
 and display those even numbers in 
 descending order */

#include <stdio.h>

int main()
{
	int i, sum;

	for (i = 398; i > 100; i -= 2)
	{
		printf("%d  ", i);
		sum += i;
		// printf("%d\n", sum);
	}

	printf("\n");
	printf("The total sum is: %d\n", sum);

	return 0;
}
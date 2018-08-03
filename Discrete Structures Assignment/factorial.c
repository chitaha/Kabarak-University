#include <stdio.h>

int factorial(int num);

int main()
{
	int num, result;

	printf("Enter a number: ");
	scanf("%d", &num);

	if (num < 0)
	{
		printf("Please enter a positive integer.\n");
	}
	else
	{
		result = factorial(num);
		printf("%d! = %d\n", num, result);
	}
	return 0;
}

int factorial(int num)
{
	if (num == 0 || num == 1)
	{
		return(1);
	}
	else
	{
		return(num*factorial(num-1));
	}
}
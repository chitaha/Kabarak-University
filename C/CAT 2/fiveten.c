#include <stdio.h>

int main()
{
	int x;

	printf("Enter a number: ");
	scanf("%d", &x);

	if (x%5==0 && x%10==0)
	{
		printf("%d is divisible ny both 5 and 10.\n", x);
	}
	else
	{
		printf("%d is not divisible by both 10 and 5.\n", x);
	}
	return 0;
}
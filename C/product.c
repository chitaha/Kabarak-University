#include <stdio.h>

int product(int x, int y);

int main()
{
	int num1, num2, prod;
	printf("Enter 2 numbers: ");
	scanf("%d%d", &num1, &num2);

	prod = product(num1, num2);

	printf("The product is %d\n", prod);

	return 0;
}

int product(int x, int y)
{
	return (x*y);
}



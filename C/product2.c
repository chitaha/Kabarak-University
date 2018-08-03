#include <stdio.h>

int mult(int x, int y);

int main()
{
	int num1, num2, product;
	printf("Enter 2 integers: ");
	scanf("%d%d", &num1, &num2);

	product = mult(num1, num2);

	printf("%d * %d = %d\n", num1, num2, product);

	return 0;
}

int mult(int x, int y)
{
	return (x*y);
}
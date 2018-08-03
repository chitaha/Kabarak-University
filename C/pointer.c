#include <stdio.h>

int main()
{
	int *ptr;
	int sum;
	sum = 45;
	ptr = &ptr;
	printf("Sum is %d\n", sum);
	printf("Sum pointer is %p\n", ptr);
	return 0;
}
#include <stdio.h>

void func();

int i = 5;

int main()
{
	i++;
	func();
	printf("i = %d\n", i);
	return 0;
}

void func()
{
	int i = 10;
	i ++;
	printf("i = %d\n", i);
}
#include <stdio.h>

int main()
{
	return 0;
}


int fib(int num)
{
	switch(num)
	{
		case 0: 
			return(0);
			break;
		case 1:
			return(1);
			break;
		default:
			return(fib(num-1)+fib(num-2));
	}
}
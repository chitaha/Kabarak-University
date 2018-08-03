#include <stdio.h>

int main()
{
	for (int i=60; i>=44; i--)
	{
		if (i%2==0)
			printf("%d\n", i);
	}
	return 0;
}
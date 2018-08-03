#include <stdio.h>

int main()
{
	int ch, i = 0;

	while ((ch = getchar()) != EOF)
	{
		i++;
	}
	
	printf("%d\n", i);

	return 0;
}
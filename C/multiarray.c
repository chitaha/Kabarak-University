#include <stdio.h>

int main()
{
	int a2[50];

	for (int i=0; i<5; i++)
	{
		for (int j=0; j<7; j++)
		{
			a2[i][j] = 10*i+j;
		}
	}
	return 0;
}

/* cc     multiarray.c   -o multiarray
multiarray.c: In function ‘main’:
multiarray.c:11:9: error: subscripted value is neither array nor pointer nor vector
    a2[i][j] = 10*i+j;
         ^
<builtin>: recipe for target 'multiarray' failed
make: *** [multiarray] Error 1 */

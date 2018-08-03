/**
 * Write a program that displays prime
 * numbers from 20 to 50 in ascending order
 */

#include <stdio.h>

int main ()
{
	// declaring local variables
	int m, n, isPrime;
	
	for(m = 20; m <= 50; m++) 
	{
		isPrime = 1;
		printf("\n");
		for(n = 2; n <= (m/n); n++) 
		{
			printf("%d <= %d (%d/%d) ------", n, m/n, m, n);
			printf("Checking %d %% %d = %d \n", m, n, m%n);
			if(!(m % n)) 
			{
				printf("%d %% %d = %d ---- Disqualified\n", m, n, m%n);
				isPrime = 0;
				break;
			}
		}
		if(isPrime == 1) 
		{
			printf("%d is greater than %d (%d/%d)\n", n, m/n, m, n);
			printf("\n%d ----> IS A PRIME NUMBER.\n\n", m);
		}
	}
	return 0;
}
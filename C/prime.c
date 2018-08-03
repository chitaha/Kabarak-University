/**
 * Write a program that displays prime
 * numbers from 20 to 50 in ascending order
 */

#include <stdio.h>

int main ()
{
	// declaring local variables
	int m, n, isPrime;
	
	// find all prime numbers between m and n
	for(m = 20; m <= 50; m++) 
	{
		isPrime = 1;
		// check if the current number m is prime or not
		for(n = 2; n <= (m/n); n++) 
		{
			// if m is divisible by any number other than 
			// 1 and itself, it is not a prime number.
			if(m % n == 0) 
			{
				isPrime = 0;
				break;
			}
		}
		// print the number if it is prime
		if(isPrime == 1) 
		{
			printf("%d\n", m);
		}
	}
	return 0;
}
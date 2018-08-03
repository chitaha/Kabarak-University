/**
 * Euclidean Algorithm
 * 1.Divide m by n and let r be the remainder.
 * 2.If r is 0, n is the answer; if r is not 0, continue to step 3.
 * 3.Set m = n and n = r . Go back to step 1.
 */

#include <stdio.h>
  
int gcd(int a, int b)
{
	if (b == 0) 
	{
		return a;
	} 
	else if (a >= b && b > 0) 
	{
		return gcd(b, (a % b));
	}
}
  
int main()
{
	int x, y;

	printf("\nEnter two numbers: ");
	scanf("%d%d", &x, &y);


	if (gcd(x,y))
		printf("The GCD of %d and %d is %d\n", x, y, gcd(x,y));
	else
		printf("Invalid!\n");

	return 0;
 }
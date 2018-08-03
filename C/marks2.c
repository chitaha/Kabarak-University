#include <stdio.h>

int main()
{
	int Marks[5], n, i, sum=0;

	printf("Enter the number of units: ");
	scanf("%d", &n);

	for (i=0; i<n; i++)
	{
		printf("Enter mark: %d\n", i+1);
		scanf("%d", &Marks[i]);
		sum += Marks[i];
	}
	printf("\nThe sum is %d\n", sum);
	printf("The average is: %0.2f\n", (float)sum/n);

	return 0;
}
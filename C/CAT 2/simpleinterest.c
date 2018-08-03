#include <stdio.h>

int main()
{
    float principle, tme, rate, SI;

    /* Input principle, rate and time */
    printf("Enter principle (amount): ");
    scanf("%f", &principle);

    printf("Enter time: ");
    scanf("%f", &tme);

    printf("Enter rate: ");
    scanf("%f", &rate);

    /* Calculate simple interest */
    SI = (principle * tme * rate) / 100;

    /* Print the resultant value of SI */
    printf("Simple Interest = %.2f\n", SI);

    return 0;
}
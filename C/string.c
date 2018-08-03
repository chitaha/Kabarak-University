#include <stdio.h>
#include <string.h>

int main()
{
	char my_str[10];
	char new_str[10];

	printf("Enter any sentence or word less than 50 characters: \n");
	scanf("%s", my_str);

	printf("%s\n", my_str);

	printf("%ld\n", strlen(my_str));
	printf("%s\n", strcpy(my_str, new_str));

	return 0;
}


// strlen - string length
// strcpy - string copy
// strcmp - string compare
// strups - string upper
// strlwr - string lower
// strcat - string concatenate
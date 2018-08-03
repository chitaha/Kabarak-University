#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "HELLO ", s2[] = "welcome";

    //concatenates str1 and str2 and resultant string is stored in str1.
    strcat(s1,s2);

    printf("The joined string is --> %s\n", s1);

    printf("The length of the joined string is %ld\n", strlen(s1));   

    return 0;
}
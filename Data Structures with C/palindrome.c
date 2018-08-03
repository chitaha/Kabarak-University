#include <stdio.h>
#include <string.h>

int push(char);
char pop();

char stack[100];
int top = -1;

int main()
{
	char str[100];
	int i, count = 0, len;

	printf("Enter string: \n");
	scanf("%s", str);

	len = strlen(str);

	for(i=0; i<len; i++)
		push(str[i]);

	for(i=0; i<len; i++)
	{
		if(str[i]==pop())
			count++;
	}

	if(count == len)
		printf("%s is a palindrome\n", str);
	else
		printf("%s is not a palindrome\n", str);

	return 0;
}

int push(char c)
{
	stack[++top] = c;
}

char pop()
{
	return(stack[top--]);
}
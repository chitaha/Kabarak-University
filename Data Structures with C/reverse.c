#include <stdio.h>
#include <string.h>

#define max 100
int top, stack[max];

void push(char x);
void pop();

int main()
{
	char str[100];
	int i;

	printf("Enter a string: ");
	scanf("%s", str);

	int len = strlen(str);

	for (i=0; i<len; i++)
		push(str[i]);

	for (i=0; i<len; i++)
		pop();

	printf("\n");
	return 0;
}

void push(char x)
{
	if (top == max-1)
		printf("Stack overflow....\n");
	else
		stack[++top] = x;
}

void pop()
{
	printf("%c", stack[top--]);
}

/**********************************************************
 * Program to reverse a string
 * 
 * Name       ----> Sarah Chebet Chitaha
 * Reg No     ----> CS/M/0352/05/17
 * Unit title ----> Data Structures with C
 * Unit code  ----> Comp 214
 * 
 **********************************************************/
#include <stdio.h>
#include <string.h>

#define max 100
int top, stack[max];

int isEmpty();
int isFull();
int peek();
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

	// print the reversed string
	for (i=0; i<len; i++)
		pop();

	printf("\n");
	return 0;
}

int peek()
{
	return stack[top];
}

int isFull()
{
	if (top == max)
		return 1;
	else
		return 0;
}

int isEmpty()
{
	if (top == -1)
		return 1;
	else
		return 0;
}

void push(char x)
{
	if (!isFull())
	{
		top = top + 1;
		stack[top] = x;
	}
	else
		printf("Stack overflow.....\n");
}

void pop()
{
	char data;

	if (!isEmpty())
	{
		data = stack[top];
		top = top - 1;
		printf("%c", data);
	}
	else
	{
		printf("Stack Underflow....\n");
	}
}

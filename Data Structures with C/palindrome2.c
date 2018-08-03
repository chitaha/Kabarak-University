/**********************************************************
 * Program to check if a string is a palindrome
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
char stack[max];
int top = -1;

int push(char);
char pop();
int isEmpty();
int isFull();
int peek();



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

	printf("\n");

	if(count == len)
		printf("%s is a palindrome\n", str);
	else
		printf("%s is not a palindrome\n", str);

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


int push(char c)
{
	if (!isFull())
	{
		top = top + 1;
		stack[top] = c;
	}
	else
		printf("Stack overflow.....\n");
}

char pop()
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
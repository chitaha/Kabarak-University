/**
 * Program to convert an infix notation into its
 * equivalent postfix notation
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

char st[MAX];
int top = -1;

void push(char st[], char val);
char pop(char st[]);
void InfixtoPostfix(char source[], char target[]);
int getPriority(char);

int main()
{
	char infix[100], postfix[100];
	printf("Enter any infix expression: \n");
	scanf("%s", infix);
	strcpy(postfix, "");
	InfixtoPostfix(infix, postfix);
	printf("\nThe corresponding postfix expression is: \n");
	puts(postfix);
	return 0;
}

void InfixtoPostfix(char source[], char target[])
{
	int i = 0, j = 0;
	char temp;
	strcpy(target, "");
	while (source[i] != '\0')
	{
		if (source[i] == '(')
		{
			push(st, source[i]);
			i++;
		}
		else if (source[i] == ')')
		{
			while ((top != -1) && (st[top] != '('))
			{
				target[j] = pop(st);
				j++;
			}
			if (top == -1)
			{
				printf("\n INCORRECT EXPRESSION");
				exit(1);
			}
			temp = pop(st); // remove left parenthesis
			i++;
		}
		else if (isdigit(source[i]) || isalpha(source[i]))
		{
			target[j] = source[i];
			j++;
			i++;
		}
		else if (source[i] == '+' || source[i] == '-' || source[i] == '*' || source[i] == '/' || source[i] == '%')
		{
			while ((top != -1) && (st[top] != '(') && (getPriority(st[top]) > getPriority(source[i])))
			{
				target[j] = pop(st);
				j++;
			}
			push(st, source[i]);
			i++;
		}
		else
		{
			printf("\n INCORRECT ELEMENT IN EXPRESSION\n");
			exit(1);
		}
	}
	while ((top != -1) && (st[top] != '('))
	{
		target[j] = pop(st);
		j++;
	}
	target[j] = '\0';
}

int getPriority(char op)
{
	if (op == '/' || op == '*' || op == '%')
		return 1;
	else if (op == '+' || op == '-')
		return 0;
}

void push(char st[], char val)
{
	if (top == MAX - 1)
		printf("STACK OVERFLOW....\n");
	else 
	{
		top++;
		st[top] = val;
	}
}

char pop(char st[])
{
	char val = ' ';
	if (top == -1)
		printf("STACK UNDERFLOW....\n");
	else
	{
		val = st[top];
		top--;
	}
	return val;
}
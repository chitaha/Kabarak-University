/**
 * Program to evaluate a postfix notation
 */
#include <stdio.h>
#include <ctype.h>

#define MAX 100
float st[MAX];
int top = -1;

void push(float st[], float val);
float pop(float st[]);
float evaluatePostfixExp(char expr[]);


int main()
{
	float val;
	char expr[100];
	printf("Enter any postfix expression: \n");
	scanf("%s", expr);
	val = evaluatePostfixExp(expr);
	printf("\n Value of Postfix expression = %.2f\n", val);
	return 0;
}

float evaluatePostfixExp(char expr[])
{
	int i = 0;
	float op1, op2, value;
	while (expr[i] != '\0')
	{
		if (isdigit(expr[i]))
			push(st, (float)(expr[i]-'0'));
		else
		{
			op2 = pop(st);
			op1 = pop(st);
			switch(expr[i])
			{
				case '+':
					value = op1 + op2;
					break;
				case '-':
					value = op1 - op2;
					break;
				case '/':
					value = op1 / op2;
					break;
				case '*':
					value = op1 * op2;
					break;
				case '%':
					value = (int)op1 % (int)op2;
					break;
			}
			push(st, value);
		}
		i++;
	}
	return(pop(st));
}

void push(float st[], float val)
{
	if (top == MAX - 1)
		printf("Stack Overflow....\n");
	else
	{
		top++;
		st[top] = val;
	}
}

float pop(float st[])
{
	float val = -1;
	if (top == -1)
		printf("Stack Underflow....\n");
	else
	{
		val = st[top];
		top--;
	}
	return val;
}
/**
 * Program to infixtopostfix and evaluate infix notation
 * to postfix notation
 * 5 * (4 + 6)
 */

#include<stdio.h>
#include<string.h>
#include <ctype.h>

//char stack
char stack[25];
int top = -1;
int stack_int[25];
int top_int = -1;


void push(char item); 
char pop();
int priority(char symbol);
int isOperator(char symbol); 
void infixtopostfix(char infix[],char postfix[]); 
void push_int(int item); 
char pop_int(); 
int evaluate(char *postfix);

int main() 
{
	char infix[25], postfix[25];

	printf("Enter infix expression: \n");
	scanf("%s", infix);

	infixtopostfix(infix,postfix);

	printf("Infix: %s\n" , infix);
	printf("Postfix: %s\n" , postfix);
	printf("Result: %d\n" , evaluate(postfix));

	return 0;
}


void push(char item) 
{
	stack[++top] = item;
}

char pop() 
{
	return stack[top--];
}

//returns priority of operators
int priority(char symbol) 
{
	switch(symbol) 
	{
	case '+':
	case '-':
		return 2;
		break;
	case '*':
	case '/':
		return 3;
		break;
	case '^':
		return 4;
		break;
	case '(':
	case ')':
	case '#':
		return 1;
		break;
	}
}

//check whether the symbol is operator?
int isOperator(char symbol) 
{
	switch(symbol) 
	{
	case '+':
	case '-':
	case '*':
	case '/':
	case '^':
	case '(':
	case ')':
		return 1;
		break;
	default:
		return 0;
	}
}

//conveting infix expression to postfix
void infixtopostfix(char infix[],char postfix[]) 
{
	int i,symbol,j = 0;
	stack[++top] = '#';

	for(i = 0;i<strlen(infix);i++) 
	{
		symbol = infix[i];
		if(isOperator(symbol) == 0) 
		{
			postfix[j] = symbol;
			j++;
		} 
		else 
		{
			if(symbol == '(') 
			{
				push(symbol);
			}
			else 
			{
				if(symbol == ')') 
				{
					while(stack[top] != '(') 
					{
						postfix[j] = pop();
						j++;
					}
					pop();//pop out (.
				} 
				else 
				{
					if(priority(symbol)>priority(stack[top])) 
					{
						push(symbol);
					}
					else 
					{
						while(priority(symbol)<=priority(stack[top])) 
						{
							postfix[j] = pop();
							j++;
						}
						push(symbol);
					}
				}
			}
		}
	}
	while(stack[top] != '#') 
	{
		postfix[j] = pop();
		j++;
	}
	postfix[j]='\0';//null terminate string.
}


void push_int(int item) 
{
	stack_int[++top_int] = item;
}

char pop_int() 
{
	return stack_int[top_int--];
}

//evaluates postfix expression
int evaluate(char *postfix)
{
	char ch;
	int i = 0,operand1,operand2;
	while( (ch = postfix[i++]) != '\0') 
	{
		if(isdigit(ch)) 
		{
			push_int(ch-'0'); // Push the operand
		}
		else 
		{
			//Operator,pop two operands
			operand2 = pop_int();
			operand1 = pop_int();
			switch(ch) 
			{
				case '+':
					push_int(operand1+operand2);
					break;
				case '-':
					push_int(operand1-operand2);
					break;
				case '*':
					push_int(operand1*operand2);
					break;
				case '/':
					push_int(operand1/operand2);
					break;
			}
		}
	}
	return stack_int[top_int];
}
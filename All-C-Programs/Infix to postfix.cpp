#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10
int isempty();
int isfull();
int operatorprecedence(char);
void push(char);
char pop();
char peek(int);
int isoperator(char op);
void infixtopostfix();
void display();
int stack[MAX];
int top=-1;
char infix[MAX];
char postfix[MAX];

int isempty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	return 0;
}
int isfull()
{
	if(top==MAX-1)
	{
		return 1;
	}
	else
	return 0;
}
void push(char c)
{
	if(isfull())
	{
		printf("\nStack is full\n");
	}
	else
	{
		top++;
		stack[top]=c;
	}
}
char pop()
{
	if(isempty())
	{
		printf("\nStack is empty\n");
	}
	else
	{
		return stack[top--];
	}
}
void display()
{
	for(int i=0;i<=top;i++)
	{
		printf("%d ",postfix[i]);
	}
}
char peek(int top)
{
	return stack[top];
}
int operatorprecedence(char ch)
{
	if(ch=='^')
	return 4;
	else if(ch=='*'||ch=='/')
	return 3;
	else if(ch=='+'||ch=='-')
	return 2;
	else
	return 0;
}
int isoperator(char op)
{
	if (op=='^'||op=='/'||op=='*'||op=='+'||op=='-')
	return 1;
	else
	return 0;
}
void infixtopostfix()
{
	int i=0,j=0;
	printf("%c",peek(top));
	while(infix[i]!= '/0')
	{
		if(!isoperator(infix[i]))
		{
			postfix[j]=infix[i];
			j++;
			i++;
		}
		else
		{
			if(operatorprecedence(infix[i])>=operatorprecedence(peek(top)))
			{
			    printf("%d  ",peek(top));
				push(infix[i]);
				i++;
			}
			else
			{
				postfix[j]=pop();
				j++;
				
			}
			
		}
	}
	while(!isempty())
	{
		postfix[j]=pop();
		j++;
	}
	//postfix[j]= '/0';
}
int main()
{
	char infix[]="A+B";//"A+B-C*X+Y";
	puts(infix);
	//push('f');
	infixtopostfix();
	display();
}
	


#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int top=-1;
int stack[MAX];
void push(int);
void pop();
void display();
int main()
{
	int choice,element;
	printf("\nEnter 1 to push");
	printf("\nEnter 2 to pop");
	printf("\nEnter 3 to display");
	printf("\nEnter 4 to exit");
	while(1)
	{
	printf("\nEnter your choice");
	scanf("%d",&choice);
	switch(choice)
		{
			case 1:printf("\nEnter the element");
					scanf("%d",&element);
					push(element);
					break;
			case 2: pop();
			break;
			case 3: display();
			break;
			case 4: exit(0);
			break;	
		}
	}
}

void push(int element)
{
	if(top==MAX-1)
	{
		printf("stack is full");
		exit(0);
	}
	else
	{
		top++;
		stack[top]=element;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("stack is empty");
		return;
	}
	else
	{
		top--;
		stack[top];
	}
}
void display()
{
	for(int i=0;i<=top;i++)
	{
		printf("%d",stack[i]);
	}
}

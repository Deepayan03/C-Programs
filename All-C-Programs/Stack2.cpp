#include<stdio.h>
#include<stdlib.h>
#define Max 5
void push(int);
void pop();
void display();
int arr[Max];
int top=-1;
int main()
{
	int choice,num;
	printf("\nEnter 1 to push");
	printf("\nEnter 2 to pop");
	printf("\nEnter 3 to display");
	printf("\nEnter 4 to exit");	
	while(1)
	{
		
		printf("\nEnter your choice:  ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("\nEnter the number :");
					scanf("%d",&num);
					push(num);
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: exit(0);
		}
	}
}
void push(int key)
{
	if(top==Max-1)
	{
		printf("\n Stack is overflow ");
		return;
	}
	else
	{
		top++;
		arr[top]=key;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\nStack is empty");
		return;
	}
	else
	{
		top--;
	}
}
void display()
{
	for(int i=0;i<=top;i++)
	{
		printf("%d ",arr[i]);
	}
}

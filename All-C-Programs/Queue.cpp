#include<stdio.h>
#include<stdlib.h>
#define max 5
int front=-1;
int rear=-1;
int queue[max];
void insert(int);
void del();
void display();
void insert(int element)
{
	if(rear==max-1)
	{
		printf("Queue is full");
		exit(0);
	}
	else
	{
		rear=rear+1;
		queue[rear]=element;
	}
}
void del()
{
	if(rear==-1 && front==-1)
	{
		printf("Queue is empty");
		exit(0);
	}
	else
	{
		front++;
	}
}
void display()
{
	int i;
	printf("The elements are ");
	for(i=front+1;i<=rear;i++)
	{
		printf(" %d\t",queue[i]);
	}
}
int main()
{
	int choice,element;
	
	while(1)
	{
		printf("\n Enter 1 for insert");
		printf("\n Enter 2 for delete");
		printf("\n Enter 3 for display");
		printf("\n Enter 4 for exit");
		printf("\nEnter your choice");
		scanf("%d",&choice);
		fflush(stdin);
		switch(choice)
		{
			case 1: 
				printf("Enter the element");
				scanf("%d",&element);
				insert(element);
			break;
			case 2: del();
			break;
			case 3: display();
			break;
			case 4: exit(0);
			break;
		}
	}
}


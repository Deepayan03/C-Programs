#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int front=-1;
int rear=-1;
int queue[MAX];
void insert(int);
void del();
void display();
int main()
{
	int choice,element;
	printf("\nEnter 1 to insert");
	printf("\nEnter 2 to delete");
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

void insert(int element)
{
	if(rear==MAX-1)
	{
		printf("Queue is full");
		exit(0);
	}
	else
	{
		rear++;
		queue[rear]=element;
	}
}
void del()
{
	if(rear==-1)
	{
		printf("Queue is empty");
		return;
	}
	else
	{
		front++;
		queue[front];
	}
}
void display()
{
	for(int i=front+1;i<=rear;i++)
	{
		printf("%d",queue[i]);
	}
}

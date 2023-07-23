#include<stdio.h>
#include<stdlib.h>
#define Max 5
void enqueue(int);
void dequeue();
void display();
int arr[Max];
int front=-1;
int rear=-1;
int main()
{
	int choice,num;
	printf("\nEnter 1 to enqueue");
	printf("\nEnter 2 to dequeue");
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
					enqueue(num);
					break;
			case 2: dequeue();
					break;
			case 3: display();
					break;
			case 4: exit(0);
		}
	}
}
void display()
{
	for(int i=front;i<=rear;i++)
	{
		printf("%d ",arr[i]);
	}
}
void enqueue(int key)
{
	if(rear==Max-1)
	{
		printf("\nQueue is full");
		//return;
	}
	else
	{
		arr[rear]=key;
		rear++;
	}
}
void dequeue()
{
	if(front==rear)
	{
		printf("Queue is Empty");
	}
	else
	{
		arr[front++];
	}
}

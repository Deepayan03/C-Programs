#include<stdio.h>
#include<stdlib.h>
#define size 5
void enqueue(int);
void dequeue();
void display();
int arr[size];
int front=-1;
int rear=-1;
int main()
{
	/*int choice,num;
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
	}*/
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	display();
	dequeue();
	dequeue();
	dequeue();
	display();
	dequeue();
	dequeue();
	enqueue(15);
	enqueue(100);
	display();
	enqueue(15);
	enqueue(15);
	enqueue(15);
	enqueue(15);
	display();
}
void enqueue(int val)
{
	if(front==-1 && rear==-1)
	{
		front=rear=0;
		arr[rear]=val;
	}
	if((rear+1)%size==front)
	{
		printf("\n Queue is full ");
	}
	else
	{
		arr[rear]= val;
		rear=(rear+1)%size;
	}
}
void dequeue()
{
	if(rear==front)
	{
		printf("\n Queue is empty");
	}
	else
	{
		front=(front+1)%size;
	}
}
void display()
{
	int i=front;
	if(front==-1 && rear==-1)
	{
		printf("\nQueue is empty");
	}
	else
	{
		while(i!=rear)
		{
			i=(i+1)%size;
			printf("%d ",arr[i]);
			
			
		}
		//printf("%d",arr[i]);
		printf("\n");
	}
}

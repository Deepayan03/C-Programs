#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int cqueue[MAX];
int front=-1;
int rear=-1;
void display();
void insert(int);
void del();
int main()
{
	int choice,element;
	while(1)
	{
		printf("1.INSERT\n");
		printf("2.DELETE\n");
		printf("3.DISPLAY\n");
		printf("4.QUIT\n");
		printf("Enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the element");
				scanf("%d",&element);
				insert(element);
				break;
			case 2:
				del();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
			default:
				printf("Wrong choice");
		}
	}
}
	void insert(int item)
	{
		if(front==rear+1 || rear==MAX-1 && front==0)
		{
			printf("cqueue is full");
		}
		else if(front==-1 && rear==-1)
		{
			rear=0;
			front=0;
			cqueue[rear]= item;
		}
		else 
		{
			rear++;
			cqueue[rear]= item;
		}
	}
	void del()
	{
		if(front==-1 && rear==0-1)
		{
			printf("cqueue is empty");
		}
		else if (front== MAX-1)
		{
			front=0;
			front++;
		}
		else if (front == rear)
		{
			front=-1;
			rear=-1;
			front++;
		}
		else
		{
			front++;
		}
		printf("Item deleted is %d\n",front);
	}
	void display()
	{
		int i=front;
				for(int i=front;i<=rear;i++)
				{
					printf("%d\n",cqueue[i]);
					 
					
				}
}


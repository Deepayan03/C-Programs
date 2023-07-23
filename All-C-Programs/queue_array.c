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
system("clear");
int choice,item;
	while(1)
	{
	printf("\n 1.INSERT\n");
	printf("2.DELETE\n");
	printf("3.DISPLAY\n");
	printf("4.EXIT\n");
	printf("ENTER YOUR CHOICE\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("ENTER THE DATA\n");
				scanf("%d",&item);
				insert(item);
		break;
		case 2:del();
		break;
		case 3:display();
		break;
		case 4:exit(0);
	}
  }
}
void insert( int item)
{
	if(rear==MAX-1)
	{
		printf("Queue is full\n");
		exit(0);
	}
	else
	{
		rear=rear+1;
		queue[rear]=item;
	}
}
void del()
{
	if(rear==-1 && front==-1)
	{
		printf("Queue is empty\n");
		exit(0);
	}
	else
		printf("Deleted element is %d ",queue[front++]);
}
void display()
{
	int i;
	for(i=front+1;i<=rear;i++)
		printf("%d\t",queue[i]);
}

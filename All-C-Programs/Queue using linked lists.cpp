#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node*next;
} queue;
queue* enqueue(queue**,queue**,int);
int pop();
void display(queue*);
queue *front=NULL;
queue *rear=NULL;
int main()
{
	rear=enqueue(&rear,&front,10);
	rear=enqueue(&rear,&front,20);
	rear=enqueue(&rear,&front,30);
	rear=enqueue(&rear,&front,40);
	display(front);
	printf("\n Popped element is %d ",pop());
	rear=enqueue(&rear,&front,85);
	printf("\n Popped element is %d ",pop());
	printf("\n Popped element is %d ",pop());
	printf("\n");
	display(front);
}
queue* enqueue(queue **rear ,queue **front, int n)
{
	queue *newnode;
	newnode=(queue*)malloc(sizeof(queue));
	newnode->data=n;
	if(*front==NULL) //|| *rear==NULL)
	{
		*rear=*front=newnode;
		newnode->next=NULL;
	}
	else
	{
		(*rear)->next=newnode;
		*rear=newnode;
		newnode->next=NULL;
		
	}
	return *rear;
}
int pop()
{
	queue *newnode,*temp;
	int x;
	if(front==NULL)
	{
		printf("\n Can't pop queue is already empty");
	}
	else
	{
		temp=front;
		front=(front)->next;
		x=temp->data;
		free(temp);
		if(front== NULL)
		rear==NULL;
	}
	return x;
}
void display(queue *front)
{
	queue *temp;
	temp=front;
	while(temp!=NULL)
	{
		printf("%d  ",temp->data);
		temp=temp->next;
	}
}

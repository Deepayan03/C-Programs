#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node *start =NULL;
struct node*create(struct node*);
struct node*display(struct node*);
struct node*del(struct node*);
int main()
{
int choice;
printf("\n1 for Create\n");
printf("\n2 for Display\n");
printf("\n3 for deletion at beginning\n");
while(1)
	{

	printf("Enter the choice");
	scanf("%d",&choice);
	switch(choice)
		{
		case 1: start=create(start);
				break;
		case 2: start=display(start);
				break;
		case 3 :start=del(start);
				break;
		case 4 : exit(0);
		}
	}
}
struct node *create(struct node *start)
{
	struct node *temp,*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(start==NULL)
	{
		start=newnode;
		newnode->next=start;
	}
	else
	{
		temp=start;
		while(temp->next!=start)
		{
			temp=temp->next;
			
		}
		temp->next=newnode;
		newnode->next=start;
	}
	return start;
}
struct node *display(struct node *start)
{
	struct node *temp;
	temp=start;
	do
	{
		printf("%d  ",temp->data);
		temp=temp->next;
	}
	while(temp!=start);
	return start;
}
struct node*del(struct node*start)
{
	struct node *temp,*temp1;

	if(start==NULL)
	{
		printf("Deletion is not possible");
	}
	else
	{
		temp=start;
		do 
		{
			temp=temp->next;
		}
		while(temp->next!=start);
		temp1=start;
		start=start->next;
		free(temp1);
		temp->next=start;
		printf("Node deleted");
		
		
	}
	return start;
}

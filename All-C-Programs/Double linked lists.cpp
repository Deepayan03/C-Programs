#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
int count;
struct node *head=NULL;
struct node*create(struct node*,int);
struct node*display(struct node*);
int main()
{
	int choice,data,posn;
	printf("\nEnter 1 to create\n");
	printf("Enter 2 to display\n");
	while(1)
	{
		printf("Enter your choice:  ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	printf("\nEnter the data");
					scanf("%d",&data);
					head=create(head,data);
					break;
			case 2:	head=display(head);
					break;
			case 3: exit(0);
		}
	}
}
struct node*create(struct node*head,int data)
{
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	
	if(head==NULL)
	{
		newnode->prev=NULL;
		newnode->next=NULL;
		head=newnode;
		count++;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		newnode->prev=temp;
		temp->next=newnode;
		newnode->next=NULL;
		count++;
	}
	return head;		
}
struct node*display(struct node*head)
{
	struct node *temp;
	int i=0;
	printf("\n%d",count);
	if(head==NULL)
	{
		printf("\nLinked list is empty\n");
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		
		while(temp!=NULL)
		{
			printf("%d  ",temp->data);
			temp=temp->prev;
		}
		
		printf("\n");
		
	}
	return head;
}

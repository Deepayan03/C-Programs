#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
struct node*create(struct node**,int);
struct node*insertbeg(struct node**,int );
struct node*insertend(struct node**,int);
struct node*insertatnth(struct node**,int,int);
//struct node*delbeg(struct node*);
//struct node*delend(struct node*);
//struct node*delatnth(struct node*,int);
struct node*display(struct node*);
//struct node*largestnode(struct node**);
int main()
{
	int choice,data,posn,max;
	struct node *maxnode;
	printf("\nEnter 1 to create\n");
	printf("Enter 2 to display\n");
	printf("Enter 3 to insert beg\n");
	printf("Enter 4 to insert end\n");
	printf("Enter 5 to insert at nth\n");
	printf("Enter 6 to delete at beginning\n");
	printf("Enter 7 to delete at end\n");
	printf("Enter 8 to delete at nth\n");
	printf("\nEnter 9 to find the largest node\n");
	printf("\nEnter 10 to exit\n");
	while(1)
	{
		printf("Enter your choice:  ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	printf("\nEnter the data");
					scanf("%d",&data);
					head=create(&head,data);
					break;
			case 2:	head=display(head);
					break;
			case 3:	printf("\nEnter the data");
					scanf("%d",&data);
					head=insertbeg(&head,data);
					break;
			case 4:	printf("\nEnter the data");
					scanf("%d",&data);
					head=insertend(&head,data);
					break;
			case 5:	printf("\nEnter the data");
					scanf("%d",&data);
					printf("\nEnter the position");
					scanf("%d",&posn);
					head=insertatnth(&head,data,posn);
					break;
			/*case 6:	head=delbeg(head);
					break;
			case 7: head=delend(head);
					break;
			case 8 : printf("\nEnter the position");
						scanf("%d",&posn);
					head=delatnth(head,posn);
					break;
			case 9: maxnode=largestnode(&head);
					printf("\nThe largest number in  the linked list is %d\n",maxnode->data);
					break;*/
			case 10 : exit(0);
					
		}
	}
}
struct node*create(struct node**head,int key)
{
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=key;
	newnode->next=*head;
	if(*head==NULL)
	{
		*head=newnode;
		newnode->next=*head;
	}
	else
	{
		temp=*head;
		while(temp->next!=*head)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->next=*head;
	}
	return *head;
}
struct node*display(struct node*head)
{
	struct node *temp;
	temp=head;
	if(head==NULL)
	{
		printf("\nLinked list is empty\n");
	}
	printf("\n");
	do
	{
		printf("%d  ",temp->data);
		temp=temp->next;
	}
	while(temp!=head);
	return head;
}
struct node*insertbeg(struct node**head,int key)
{
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=key;
	newnode->next=*head;
	if(*head==NULL)
	{
		*head=newnode;
	}
	else
	{
		temp=*head;
		while(temp->next!=*head)	
		{
			temp=temp->next;
		}
		temp->next=newnode;
		*head=newnode;
	}
	return *head;
}
struct node*insertend(struct node**head,int key)
{
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=key;
	newnode->next=*head;
	if(*head==NULL)
	{
		*head=newnode;
	}	
	else
	{
		temp=*head;
		while(temp->next!=*head)
		{
			temp=temp->next;
		}
		temp->next=newnode;
	}
	return *head;
}
struct node*insertatnth(struct node**head,int key,int posn)
{
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=key;
	newnode->next=*head;
	if(posn==1)
	{
		/*if(*head==NULL)
	{
		*head=newnode;
	}*/
//	else
//	{
		temp=*head;
		while(temp->next!=*head)	
		{
			temp=temp->next;
		}
		temp->next=newnode;
		*head=newnode;
	}
	else
	{
		temp=*head;
		for(int i=0;i<posn-2;i++)
		{
			temp=temp->next;
		}
		temp=newnode;
	}
}


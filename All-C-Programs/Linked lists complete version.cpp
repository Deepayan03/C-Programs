
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
struct node*create(struct node*,int);
struct node*insertbeg(struct node*,int );
struct node*insertend(struct node*,int);
struct node*insertatnth(struct node*,int,int);
struct node*delbeg(struct node*);
struct node*delend(struct node*);
struct node*delatnth(struct node*,int);
struct node*display(struct node*);
struct node*largestnode(struct node**);
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
					head=create(head,data);
					break;
			case 2:	head=display(head);
					break;
			case 3:	printf("\nEnter the data");
					scanf("%d",&data);
					head=insertbeg(head,data);
					break;
			case 4:	printf("\nEnter the data");
					scanf("%d",&data);
					head=insertend(head,data);
					break;
			case 5:	printf("\nEnter the data");
					scanf("%d",&data);
					printf("\nEnter the position");
					scanf("%d",&posn);
					head=insertatnth(head,data,posn);
					break;
			case 6:	head=delbeg(head);
					break;
			case 7: head=delend(head);
					break;
			case 8 : printf("\nEnter the position");
						scanf("%d",&posn);
					head=delatnth(head,posn);
					break;
			case 9: maxnode=largestnode(&head);
					printf("\nThe largest number in  the linked list is %d\n",maxnode->data);
					break;
			case 10 : exit(0);
					
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
		newnode->next=NULL;
		head=newnode;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->next=NULL;
	}
	return head;		
}
struct node*display(struct node*head)
{
	struct node *temp;
	if(head==NULL)
	{
		printf("\nLinked list is empty\n");
	}
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			printf("%d  ",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
	return head;
}
struct node*insertbeg(struct node*head,int data)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		newnode->next=head;
		head=newnode;
	}
}
struct node*insertend(struct node*head,int data)
{
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	
	if(head==NULL)
	{
		newnode->next=NULL;
		head=newnode;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->next=NULL;
	}
	return head;		
}
struct node*insertatnth(struct node*head,int data,int posn)
{
	struct node *newnode,*temp;
	int i=0;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	
	if(head==NULL)
	{
		newnode->next=NULL;
		head=newnode;
	}
	else
	{
		temp=head;
		while(i<posn-2)
		{
			temp=temp->next;
			i++;
		}
		newnode->next=temp->next;
		temp->next=newnode;
	}
	return head;		
}
struct node*delbeg(struct node*head)
{
	struct node *temp;
	if(head==NULL)
	{
		printf("\nDeletion not possible");
		
	}
	else
	{
		temp=head;
		head=head->next;
		free(temp);
	}
	return head;
}
struct node*delend(struct node*)
{
	struct node *temp,*temp1;
	if(head==NULL)
	{
		printf("\nDeletion not possible");
		
	}
	else if(head->next==NULL)
	{
		head=NULL;
		free(head);
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp1=temp;
			temp=temp->next;
		}
		temp1->next=NULL;
		free(temp);
	}
	return head;
}
struct node*delatnth(struct node*head,int posn)
{
	struct node *temp,*temp1;
	temp=head;
	int i=0;
	if(head==NULL)
	{
		printf("Linked list is empty\n");
	}
	else if(posn==1)
	{
		temp=head;
		head=head->next;
		free(temp);
		temp=NULL;
	}
	else
	{
		while(i<posn-1)
		{
			temp1=temp;
			temp=temp->next;
			i++;
		}
		temp1->next=temp->next;
		free(temp);
	}
	return head;
}
struct node*largestnode(struct node**head)
{
	struct node *temp,*temp1;
	temp=*head;
	int max=0;
	if(temp==NULL)
	{
		printf("Linked list is empty\n");
	}
	else
	{
	while(temp!=NULL)
	{
		if(temp->data>max)
		{
			max=temp->data;
			temp1=temp;
		}
		temp=temp->next;
	}
}
	return temp1;	
}



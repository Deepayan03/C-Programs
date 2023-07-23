#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node *head =NULL;
struct node*create(struct node*);
struct node*display(struct node*);
struct node*beg(struct node*);
struct node*end(struct node*);
struct node*del(struct node*);
struct node*delend(struct node*);
struct node*afternode(struct node*);
struct node*beforenode(struct node*);
struct node*deleteafter(struct node*);
struct node*deletebefore(struct node*);
void recursivedisplay(struct node*);
struct node*sortedinsertion(struct node**);
int main()
{
int choice;
printf("\n1 for Create\n");
printf("\n2 for Display\n");
printf("\n3 for Insert at beginning\n");
printf("\n4 for Delete\n");
printf("\n5 for Delete from end\n");
printf("\n6 for insert afternode\n");
printf("\n7 for insert beforenode\n");
printf("\n8 for delete afternode\n");
printf("\n9 for delete beforenode\n");
printf("\n10 for recursive display\n");
printf("\n11 for sorted insertion \n");
printf("\n11 for exit\n");
while(1)
	{

	printf("\nEnter the choice");
	scanf("%d",&choice);
	switch(choice)
		{
		case 1: head=create(head);
			break;
		case 2: head=display(head);
			break;
		case 3: head=beg(head);
			break;
		case 4: head=del(head);
			break;
		case 5:head=delend(head);
			break;
		case 6:head=afternode(head);
			break;
		case 7:head=beforenode(head);
			break;
		case 8:head=deleteafter(head);
			break;
		case 9: head=deletebefore(head);
		break;
		case 10 : recursivedisplay(head);
		break;
		case 11 : head=sortedinsertion(&head);
		break;
		case 12: exit(0);
		}
	}
}
struct node *create(struct node *head)
{
	struct node *temp,*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the data");
	scanf("%d",&newnode->data);
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
struct node *display(struct node *head)
{
	struct node *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d  ",temp->data);
		temp=temp->next;
	}
	return head;
}
struct node*beg(struct node*head)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the data");
	scanf("%d",&newnode->data);
	newnode->next=head;
	head=newnode;
}
struct node*del(struct node*head)
{
	struct node *temp;

	if(head==NULL)
	{
		printf("\nDeletion is not possible");
	}
	else
	{
		temp=head;
		head=head->next;
		free(temp);
		printf("\nNode deleted");
	}
	return head;
}
struct node*delend(struct node*head)
{
	
	struct node *temp,*ptr;
	if(head==NULL)
	{
		printf("\nDeletion is not possible");
	}
	else if(head->next==NULL)
	{
		head=NULL;
		free(head);
	}
	else
	{
		printf("\nDeleting");
		temp=head;
		while(temp->next!=NULL)
		{
			ptr=temp;
			temp=temp->next;
		}
		ptr->next=NULL;
		free(temp);
	}
	return head;
}
struct node*afternode(struct node*head)
{
	struct node *temp,*temp1,*newnode;
	int val;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data");
	scanf("%d",&newnode->data);
	printf("Enter the value to be inserted");
	scanf("%d",&val);
	temp=head;
	temp1=temp;
	while(temp1->data!=val)
	{
		temp1=temp;
		temp=temp->next;
	}
	temp1->next=newnode;
	newnode->next=temp;
return head;
}
struct node*beforenode(struct node*head)
{
	struct node *temp,*temp1,*newnode;
	int val;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data");
	scanf("%d",&newnode->data);
	printf("Enter the value to be inserted");
	scanf("%d",&val);
	temp=head;
	while(temp->data!=val)
	{
		temp1=temp;
		temp=temp->next;
	
	}
	temp1->next=newnode;
	newnode->next=temp;
return head;
}
struct node*deleteafter(struct node*head)
{
	struct node *temp,*temp1;
	int val;
	printf("Enter the value to be deleted");
	scanf("%d",&val);
	temp=head;
	temp1=temp;
	while(temp1->data!=val)
	{
		temp1=temp;
		temp=temp->next;
	}
	temp1->next=temp->next;
	free(temp);
return head;
}
struct node*deletebefore(struct node*head)
{
	struct node *temp,*temp1,*temp2;
	int val;
	printf("Enter the value to be deleted");
	scanf("%d",&val);
	temp=head;
	temp1=temp;
	temp2=temp1;
	while(temp->data!=val)
	{
		temp2=temp1;
		temp1=temp;
		temp=temp->next;
	}
	temp2->next=temp;
	free(temp1);
return head;
}
void recursivedisplay(struct node*head)
{
	struct node *temp;
	if(head==NULL)
	{
		//printf("\n Linked list is empty");
		return;
	}
	else
	{
		temp=head;
		printf("%d  ",head->data);
		recursivedisplay(temp->next);
	}
}
struct node*sortedinsertion(struct node** head)
{
	struct node *temp,*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the data");
	scanf("%d",&newnode->data);
	int key=newnode->data;
	newnode->next=NULL;
	if(*head==NULL||key<(*head)->data)
	{
		newnode->next=*head;
		*head=newnode;
	}
	
	else
	{
		temp=*head;
		while(temp->next!=NULL && temp->next->data<key)
		{
			temp=temp->next;
		}
		newnode->next=temp->next;
		temp->next=newnode;
	}
	return *head;
}

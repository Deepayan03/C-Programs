#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int data;
	struct Node* Next;
}Node;
Node* Create(Node *Head)
{

	Node* Newnode = (Node*)malloc(sizeof(Node));
	Node* p;
	printf("Enter the value : ");
	scanf("%d",&Newnode->data);
	if(Head==NULL)
	{
		Head = Newnode;
		Newnode->Next = Head;
	}
	else
	{
		p = Head;
		while(p->Next!= Head)
		{
			p = p->Next;
		}
		p->Next = Newnode;
		Newnode->Next = Head;
	}
	return Head;
	
}
Node* display(Node *Head)
{
	Node *p = Head;
	if(Head == NULL)
	{
		printf("\nLinked List is Empty\n");
	}
	else
	{
		do
		{
			printf(" %d\t",p->data);
			p = p->Next;
		}
		while(p!= Head);
	}	
	return Head;
}
Node *Largest_node(Node *Head)
{
	Node *p = Head;
	Node *temp;
	int max = p->data;
	do{
		p = p->Next;
		if(max < p->data)
		{
			max = p->data;	
			temp = p;
		}
	}
	while(p!= Head);
	printf("Max Element is : %d\n",max);
	printf("Max Address : %d\n",temp);
	return temp;
}
Node *Minimum_node(Node *Head)
{
	Node *p = Head;
	Node *temp;
	int Min = p->data;
	do{
		p = p->Next;
		if(Min > p->data)
		{
			Min = p->data;	
			temp = p;
		}
	}
	while(p!= Head);
	printf("MInimum Element is : %d\n",Min);
	printf("Minimum Address : %d\n",temp);
	return temp;
}
Node *Del_End(Node *Head)
{
	Node *p;
	p = Head;
	Node *ptr;
	if(Head == NULL)
	{
		printf("\nDeletion Not Possible..\n");
	}
	else if(Head->Next == Head)
	{
		Head = NULL;
		free(Head);
	}
	else
	{
		while(p->Next != Head)
		{
			ptr = p;
			p = p->Next;
		}
		ptr->Next = Head;
		free(p);
		printf("\nDeletion Successful\n");
		printf("Deleted Element : %d\n",p->data);
	}
	return Head;
}

int main()
{
	Node* Head = NULL;
	int choice;
		printf("\nEnter 1 to create");
		printf("\nEnter 2 to display");
		printf("\nEnter 3 to insert at beginning");
		printf("\nEnter 4 to insert at end");
		printf("\nEnter 5 to delete at beginning");
		printf("\nEnter 6 to delete at end");
		printf("\nEnter 7 to exit");
		
	while(1)
	{
		printf("Enter the choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 : Head = Create(Head);
			break;
			case 2 : Head = display(Head);
			break;
			case 3 : Head = Largest_node(Head);
			break;
			case 4 : Head = Minimum_node(Head);
			break;
			case 5 : Head = Del_End(Head);
			break;
		}
	}	
}
	

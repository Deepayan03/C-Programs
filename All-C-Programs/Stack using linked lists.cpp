#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node*next;
} stack;
stack* push(stack**,int);
int pop(stack **);
void display(stack*);
int main()
{
	stack *top=NULL;
	top=push(&top,10);
	top=push(&top,20);
	top=push(&top,30);
	top=push(&top,40);
	display(top);
	printf("\n Popped element is %d",pop(&top));
		
}
stack* push(stack **top ,int n)
{
	stack *newnode;
	newnode=(stack*)malloc(sizeof(stack));
	newnode->data=n;
	if(*top==NULL)
	{
		*top=newnode;
		newnode->next=NULL;
	}
	else
	{
		newnode->next=*top;
		*top=newnode;
		
	}
	return *top;
}
int pop(stack **top)
{
	stack *newnode,*temp;
	int x;
	if(*top==NULL)
	{
		printf("\n Can't pop Stack is already empty");
	}
	else
	{
		temp=*top;
		*top=(*top)->next;
		x=temp->data;
		free(temp);
	}
	return x;
}
void display(stack *top)
{
	stack *temp;
	temp=top;
	while(temp!=NULL)
	{
		printf("%d  ",temp->data);
		temp=temp->next;
	}
}

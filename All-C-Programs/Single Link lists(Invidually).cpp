#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}
struct node *head=NULL;
int main()
{
	struct node*one,*two,*three;
	one=(struct node *) malloc(sizeof(struct node));
	two=(struct node *) malloc(sizeof(struct node));
	three=(struct node *) malloc(sizeof(struct node));
	
	head = one;
	one->data = 10;
	one->next =two;
	two->data = 20;
	two->next =three;
	three->data =30;
	three->next =NULL;
	struct node *temp;
	 temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}

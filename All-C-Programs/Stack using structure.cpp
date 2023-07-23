#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct stack{
	int top;
	int stack[MAX];
};
int push(struct stack,int);
int pop(struct stack);
void display(struct stack);
int isfull(struct stack);
int isempty();
int main()
{
	int choice,data;
	while(1)
	{
		struct stack *s;
		printf("Enter 1 for push\n");
		printf("Enter 2 for pop\n");
		printf("Enter 3 for peek\n");
		printf("Enter 4 for display\n");
		printf("Enter 5 for exit\n");
		printf("Enter your choice:\t");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1 : printf("\nEnter the data ");
					scanf("%d",&data);
					push(&s,data);
					break;
		case 2: s=pop(&s);
				break;
		case 3: display(s);
				break;
		case 4: peek(&s);
		break;
		case 5 : exit(0);
		}
	}
}
int isfull(struct stack s)
{
	if(s.top==MAX-1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int push(struct stack* s,int data)
{
	if(isfull(s)==0)
	{
		printf("Stack is overflow");
	}
	else
	{
	s=s->stack[s->top++];
	return(s);
	}
}
void display(struct stack s)
{
	for(i=0;i<top;i++)
	{
		printf("%d",s.stack[i]);
	}
}


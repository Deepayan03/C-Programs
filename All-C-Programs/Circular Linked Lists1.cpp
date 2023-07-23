#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int data;
	struct Node* Next;
}Node;


Node* Create(Node *);
Node* display(Node *);
Node* insertAtBig(Node *);
Node* insertAtEnd(Node *);
Node* Del_Big(Node *);
Node* Del_End(Node *);
Node* cirNthDeletion(Node *);
Node* Largest_node(Node *);
Node* Minimum_node(Node *);

//Create
Node* Create(Node *Head)
{

	Node* Newnode;
	Newnode = (Node*)malloc(sizeof(Node));
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

//Display
Node* display(Node *Head)
{
	Node *p = Head;
	if(Head == NULL)
	{
		printf("\nLinked List is Empty\n");
	}
	else
	{
		int i = 1;
		do
		{
			printf("\n%d Element : %d\n",i,p->data);
			p = p->Next;
			i++;
		}
		while(p!= Head);
	}	
	return Head;
}

//Largest Node
Node* Largest_node(Node *Head)
{
	Node *p;
	p = Head;
	Node *temp;
	int max = p->data;
	p = p->Next;
	while(p!= Head)
	{
	
		if(max < p->data)
		{
			max = p->data;	
			temp = p;
		}
			p = p->Next;
	}
	printf("Max Element is : %d\n",max);
	printf("Max Address : %d\n",temp);
	return temp;
}

//Minimum Node
Node* Minimum_node(Node *Head)
{
	Node *p;
	p = Head;
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

//Insert At Beginning
Node* insertAtBig(Node *Head)
{
	Node *Newnode, *p;
	Newnode = (Node*)malloc(sizeof(Node));
	printf("Enter the value : ");
	scanf("%d",&Newnode->data);
	if(Head == NULL)
	{
		Head = Newnode;
		Newnode->Next = Head;
	}
	else
	{
		p = Head;
		while(p->Next != Head)
		{
			p = p->Next;
		}
		p->Next = Newnode;
		Newnode->Next = Head;
		Head = Newnode;
	}
	return Head;
}

//Insert At End
Node* insertAtEnd(Node *Head)
{
	Node *Newnode , *p;
	Newnode = (Node*)malloc(sizeof(Node));
	printf("Enter the value : ");
	scanf("%d",&Newnode->data);
	if(Head == NULL)
	{
		Head = Newnode;
		Newnode->Next = Head;
	}
	else
	{
		p = Head;
		while(p->Next != Head)
		{
			p = p->Next;
		}
		p->Next = Newnode;
		Newnode->Next = Head;
	}
	return Head;
}

//Delete At Biggining
Node* Del_Big(Node *Head)
{
	Node *p , *ptr;
	p = Head;
	if(Head == NULL)
	{
		printf("Deletion Not possible...\n");
	}
	else if(Head->Next == Head)
	{
		Head = NULL;
		printf("\nDeletion Successful\n");
		printf("Deleted Element : %d\n",p->data);
		free(Head);
	}
	else
	{
		p = p->Next;
		while(p != Head)
		{
			ptr = p;
			p = p->Next;
		}
		ptr->Next =  Head->Next;
		Head = Head->Next;
		printf("\nDeletion Successful\n");
		printf("Deleted Element : %d\n",p->data);
		free(p);
		
	}
	return Head;
}

//Delete At End
Node* Del_End(Node *Head)
{
	Node *temp , *temp1;
	temp = Head;
	temp1 = Head;
	if(Head == NULL)
	{
		printf("\nDeletion Not Possible...\n");
	}
	else if(Head->Next == Head)
	{
		printf("\nDeletion Successful\n");
		printf("Deleted Element : %d\n",Head->data);
		free(Head);
		Head = NULL;
	}
	else
	{
		while(temp->Next!= Head)
		{
			temp1 = temp;
			temp = temp->Next;
		}
		//temp1->Next = Head;
		//printf("%d ",temp->Next->data);
		//printf("%d ",temp->data);
		//printf("%d ",temp1->data);
		//printf("\nDeletion Successful\n");
		//printf("Deleted Element : %d\n",temp->data);
		//free(temp);	
	}
	return Head;
}
Node* cirNthDeletion(Node *Head)
{
    Node *ptr;
    Node *qtr;
	int pos;
    printf("Enter the position:- ");
    scanf("%d", &pos);
    if (Head == NULL)
    {
        printf("\nUnderflow");
    }
    	else if(Head->Next == Head)
		{
		printf("\nDeletion Successful\n");
		printf("Deleted Element : %d\n",Head->data);
		free(Head);
		Head = NULL;
		}
     else if (pos == 1)
     {

         ptr = Head;
         while (ptr->Next != Head)
             ptr = ptr->Next;
         ptr->Next = Head->Next;
         free(Head);
         Head = ptr->Next;
         printf("\nnode deleted\n");
     }
    else
    {
        ptr = Head;
        qtr = Head->Next;
        for (int i = 1; i < pos - 1; i++)
        {
            ptr = ptr->Next;
            qtr = qtr->Next;
        }
        ptr->Next = qtr->Next;
        free(qtr);
    }
	return Head;
}
Node* cirDeleteAfterNode(Node *Head){
	Node *ptr;
	ptr = Head;
	Node *qtr;
	if (Head == NULL)
	{
		printf("Deletion not possible!");
	}
	else
	{
		qtr=ptr->Next;
		ptr->Next=qtr->Next;
		printf("\nNode Deleted");
		free(qtr);
	}
	return Head;
}
int main()
{
	Node* Head = NULL;
	int choice;
	
	while(1)
	{
		printf("\nEnter 1 to create ...\n");
		printf("Enter 2 to display...\n");
		printf("Enter 3 to insert At Biggining...\n");
		printf("Enter 4 to insert At End...\n");
		printf("Enter 5 to Delete At Biggining...\n");
		printf("Enter 6 to delete at end...\n");
		printf("Enter 7 to delete at nth...\n");
		printf("Enter 8 to delete after a node of list...\n");
		printf("Enter 9 to get maximum node...\n");
		printf("Enter 10 to get minimum node...\n");
		printf("Enter 11 to exit...\n");
		printf("\nEnter the choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 : Head = Create(Head);
			break;
			case 2 : Head = display(Head);
			break;
			case 3 : Head = insertAtBig(Head);
			break;
			case 4 : Head = insertAtEnd(Head);
			break;
			case 5 : Head = Del_Big(Head);
			break;
			case 6 : Head = Del_End(Head);
			break;
			case 7 : Head = cirNthDeletion(Head);
			break;
			case 8 : Head = cirDeleteAfterNode(Head);
			break;
			case 9 : Largest_node(Head);
			break;
			case 10 : Minimum_node(Head);
			break;
			case 11 : exit(0);
		}
	}	
}

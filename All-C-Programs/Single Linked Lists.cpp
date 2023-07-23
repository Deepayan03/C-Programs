#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int make(struct node*);
int view(struct node*);
int main()
{
    struct node *root;
    root=(struct node*)malloc(sizeof(struct node));
    make(root);
    view(root);
}
int make(struct node* r)
{
    struct node *old, *newone;
    int d;
    char ans;
    newone=old=r;
    while(1)
    {
        printf("\nEnter a number");
        scanf("%d",&d);
        newone-> data=d;
        printf("\nAdd more record(yes/no)?");
        fflush(stdin);
        scanf("%c",&ans);
        if(ans== 'N'|| ans== 'n')
        {
            newone-> next= NULL;
            break;
        }
        else
        {
            old=newone;
            newone=(struct node*)malloc(sizeof(struct node));
            old-> next=newone;
        }
    }
}
        int view(struct node* r)
        
		{
            struct node *newone;
            newone=r;
            while(newone!=NULL)
            {
                printf("\nData is %d",newone-> data);
                newone=newone-> next;
                printf("\n");
            }
        }

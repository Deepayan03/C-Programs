#include<stdio.h>
#include<stdlib.h>
int mutex=1;
int empty=10;
int full=0;
int x=0;
void producer();
void consumer();
void producer()
{
	mutex--;
	full++;
	empty--;
	x++;
	printf("Produced Item %d",x);
	mutex++;
}
void consumer()
{
	mutex--;
	empty++;
	full--;
	printf("Consumed item :%d",x);
	x--;
	mutex++;
}
int main()
{
	int choice;
	printf("\n Enter 1 to produce");
	printf("\n Enter 2 to consume");
	printf("\n Enter 3 to exit\n");
	while(1)
	{
		printf("\nEnter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: if((empty!=0) && (mutex==1))
						{
							producer();
						}
						else
						{
							printf("Buffer is Full\n");
						}
						break;
			case 2: if((full!=0)&&(mutex==1))
					{
						consumer();
					}
					else
					{
						printf(" Buffer is empty\n");
					}
					break;
			case 3: exit(0);

		}
	}
}
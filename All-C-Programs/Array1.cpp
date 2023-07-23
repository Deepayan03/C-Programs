#include<stdio.h>
main()
{
	int a[20],i;
	printf("Enter twenty numbers\n");
	for(i=0;i<20;i++)
	{
		printf("N.O.%d:- ",i+1);
		scanf("%d",&a[i]);
	}
	printf("You have entered");
}


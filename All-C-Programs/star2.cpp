#include<stdio.h>
main()
{
	int i,j,k;
	for(i=0;i<10;i++)
	{
	for(k=10;k>i;k--)
	{
		printf(" ");
	}
		for(j=0;j<i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}	
	
/*	for(i=10;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			printf("x");
		}
		printf("\n");
	}
*/	
}

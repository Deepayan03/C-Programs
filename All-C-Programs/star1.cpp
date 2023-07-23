#include<stdio.h>
main()
{
	int i,j,k;
	for(i=0;i<12;i++)
	{
	for(k=15;k>i;k--)
	{
		printf(" ");
	}
		for(j=0;j<i;j++)
		{
			printf("*  ");
		}
		printf("\n");
	}	
	
/*for(i=10;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}*/

}

#include<stdio.h>
main()
{
	int i,j,k,l,m,n;
		for(i=0;i<10;i++)
	{
		for(j=20;j>i;j--)
		{
			printf("   ");
		}
		for(k=0;k<i;k++)
		{
			printf("* ");
			
		}
		printf("\n");
	}
}

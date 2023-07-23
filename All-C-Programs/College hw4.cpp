#include<stdio.h>
main()
{
	int i,j,k,l,m,n;
	printf("Enter the number of rows");
	scanf("%d",&l);
		for(i=0;i<l;i++)
	{
		for(j=l;j>i;j--)
		{
			printf("  ");
		}
		for(k=1;k<i;k++)
		{
			printf("%d   ",k);
		}
		printf("\n");
	}
}

#include<stdio.h>
main()
{
	int i,j,k,l,m;
	printf("Enter the number of rows");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}

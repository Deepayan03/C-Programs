#include<stdio.h>
main()
{
	int i,j,k;
	printf("Enter the number of rows:");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j%2);
			
			}
			printf("\n");	
	}
}

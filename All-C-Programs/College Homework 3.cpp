#include<stdio.h>
main()
{
	int i,j,k,m;
	char l;
	printf("Enter the number of rows");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		l='A';
		for(j=1;j<=i;j++)
		{
			printf(" %c",l++);
		}
		printf("\n");
	}
	
}

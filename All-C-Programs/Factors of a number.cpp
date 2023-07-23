#include<stdio.h>
main()
{
	int i,j;
	printf("Enter the numbers\n");
	scanf("%d",&j);
	printf("The factors of the entered number are\n");
	for(i=1;i<=j;i++)
	{
		if(j%i==0)
		{
			printf("%d\n",i);
		}
	}
}

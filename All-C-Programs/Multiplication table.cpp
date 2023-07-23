#include<stdio.h>
main()
{
	int i,n,m;
	printf("Enter the number  :-\t");
	scanf("%d",&n);
	printf("The multiplication table is :\n");
	for(i=1;i<=10;i++)
	{
		m=n*i;
		printf("\n %d * %d = %d",n,i,m);
	}
}

#include<stdio.h>
main()
{
	int n,i;
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("No.%d=",i+1);
		scanf("%d",&a[i]);
	}
	printf("You have entered :\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
}

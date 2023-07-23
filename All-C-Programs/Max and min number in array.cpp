#include<stdio.h>
main()
{
	int n,i,max,min;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("No.%d=",i+1);
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("The maximum number is %d\n",max);
	printf("The minimum number is %d",min);	
}

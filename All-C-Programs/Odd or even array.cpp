#include<stdio.h>
main()
{
	int n,i,o=0,e=0;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	int a[n],odd[n],even[n];
	for(i=0;i<n;i++)
	{
		printf("No.%d=",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			even[e]=a[i];
			e=e+1;
		}
		else
		{
			odd[o]=a[i];
			o=o+1;
		}
		
	}
	printf("The odd numbers are \n");
		for(i=0;i<o;i++)
	{
		printf("%d \t",odd[i]);
	}
	printf("The even numbers :\t");
		for(i=0;i<e;i++)
	{
		printf("%d \t",even[i]);
	}	
}

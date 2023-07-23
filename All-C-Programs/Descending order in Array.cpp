#include<stdio.h>
main()
{
	int i,j,k=0,l,n;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		printf("Number %d:-\t",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
	}
	printf("The numbers in descending order are:\n");
	for(i=0;i<n;i++)
	{
		printf("[%d]",a[i]);
	}
}

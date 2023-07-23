#include<stdio.h>
int main()
{
	int a[5],i,n,item,loc;
	printf("Array size : ");
	scanf("%d",&n);
	printf("Element of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("Enter the item and element to be inserted");
	scanf("%d%d",&item,&loc);
	for(i=n-1;i>=loc-1;i--)
	{
		a[loc-1]=item;
	}
	printf("Updated array");
		printf("Element of array");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);	
	}
}

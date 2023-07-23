#include<stdio.h>
int bubblesort(int *arr,int n);
int main()
{
	int i,n;
	printf("\nEnter the size of the array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements:\t");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubblesort(arr,n);
	printf("\nThe sorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
}
int bubblesort(int*arr,int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if((arr+j)<(arr+j+1))
			{
				temp=*(arr+j);
				*(arr+j) = *(arr+j+1);
				*(arr+j+1)=temp;
			}
		}
	}
	return 0;
}

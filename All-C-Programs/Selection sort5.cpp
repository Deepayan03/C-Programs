#include<stdio.h>
void selection_sort(int[] ,int);
void display(int[],int);
int main()
{
	int arr[]={20,10,40,30,50};
	int n=sizeof(arr)/sizeof(arr[0]);
	selection_sort(arr,n);
	printf("Sorted array  \n");
	display(arr,n);
}
void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
}
void selection_sort(int arr[],int n)
{
	int i,j,min,temp;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
}
#include<stdio.h>
void selection_sort(int[],int);
void display(int[],int);
void swap(int,int);
int main()
{
	int arr[]={10,50,20,40,30};
	int n = sizeof(arr)/sizeof(arr[0]);
	selection_sort(arr,n);
	display(arr,n);
}
void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
void selection_sort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		int temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
}

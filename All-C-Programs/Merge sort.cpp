#include<stdio.h>
void mergesort(int[],int,int);
void merge(int[],int,int,int);
void display(int[],int,int,int);
int main()
{
	int arr[]={10,67,98,23,44,32,69,100};
	int n = sizeof(arr)/sizeof(arr[0]);
	int low=0;
	int high=n;
	display(arr,low,high,n);
	mergesort(arr,low,high);
	display(arr,low,high,n);
}
void display(int arr[],int low,int high,int n)
{
	printf("\n");
	int i=low;
	while(i<=high-1)
	{
		printf("%d  ",arr[i]);
		i++;
	}
}
void mergesort(int arr[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}
void merge(int arr[], int low, int mid, int high)
{
	int arr1[8];
	int i=low;
	int j= mid+1;
	int k= low;
	while(i<=mid && j<=high)
	{
		if(arr[i]<arr[j])
		{
			arr1[k]=arr[i];
			i++;
			k++;
		}
		else
		{
			arr1[k]=arr[j];
			j++;
			k++;
			
			
		}
	}
	if(i>=high)
	{
		while(j<=high)
		{
			arr1[k]=arr[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			arr1[k]=arr[i];
			i++;
			k++;
		}
	i=low;
	while(i<=high)
	{
		arr[i]=arr1[i];
		i++;
	}
	arr[i]=arr1[i];
}
}
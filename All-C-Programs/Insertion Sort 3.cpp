#include<stdio.h>
void insertion_sort(int[] ,int);
void display(int[],int);
int main()
{
	int arr[]={20,10,40,30,50};
	int n=sizeof(arr)/sizeof(arr[0]);
	insertion_sort(arr,n);
	printf("Sorted array  \n");
	display(arr,n);
}
void insertion_sort(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
}

void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
}
#include<stdio.h>
int  binarysearch(int[],int,int);
int main()
{
	int arr[]={10,20,30,40,50,60};
	int element=40;
	int n =  sizeof(arr)/sizeof(int);
	int bin= binarysearch(arr,n,element);
	if(bin==-1)
	{
		printf("\nElement not found");
	}
	else
	{
		printf("Element found at index %d",bin);
	}
}
int  binarysearch(int arr[],int n,int key)
{
	int low=0;
	int high=n-1;
	while(low<=high)
	{
		int mid =(low + high)/2;
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(arr[mid]<key)
		{
				low=mid+1;
		}
		else //if(arr[mid]>key)
		{
				high=mid-1;
		}
	}
	return -1;
}

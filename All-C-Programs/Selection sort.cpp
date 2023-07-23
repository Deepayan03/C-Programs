#include<stdio.h>
void selectionsort(int[],int);
void swap(int,int);
void display(int[],int);

int main()
{
	int arr[]={10,30,15,25,46},n,i;
	n=sizeof (arr)/sizeof(arr[0]);
	display(arr,n);
	selectionsort(arr,n);
	printf("\n");
	display(arr,n);
}
void swap(int j , int k)
{
	int temp;
	temp=j;
	j=k;
	k=temp;
}
void selectionsort(int a[],int n)
{
	int temp,minindex,i,j;
	for(i=0;i<n-1;i++)
	{
		minindex=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[minindex])
			{
				minindex=j;
			}
		}
		temp=a[i];
		a[i]=a[minindex];
		a[minindex]=temp;
	}
}
void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
}
